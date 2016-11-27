/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_NTP_PARSER_TAB_H_INCLUDED
# define YY_YY_NTP_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Abbrev = 258,
     T_Age = 259,
     T_All = 260,
     T_Allan = 261,
     T_Allpeers = 262,
     T_Auth = 263,
     T_Average = 264,
     T_Bclient = 265,
     T_Beacon = 266,
     T_Broadcast = 267,
     T_Broadcastclient = 268,
     T_Broadcastdelay = 269,
     T_Burst = 270,
     T_Calibrate = 271,
     T_Ceiling = 272,
     T_Clockstats = 273,
     T_Cohort = 274,
     T_ControlKey = 275,
     T_Crypto = 276,
     T_Cryptostats = 277,
     T_Ctl = 278,
     T_Day = 279,
     T_Default = 280,
     T_Digest = 281,
     T_Disable = 282,
     T_Discard = 283,
     T_Dispersion = 284,
     T_Double = 285,
     T_Driftfile = 286,
     T_Drop = 287,
     T_Dscp = 288,
     T_Ellipsis = 289,
     T_Enable = 290,
     T_End = 291,
     T_False = 292,
     T_File = 293,
     T_Filegen = 294,
     T_Filenum = 295,
     T_Flag1 = 296,
     T_Flag2 = 297,
     T_Flag3 = 298,
     T_Flag4 = 299,
     T_Flake = 300,
     T_Floor = 301,
     T_Freq = 302,
     T_Fudge = 303,
     T_Host = 304,
     T_Huffpuff = 305,
     T_Iburst = 306,
     T_Ignore = 307,
     T_Incalloc = 308,
     T_Incmem = 309,
     T_Initalloc = 310,
     T_Initmem = 311,
     T_Includefile = 312,
     T_Integer = 313,
     T_Interface = 314,
     T_Intrange = 315,
     T_Io = 316,
     T_Ipv4 = 317,
     T_Ipv4_flag = 318,
     T_Ipv6 = 319,
     T_Ipv6_flag = 320,
     T_Kernel = 321,
     T_Key = 322,
     T_Keys = 323,
     T_Keysdir = 324,
     T_Kod = 325,
     T_Mssntp = 326,
     T_Leapfile = 327,
     T_Leapsmearinterval = 328,
     T_Limited = 329,
     T_Link = 330,
     T_Listen = 331,
     T_Logconfig = 332,
     T_Logfile = 333,
     T_Loopstats = 334,
     T_Lowpriotrap = 335,
     T_Manycastclient = 336,
     T_Manycastserver = 337,
     T_Mask = 338,
     T_Maxage = 339,
     T_Maxclock = 340,
     T_Maxdepth = 341,
     T_Maxdist = 342,
     T_Maxmem = 343,
     T_Maxpoll = 344,
     T_Mdnstries = 345,
     T_Mem = 346,
     T_Memlock = 347,
     T_Minclock = 348,
     T_Mindepth = 349,
     T_Mindist = 350,
     T_Minimum = 351,
     T_Minpoll = 352,
     T_Minsane = 353,
     T_Mode = 354,
     T_Monitor = 355,
     T_Month = 356,
     T_Mru = 357,
     T_Multicastclient = 358,
     T_Nic = 359,
     T_Nolink = 360,
     T_Nomodify = 361,
     T_Nomrulist = 362,
     T_None = 363,
     T_Nonvolatile = 364,
     T_Nopeer = 365,
     T_Noquery = 366,
     T_Noselect = 367,
     T_Noserve = 368,
     T_Notrap = 369,
     T_Notrust = 370,
     T_Ntp = 371,
     T_Ntpport = 372,
     T_NtpSignDsocket = 373,
     T_Orphan = 374,
     T_Orphanwait = 375,
     T_Panic = 376,
     T_Peer = 377,
     T_Peerstats = 378,
     T_Phone = 379,
     T_Pid = 380,
     T_Pidfile = 381,
     T_Pool = 382,
     T_Port = 383,
     T_Preempt = 384,
     T_Prefer = 385,
     T_Protostats = 386,
     T_Pw = 387,
     T_Randfile = 388,
     T_Rawstats = 389,
     T_Refid = 390,
     T_Requestkey = 391,
     T_Reset = 392,
     T_Restrict = 393,
     T_Revoke = 394,
     T_Rlimit = 395,
     T_Saveconfigdir = 396,
     T_Server = 397,
     T_Setvar = 398,
     T_Source = 399,
     T_Stacksize = 400,
     T_Statistics = 401,
     T_Stats = 402,
     T_Statsdir = 403,
     T_Step = 404,
     T_Stepback = 405,
     T_Stepfwd = 406,
     T_Stepout = 407,
     T_Stratum = 408,
     T_String = 409,
     T_Sys = 410,
     T_Sysstats = 411,
     T_Tick = 412,
     T_Time1 = 413,
     T_Time2 = 414,
     T_Timer = 415,
     T_Timingstats = 416,
     T_Tinker = 417,
     T_Tos = 418,
     T_Trap = 419,
     T_True = 420,
     T_Trustedkey = 421,
     T_Ttl = 422,
     T_Type = 423,
     T_U_int = 424,
     T_Unconfig = 425,
     T_Unpeer = 426,
     T_Version = 427,
     T_WanderThreshold = 428,
     T_Week = 429,
     T_Wildcard = 430,
     T_Xleave = 431,
     T_Year = 432,
     T_Flag = 433,
     T_EOC = 434,
     T_Simulate = 435,
     T_Beep_Delay = 436,
     T_Sim_Duration = 437,
     T_Server_Offset = 438,
     T_Duration = 439,
     T_Freq_Offset = 440,
     T_Wander = 441,
     T_Jitter = 442,
     T_Prop_Delay = 443,
     T_Proc_Delay = 444
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 51 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"

	char *			String;
	double			Double;
	int			Integer;
	unsigned		U_int;
	gen_fifo *		Generic_fifo;
	attr_val *		Attr_val;
	attr_val_fifo *		Attr_val_fifo;
	int_fifo *		Int_fifo;
	string_fifo *		String_fifo;
	address_node *		Address_node;
	address_fifo *		Address_fifo;
	setvar_node *		Set_var;
	server_info *		Sim_server;
	server_info_fifo *	Sim_server_fifo;
	script_info *		Sim_script;
	script_info_fifo *	Sim_script_fifo;


/* Line 2053 of yacc.c  */
#line 266 "ntp_parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_NTP_PARSER_TAB_H_INCLUDED  */
