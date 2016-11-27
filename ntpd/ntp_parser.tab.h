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
     T_Autokey = 264,
     T_Automax = 265,
     T_Average = 266,
     T_Bclient = 267,
     T_Beacon = 268,
     T_Broadcast = 269,
     T_Broadcastclient = 270,
     T_Broadcastdelay = 271,
     T_Burst = 272,
     T_Calibrate = 273,
     T_Ceiling = 274,
     T_Clockstats = 275,
     T_Cohort = 276,
     T_ControlKey = 277,
     T_Crypto = 278,
     T_Cryptostats = 279,
     T_Ctl = 280,
     T_Day = 281,
     T_Default = 282,
     T_Digest = 283,
     T_Disable = 284,
     T_Discard = 285,
     T_Dispersion = 286,
     T_Double = 287,
     T_Driftfile = 288,
     T_Drop = 289,
     T_Dscp = 290,
     T_Ellipsis = 291,
     T_Enable = 292,
     T_End = 293,
     T_False = 294,
     T_File = 295,
     T_Filegen = 296,
     T_Filenum = 297,
     T_Flag1 = 298,
     T_Flag2 = 299,
     T_Flag3 = 300,
     T_Flag4 = 301,
     T_Flake = 302,
     T_Floor = 303,
     T_Freq = 304,
     T_Fudge = 305,
     T_Host = 306,
     T_Huffpuff = 307,
     T_Iburst = 308,
     T_Ident = 309,
     T_Ignore = 310,
     T_Incalloc = 311,
     T_Incmem = 312,
     T_Initalloc = 313,
     T_Initmem = 314,
     T_Includefile = 315,
     T_Integer = 316,
     T_Interface = 317,
     T_Intrange = 318,
     T_Io = 319,
     T_Ipv4 = 320,
     T_Ipv4_flag = 321,
     T_Ipv6 = 322,
     T_Ipv6_flag = 323,
     T_Kernel = 324,
     T_Key = 325,
     T_Keys = 326,
     T_Keysdir = 327,
     T_Kod = 328,
     T_Mssntp = 329,
     T_Leapfile = 330,
     T_Leapsmearinterval = 331,
     T_Limited = 332,
     T_Link = 333,
     T_Listen = 334,
     T_Logconfig = 335,
     T_Logfile = 336,
     T_Loopstats = 337,
     T_Lowpriotrap = 338,
     T_Manycastclient = 339,
     T_Manycastserver = 340,
     T_Mask = 341,
     T_Maxage = 342,
     T_Maxclock = 343,
     T_Maxdepth = 344,
     T_Maxdist = 345,
     T_Maxmem = 346,
     T_Maxpoll = 347,
     T_Mdnstries = 348,
     T_Mem = 349,
     T_Memlock = 350,
     T_Minclock = 351,
     T_Mindepth = 352,
     T_Mindist = 353,
     T_Minimum = 354,
     T_Minpoll = 355,
     T_Minsane = 356,
     T_Mode = 357,
     T_Monitor = 358,
     T_Month = 359,
     T_Mru = 360,
     T_Multicastclient = 361,
     T_Nic = 362,
     T_Nolink = 363,
     T_Nomodify = 364,
     T_Nomrulist = 365,
     T_None = 366,
     T_Nonvolatile = 367,
     T_Nopeer = 368,
     T_Noquery = 369,
     T_Noselect = 370,
     T_Noserve = 371,
     T_Notrap = 372,
     T_Notrust = 373,
     T_Ntp = 374,
     T_Ntpport = 375,
     T_NtpSignDsocket = 376,
     T_Orphan = 377,
     T_Orphanwait = 378,
     T_Panic = 379,
     T_Peer = 380,
     T_Peerstats = 381,
     T_Phone = 382,
     T_Pid = 383,
     T_Pidfile = 384,
     T_Pool = 385,
     T_Port = 386,
     T_Preempt = 387,
     T_Prefer = 388,
     T_Protostats = 389,
     T_Pw = 390,
     T_Randfile = 391,
     T_Rawstats = 392,
     T_Refid = 393,
     T_Requestkey = 394,
     T_Reset = 395,
     T_Restrict = 396,
     T_Revoke = 397,
     T_Rlimit = 398,
     T_Saveconfigdir = 399,
     T_Server = 400,
     T_Setvar = 401,
     T_Source = 402,
     T_Stacksize = 403,
     T_Statistics = 404,
     T_Stats = 405,
     T_Statsdir = 406,
     T_Step = 407,
     T_Stepback = 408,
     T_Stepfwd = 409,
     T_Stepout = 410,
     T_Stratum = 411,
     T_String = 412,
     T_Sys = 413,
     T_Sysstats = 414,
     T_Tick = 415,
     T_Time1 = 416,
     T_Time2 = 417,
     T_Timer = 418,
     T_Timingstats = 419,
     T_Tinker = 420,
     T_Tos = 421,
     T_Trap = 422,
     T_True = 423,
     T_Trustedkey = 424,
     T_Ttl = 425,
     T_Type = 426,
     T_U_int = 427,
     T_Unconfig = 428,
     T_Unpeer = 429,
     T_Version = 430,
     T_WanderThreshold = 431,
     T_Week = 432,
     T_Wildcard = 433,
     T_Xleave = 434,
     T_Year = 435,
     T_Flag = 436,
     T_EOC = 437,
     T_Simulate = 438,
     T_Beep_Delay = 439,
     T_Sim_Duration = 440,
     T_Server_Offset = 441,
     T_Duration = 442,
     T_Freq_Offset = 443,
     T_Wander = 444,
     T_Jitter = 445,
     T_Prop_Delay = 446,
     T_Proc_Delay = 447
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
#line 269 "ntp_parser.tab.h"
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
