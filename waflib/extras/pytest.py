#! /usr/bin/env python
# encoding: utf-8
# WARNING! Do not edit! https://waf.io/book/index.html#_obtaining_the_waf_file

import os
from waflib import Task,TaskGen,Errors,Utils,Logs
from waflib.Tools import ccroot
from waflib import Node
def _process_use_rec(self,name):
	if name in self.pytest_use_not or name in self.pytest_use_seen:
		return
	try:
		tg=self.bld.get_tgen_by_name(name)
	except Errors.WafError:
		self.pytest_use_not.add(name)
		return
	self.pytest_use_seen.append(name)
	tg.post()
	for n in self.to_list(getattr(tg,'use',[])):
		_process_use_rec(self,n)
@TaskGen.feature('pytest')
@TaskGen.after_method('process_source','apply_link')
def pytest_process_use(self):
	self.pytest_use_not=set()
	self.pytest_use_seen=[]
	self.pytest_paths=[]
	self.pytest_libpaths=[]
	self.pytest_dep_nodes=[]
	names=self.to_list(getattr(self,'use',[]))
	for name in names:
		_process_use_rec(self,name)
	def extend_unique(lst,var):
		ext=[]
		for x in Utils.to_list(var):
			if x not in lst:
				ext.append(x)
		lst.extend(ext)
	for name in self.pytest_use_seen:
		tg=self.bld.get_tgen_by_name(name)
		extend_unique(self.pytest_paths,getattr(tg,'pytest_path',[]))
		extend_unique(self.pytest_libpaths,getattr(tg,'pytest_libpath',[]))
		if'py'in tg.features:
			if'buildcopy'in tg.features:
				pypath=getattr(tg,'install_from',tg.path)
				extend_unique(self.pytest_paths,pypath.get_bld().abspath())
				extend_unique(self.pytest_dep_nodes,[o for task in getattr(tg,'tasks',[])for o in getattr(task,'outputs',[])])
			else:
				extend_unique(self.pytest_dep_nodes,[s for s in tg.source if s.suffix()=='.py'])
				pypath=getattr(tg,'install_from',tg.path)
				extend_unique(self.pytest_paths,pypath.abspath())
		if getattr(tg,'link_task',None):
			if not isinstance(tg.link_task,ccroot.stlink_task):
				extend_unique(self.pytest_dep_nodes,tg.link_task.outputs)
				extend_unique(self.pytest_libpaths,tg.link_task.env.LIBPATH)
				if'pyext'in tg.features:
					extend_unique(self.pytest_libpaths,tg.link_task.env.LIBPATH_PYEXT)
@TaskGen.feature('pytest')
@TaskGen.after_method('pytest_process_use')
def make_pytest(self):
	nodes=self.to_nodes(self.pytest_source)
	tsk=self.create_task('utest',nodes)
	tsk.dep_nodes.extend(self.pytest_dep_nodes)
	if getattr(self,'ut_str',None):
		self.ut_run,lst=Task.compile_fun(self.ut_str,shell=getattr(self,'ut_shell',False))
		tsk.vars=lst+tsk.vars
	if getattr(self,'ut_cwd',None):
		if isinstance(self.ut_cwd,str):
			if os.path.isabs(self.ut_cwd):
				self.ut_cwd=self.bld.root.make_node(self.ut_cwd)
			else:
				self.ut_cwd=self.path.make_node(self.ut_cwd)
	else:
		if tsk.inputs:
			self.ut_cwd=tsk.inputs[0].parent
		else:
			raise Errors.WafError("no valid input files for pytest task, check pytest_source value")
	if not self.ut_cwd.exists():
		self.ut_cwd.mkdir()
	if not hasattr(self,'ut_env'):
		self.ut_env=dict(os.environ)
		def add_paths(var,lst):
			lst=[str(n)for n in lst]
			Logs.debug("ut: %s: Adding paths %s=%s",self,var,lst)
			self.ut_env[var]=os.pathsep.join(lst)+os.pathsep+self.ut_env.get(var,'')
		add_paths('PYTHONPATH',self.pytest_paths)
		if Utils.is_win32:
			add_paths('PATH',self.pytest_libpaths)
		elif Utils.unversioned_sys_platform()=='darwin':
			add_paths('DYLD_LIBRARY_PATH',self.pytest_libpaths)
			add_paths('LD_LIBRARY_PATH',self.pytest_libpaths)
		else:
			add_paths('LD_LIBRARY_PATH',self.pytest_libpaths)
