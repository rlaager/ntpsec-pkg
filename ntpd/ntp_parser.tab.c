/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 13 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"

  #include <config.h>

  #include "ntp.h"
  #include "ntpd.h"
  #include "ntp_machine.h"
  #include "ntp_stdlib.h"
  #include "ntp_filegen.h"
  #include "ntp_scanner.h"
  #include "ntp_config.h"
  #include "ntp_crypto.h"

  #include "ntpsim.h"		/* HMS: Do we really want this all the time? */
				/* SK: It might be a good idea to always
				   include the simulator code. That way
				   someone can use the same configuration file
				   for both the simulator and the daemon
				*/

  #define YYMALLOC	emalloc
  #define YYFREE	free
  #define YYERROR_VERBOSE
  #define YYMAXDEPTH	1000	/* stop the madness sooner */
  void yyerror(const char *msg);

  #ifdef SIM
  #  define ONLY_SIM(a)	(a)
  #else
  #  define ONLY_SIM(a)	NULL
  #endif

/* Line 371 of yacc.c  */
#line 100 "ntp_parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ntp_parser.tab.h".  */
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
/* Line 387 of yacc.c  */
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


/* Line 387 of yacc.c  */
#line 355 "ntp_parser.tab.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 383 "ntp_parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  209
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  198
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  312
/* YYNRULES -- Number of states.  */
#define YYNSTATES  418

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   447

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     194,   195,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   193,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   196,     2,   197,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    12,    15,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    46,    48,    50,    52,    54,    56,    58,    61,    63,
      65,    67,    68,    71,    73,    75,    77,    79,    81,    83,
      85,    87,    89,    91,    93,    95,    98,   101,   103,   105,
     107,   109,   111,   113,   116,   118,   121,   123,   125,   127,
     130,   133,   136,   139,   142,   145,   148,   151,   154,   157,
     160,   163,   164,   167,   170,   173,   175,   177,   179,   181,
     183,   186,   189,   191,   194,   197,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   223,   226,   230,
     233,   235,   237,   239,   241,   243,   245,   247,   249,   251,
     252,   255,   258,   261,   263,   265,   267,   269,   271,   273,
     275,   277,   279,   281,   283,   285,   287,   290,   293,   297,
     303,   307,   312,   317,   321,   322,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   358,   360,   363,   365,   367,   369,   372,   374,
     377,   379,   381,   383,   385,   387,   389,   391,   393,   397,
     400,   402,   405,   408,   411,   414,   417,   419,   421,   423,
     425,   427,   429,   432,   435,   437,   440,   442,   444,   446,
     449,   452,   455,   457,   459,   461,   463,   465,   467,   469,
     471,   473,   475,   478,   481,   483,   486,   488,   490,   492,
     494,   496,   498,   500,   502,   504,   506,   508,   510,   513,
     516,   519,   522,   526,   528,   531,   534,   537,   540,   544,
     547,   549,   551,   553,   555,   557,   559,   561,   563,   565,
     567,   569,   572,   573,   578,   580,   581,   582,   585,   588,
     591,   594,   596,   598,   602,   606,   608,   610,   612,   614,
     616,   618,   620,   622,   624,   627,   630,   632,   634,   636,
     638,   640,   642,   644,   646,   649,   651,   654,   656,   658,
     660,   666,   669,   671,   674,   676,   678,   680,   682,   684,
     686,   692,   694,   698,   701,   705,   707,   709,   712,   714,
     720,   725,   729,   732,   734,   741,   745,   748,   752,   754,
     756,   758,   760
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     199,     0,    -1,   200,    -1,   200,   201,   182,    -1,   201,
     182,    -1,     1,   182,    -1,    -1,   202,    -1,   215,    -1,
     217,    -1,   218,    -1,   227,    -1,   235,    -1,   222,    -1,
     244,    -1,   249,    -1,   253,    -1,   258,    -1,   262,    -1,
     289,    -1,   203,   204,   207,    -1,   145,    -1,   130,    -1,
     125,    -1,    14,    -1,    84,    -1,   205,    -1,   206,   157,
      -1,   157,    -1,    66,    -1,    68,    -1,    -1,   207,   208,
      -1,   209,    -1,   211,    -1,   213,    -1,   210,    -1,     9,
      -1,    17,    -1,    53,    -1,   115,    -1,   132,    -1,   133,
      -1,   168,    -1,   179,    -1,   212,    61,    -1,   212,   172,
      -1,    70,    -1,   100,    -1,    92,    -1,   170,    -1,   102,
      -1,   175,    -1,   214,   157,    -1,    54,    -1,   216,   204,
      -1,   173,    -1,   174,    -1,    15,    -1,    85,   286,    -1,
     106,   286,    -1,    93,    61,    -1,    10,    61,    -1,    22,
      61,    -1,    23,   219,    -1,    71,   157,    -1,    72,   157,
      -1,   139,    61,    -1,   142,    61,    -1,   169,   282,    -1,
     121,   157,    -1,    -1,   219,   220,    -1,   221,   157,    -1,
     142,    61,    -1,    51,    -1,    54,    -1,   135,    -1,   136,
      -1,    28,    -1,   166,   223,    -1,   223,   224,    -1,   224,
      -1,   225,    61,    -1,   226,   288,    -1,    21,   287,    -1,
      19,    -1,    48,    -1,   122,    -1,   123,    -1,   101,    -1,
      13,    -1,    98,    -1,    90,    -1,    96,    -1,    88,    -1,
     149,   228,    -1,   151,   157,    -1,    41,   229,   230,    -1,
     228,   229,    -1,   229,    -1,    20,    -1,    24,    -1,    82,
      -1,   126,    -1,   137,    -1,   159,    -1,   164,    -1,   134,
      -1,    -1,   230,   231,    -1,    40,   157,    -1,   171,   234,
      -1,   232,    -1,   233,    -1,    78,    -1,   108,    -1,    37,
      -1,    29,    -1,   111,    -1,   128,    -1,    26,    -1,   177,
      -1,   104,    -1,   180,    -1,     4,    -1,    30,   238,    -1,
     105,   241,    -1,   141,   204,   236,    -1,   141,   205,    86,
     205,   236,    -1,   141,    27,   236,    -1,   141,    66,    27,
     236,    -1,   141,    68,    27,   236,    -1,   141,   147,   236,
      -1,    -1,   236,   237,    -1,    47,    -1,    55,    -1,    73,
      -1,    74,    -1,    77,    -1,    83,    -1,   109,    -1,   110,
      -1,   113,    -1,   114,    -1,   116,    -1,   117,    -1,   118,
      -1,   120,    -1,   175,    -1,   238,   239,    -1,   239,    -1,
     240,    61,    -1,    11,    -1,    99,    -1,   103,    -1,   241,
     242,    -1,   242,    -1,   243,    61,    -1,    56,    -1,    57,
      -1,    58,    -1,    59,    -1,    87,    -1,    89,    -1,    91,
      -1,    97,    -1,    50,   204,   245,    -1,   245,   246,    -1,
     246,    -1,   247,   288,    -1,   248,   287,    -1,   156,    61,
      -1,     3,   157,    -1,   138,   157,    -1,   161,    -1,   162,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,   143,
     250,    -1,   250,   251,    -1,   251,    -1,   252,    61,    -1,
      95,    -1,   148,    -1,    42,    -1,    37,   254,    -1,    29,
     254,    -1,   254,   255,    -1,   255,    -1,   256,    -1,   257,
      -1,     8,    -1,    12,    -1,    18,    -1,    69,    -1,   103,
      -1,   119,    -1,   150,    -1,   165,   259,    -1,   259,   260,
      -1,   260,    -1,   261,   288,    -1,     6,    -1,    31,    -1,
      49,    -1,    52,    -1,   124,    -1,   152,    -1,   153,    -1,
     154,    -1,   155,    -1,   160,    -1,   274,    -1,   278,    -1,
     263,   288,    -1,   264,    61,    -1,   265,   157,    -1,   266,
     157,    -1,    60,   157,   201,    -1,    38,    -1,    33,   267,
      -1,    80,   272,    -1,   127,   285,    -1,   146,   268,    -1,
     167,   205,   270,    -1,   170,   281,    -1,    16,    -1,   112,
      -1,   160,    -1,    35,    -1,    76,    -1,    54,    -1,    75,
      -1,    81,    -1,   129,    -1,   144,    -1,   157,    -1,   157,
      32,    -1,    -1,   157,   193,   157,   269,    -1,    27,    -1,
      -1,    -1,   270,   271,    -1,   131,    61,    -1,    62,   205,
      -1,   272,   273,    -1,   273,    -1,   157,    -1,   275,   277,
     276,    -1,   275,   277,   157,    -1,    62,    -1,   107,    -1,
       5,    -1,    65,    -1,    67,    -1,   178,    -1,    79,    -1,
      55,    -1,    34,    -1,   140,   279,    -1,   279,   280,    -1,
     280,    -1,     7,    -1,     8,    -1,    25,    -1,    64,    -1,
      94,    -1,   158,    -1,   163,    -1,   281,    61,    -1,    61,
      -1,   282,   283,    -1,   283,    -1,    61,    -1,   284,    -1,
     194,    61,    36,    61,   195,    -1,   285,   157,    -1,   157,
      -1,   286,   204,    -1,   204,    -1,    61,    -1,   168,    -1,
      39,    -1,    61,    -1,    32,    -1,   290,   196,   291,   294,
     197,    -1,   183,    -1,   291,   292,   182,    -1,   292,   182,
      -1,   293,   193,   288,    -1,   184,    -1,   185,    -1,   294,
     295,    -1,   295,    -1,   297,   196,   296,   298,   197,    -1,
     186,   193,   288,   182,    -1,   145,   193,   204,    -1,   298,
     299,    -1,   299,    -1,   187,   193,   288,   196,   300,   197,
      -1,   300,   301,   182,    -1,   301,   182,    -1,   302,   193,
     288,    -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,
     192,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   365,   365,   369,   370,   371,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     407,   417,   418,   419,   420,   421,   425,   426,   431,   436,
     438,   444,   445,   453,   454,   455,   459,   464,   465,   466,
     467,   468,   469,   470,   471,   475,   477,   482,   483,   484,
     485,   486,   487,   491,   496,   505,   515,   516,   526,   528,
     530,   532,   543,   550,   552,   557,   559,   561,   567,   569,
     578,   584,   585,   593,   595,   607,   608,   609,   610,   611,
     620,   625,   630,   638,   640,   642,   647,   648,   649,   650,
     651,   652,   656,   657,   658,   659,   668,   670,   679,   689,
     694,   702,   703,   704,   705,   706,   707,   708,   709,   714,
     715,   723,   733,   742,   757,   762,   763,   767,   768,   772,
     773,   774,   775,   776,   777,   778,   787,   791,   795,   803,
     811,   819,   834,   849,   862,   863,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   889,   894,   902,   907,   908,   909,   913,   918,   926,
     931,   932,   933,   934,   935,   936,   937,   938,   946,   956,
     961,   969,   971,   973,   975,   977,   982,   983,   987,   988,
     989,   990,   998,  1003,  1008,  1016,  1021,  1022,  1023,  1032,
    1034,  1039,  1044,  1052,  1054,  1071,  1072,  1073,  1074,  1075,
    1076,  1080,  1088,  1093,  1098,  1106,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1118,  1119,  1120,  1129,  1130,  1131,  1138,
    1145,  1152,  1168,  1187,  1189,  1191,  1193,  1195,  1197,  1204,
    1209,  1210,  1211,  1215,  1219,  1228,  1229,  1233,  1234,  1235,
    1239,  1250,  1260,  1269,  1274,  1276,  1281,  1282,  1290,  1292,
    1300,  1305,  1313,  1338,  1345,  1355,  1356,  1360,  1361,  1362,
    1363,  1367,  1368,  1369,  1373,  1378,  1383,  1391,  1392,  1393,
    1394,  1395,  1396,  1397,  1407,  1412,  1420,  1425,  1433,  1435,
    1439,  1444,  1449,  1457,  1462,  1470,  1479,  1480,  1484,  1485,
    1494,  1512,  1516,  1521,  1529,  1534,  1535,  1539,  1544,  1552,
    1557,  1562,  1567,  1572,  1580,  1585,  1590,  1598,  1603,  1604,
    1605,  1606,  1607
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Abbrev", "T_Age", "T_All", "T_Allan",
  "T_Allpeers", "T_Auth", "T_Autokey", "T_Automax", "T_Average",
  "T_Bclient", "T_Beacon", "T_Broadcast", "T_Broadcastclient",
  "T_Broadcastdelay", "T_Burst", "T_Calibrate", "T_Ceiling",
  "T_Clockstats", "T_Cohort", "T_ControlKey", "T_Crypto", "T_Cryptostats",
  "T_Ctl", "T_Day", "T_Default", "T_Digest", "T_Disable", "T_Discard",
  "T_Dispersion", "T_Double", "T_Driftfile", "T_Drop", "T_Dscp",
  "T_Ellipsis", "T_Enable", "T_End", "T_False", "T_File", "T_Filegen",
  "T_Filenum", "T_Flag1", "T_Flag2", "T_Flag3", "T_Flag4", "T_Flake",
  "T_Floor", "T_Freq", "T_Fudge", "T_Host", "T_Huffpuff", "T_Iburst",
  "T_Ident", "T_Ignore", "T_Incalloc", "T_Incmem", "T_Initalloc",
  "T_Initmem", "T_Includefile", "T_Integer", "T_Interface", "T_Intrange",
  "T_Io", "T_Ipv4", "T_Ipv4_flag", "T_Ipv6", "T_Ipv6_flag", "T_Kernel",
  "T_Key", "T_Keys", "T_Keysdir", "T_Kod", "T_Mssntp", "T_Leapfile",
  "T_Leapsmearinterval", "T_Limited", "T_Link", "T_Listen", "T_Logconfig",
  "T_Logfile", "T_Loopstats", "T_Lowpriotrap", "T_Manycastclient",
  "T_Manycastserver", "T_Mask", "T_Maxage", "T_Maxclock", "T_Maxdepth",
  "T_Maxdist", "T_Maxmem", "T_Maxpoll", "T_Mdnstries", "T_Mem",
  "T_Memlock", "T_Minclock", "T_Mindepth", "T_Mindist", "T_Minimum",
  "T_Minpoll", "T_Minsane", "T_Mode", "T_Monitor", "T_Month", "T_Mru",
  "T_Multicastclient", "T_Nic", "T_Nolink", "T_Nomodify", "T_Nomrulist",
  "T_None", "T_Nonvolatile", "T_Nopeer", "T_Noquery", "T_Noselect",
  "T_Noserve", "T_Notrap", "T_Notrust", "T_Ntp", "T_Ntpport",
  "T_NtpSignDsocket", "T_Orphan", "T_Orphanwait", "T_Panic", "T_Peer",
  "T_Peerstats", "T_Phone", "T_Pid", "T_Pidfile", "T_Pool", "T_Port",
  "T_Preempt", "T_Prefer", "T_Protostats", "T_Pw", "T_Randfile",
  "T_Rawstats", "T_Refid", "T_Requestkey", "T_Reset", "T_Restrict",
  "T_Revoke", "T_Rlimit", "T_Saveconfigdir", "T_Server", "T_Setvar",
  "T_Source", "T_Stacksize", "T_Statistics", "T_Stats", "T_Statsdir",
  "T_Step", "T_Stepback", "T_Stepfwd", "T_Stepout", "T_Stratum",
  "T_String", "T_Sys", "T_Sysstats", "T_Tick", "T_Time1", "T_Time2",
  "T_Timer", "T_Timingstats", "T_Tinker", "T_Tos", "T_Trap", "T_True",
  "T_Trustedkey", "T_Ttl", "T_Type", "T_U_int", "T_Unconfig", "T_Unpeer",
  "T_Version", "T_WanderThreshold", "T_Week", "T_Wildcard", "T_Xleave",
  "T_Year", "T_Flag", "T_EOC", "T_Simulate", "T_Beep_Delay",
  "T_Sim_Duration", "T_Server_Offset", "T_Duration", "T_Freq_Offset",
  "T_Wander", "T_Jitter", "T_Prop_Delay", "T_Proc_Delay", "'='", "'('",
  "')'", "'{'", "'}'", "$accept", "configuration", "command_list",
  "command", "server_command", "client_type", "address", "ip_address",
  "address_fam", "option_list", "option", "option_flag",
  "option_flag_keyword", "option_int", "option_int_keyword", "option_str",
  "option_str_keyword", "unpeer_command", "unpeer_keyword",
  "other_mode_command", "authentication_command", "crypto_command_list",
  "crypto_command", "crypto_str_keyword", "orphan_mode_command",
  "tos_option_list", "tos_option", "tos_option_int_keyword",
  "tos_option_dbl_keyword", "monitoring_command", "stats_list", "stat",
  "filegen_option_list", "filegen_option", "link_nolink", "enable_disable",
  "filegen_type", "access_control_command", "ac_flag_list",
  "access_control_flag", "discard_option_list", "discard_option",
  "discard_option_keyword", "mru_option_list", "mru_option",
  "mru_option_keyword", "fudge_command", "fudge_factor_list",
  "fudge_factor", "fudge_factor_dbl_keyword", "fudge_factor_bool_keyword",
  "rlimit_command", "rlimit_option_list", "rlimit_option",
  "rlimit_option_keyword", "system_option_command", "system_option_list",
  "system_option", "system_option_flag_keyword",
  "system_option_local_flag_keyword", "tinker_command",
  "tinker_option_list", "tinker_option", "tinker_option_keyword",
  "miscellaneous_command", "misc_cmd_dbl_keyword", "misc_cmd_int_keyword",
  "misc_cmd_str_keyword", "misc_cmd_str_lcl_keyword", "drift_parm",
  "variable_assign", "t_default_or_zero", "trap_option_list",
  "trap_option", "log_config_list", "log_config_command",
  "interface_command", "interface_nic", "nic_rule_class",
  "nic_rule_action", "reset_command", "counter_set_list",
  "counter_set_keyword", "integer_list", "integer_list_range",
  "integer_list_range_elt", "integer_range", "string_list", "address_list",
  "boolean", "number", "simulate_command", "sim_conf_start",
  "sim_init_statement_list", "sim_init_statement", "sim_init_keyword",
  "sim_server_list", "sim_server", "sim_server_offset", "sim_server_name",
  "sim_act_list", "sim_act", "sim_act_stmt_list", "sim_act_stmt",
  "sim_act_keyword", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,    61,    40,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   198,   199,   200,   200,   200,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     202,   203,   203,   203,   203,   203,   204,   204,   205,   206,
     206,   207,   207,   208,   208,   208,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   211,   211,   212,   212,   212,
     212,   212,   212,   213,   214,   215,   216,   216,   217,   217,
     217,   217,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   219,   219,   220,   220,   221,   221,   221,   221,   221,
     222,   223,   223,   224,   224,   224,   225,   225,   225,   225,
     225,   225,   226,   226,   226,   226,   227,   227,   227,   228,
     228,   229,   229,   229,   229,   229,   229,   229,   229,   230,
     230,   231,   231,   231,   231,   232,   232,   233,   233,   234,
     234,   234,   234,   234,   234,   234,   235,   235,   235,   235,
     235,   235,   235,   235,   236,   236,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   238,   238,   239,   240,   240,   240,   241,   241,   242,
     243,   243,   243,   243,   243,   243,   243,   243,   244,   245,
     245,   246,   246,   246,   246,   246,   247,   247,   248,   248,
     248,   248,   249,   250,   250,   251,   252,   252,   252,   253,
     253,   254,   254,   255,   255,   256,   256,   256,   256,   256,
     256,   257,   258,   259,   259,   260,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   263,   264,   264,   265,   265,   266,   266,   266,
     267,   267,   267,   268,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   274,   274,   275,   275,   276,   276,   276,
     276,   277,   277,   277,   278,   279,   279,   280,   280,   280,
     280,   280,   280,   280,   281,   281,   282,   282,   283,   283,
     284,   285,   285,   286,   286,   287,   287,   287,   288,   288,
     289,   290,   291,   291,   292,   293,   293,   294,   294,   295,
     296,   297,   298,   298,   299,   300,   300,   301,   302,   302,
     302,   302,   302
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     2,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     5,
       3,     4,     4,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     3,     1,     2,     2,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     1,     0,     0,     2,     2,     2,
       2,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       5,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     2,     3,     1,     1,     2,     1,     5,
       4,     3,     2,     1,     6,     3,     2,     3,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,    24,    58,   230,     0,    71,     0,     0,
     242,   233,     0,   223,     0,     0,   235,     0,   255,     0,
       0,   236,   234,     0,   237,    25,     0,     0,     0,     0,
     256,   231,     0,    23,     0,   238,    22,     0,     0,     0,
       0,     0,   239,    21,     0,     0,     0,   232,     0,     0,
       0,     0,     0,    56,    57,   291,     0,     2,     0,     7,
       0,     8,     0,     9,    10,    13,    11,    12,    14,    15,
      16,    17,    18,     0,     0,     0,     0,   216,     0,   217,
      19,     0,     5,    62,    63,    64,   195,   196,   197,   198,
     199,   200,   201,   190,   192,   193,   194,   154,   155,   156,
     126,   152,     0,   240,   224,   189,   101,   102,   103,   104,
     108,   105,   106,   107,   109,    29,    30,    28,     0,    26,
       0,     6,    65,    66,   252,   225,   251,   284,    59,    61,
     160,   161,   162,   163,   164,   165,   166,   167,   127,   158,
       0,    60,    70,   282,   226,    67,   267,   268,   269,   270,
     271,   272,   273,   264,   266,   134,    29,    30,   134,   134,
      26,    68,   188,   186,   187,   182,   184,     0,     0,   227,
      96,   100,    97,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   202,   204,     0,    91,    86,     0,    87,
      95,    93,    94,    92,    90,    88,    89,    80,    82,     0,
       0,   246,   278,     0,    69,   277,   279,   275,   229,     1,
       0,     4,    31,    55,   289,   288,   218,   219,   220,   221,
     263,   262,   261,     0,     0,    79,    75,    76,    77,    78,
       0,    72,     0,   191,   151,   153,   241,    98,     0,   178,
     179,   180,   181,     0,     0,   176,   177,   168,   170,     0,
       0,    27,   222,   250,   283,   157,   159,   281,   265,   130,
     134,   134,   133,   128,     0,   183,   185,     0,    99,   203,
     205,   287,   285,   286,    85,    81,    83,    84,   228,     0,
     276,   274,     3,    20,   257,   258,   259,   254,   260,   253,
     295,   296,     0,     0,     0,    74,    73,   118,   117,     0,
     115,   116,     0,   110,   113,   114,   174,   175,   173,   169,
     171,   172,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   135,   131,   132,
     134,   245,     0,     0,   247,     0,    37,    38,    39,    54,
      47,    49,    48,    51,    40,    41,    42,    43,    50,    52,
      44,    32,    33,    36,    34,     0,    35,     0,     0,     0,
       0,   298,     0,   293,     0,   111,   125,   121,   123,   119,
     120,   122,   124,   112,   129,   244,   243,   249,   248,     0,
      45,    46,    53,     0,   292,   290,   297,     0,   294,   280,
     301,     0,     0,     0,     0,     0,   303,     0,     0,   299,
     302,   300,     0,     0,   308,   309,   310,   311,   312,     0,
       0,     0,   304,     0,   306,     0,   305,   307
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,    57,    58,    59,    60,   127,   119,   120,   283,
     351,   352,   353,   354,   355,   356,   357,    61,    62,    63,
      64,    85,   231,   232,    65,   197,   198,   199,   200,    66,
     170,   114,   237,   303,   304,   305,   373,    67,   259,   327,
     100,   101,   102,   138,   139,   140,    68,   247,   248,   249,
     250,    69,   165,   166,   167,    70,    93,    94,    95,    96,
      71,   183,   184,   185,    72,    73,    74,    75,    76,   104,
     169,   376,   278,   334,   125,   126,    77,    78,   289,   223,
      79,   153,   154,   208,   204,   205,   206,   144,   128,   274,
     216,    80,    81,   292,   293,   294,   360,   361,   392,   362,
     395,   396,   409,   410,   411
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -184
static const yytype_int16 yypact[] =
{
      13,  -157,   -30,  -184,  -184,  -184,   -17,  -184,   211,    -4,
    -119,  -184,   211,  -184,   210,   -57,  -184,  -104,  -184,  -102,
    -101,  -184,  -184,  -100,  -184,  -184,   -57,    -3,   244,   -57,
    -184,  -184,   -93,  -184,   -89,  -184,  -184,    15,   120,    -6,
      16,   -34,  -184,  -184,   -83,   210,   -79,  -184,   117,   514,
     -74,   -58,    25,  -184,  -184,  -184,    87,   183,   -92,  -184,
     -57,  -184,   -57,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,    -2,    30,   -65,   -61,  -184,   -14,  -184,
    -184,   -80,  -184,  -184,  -184,   265,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,   211,  -184,  -184,  -184,  -184,  -184,  -184,
      -4,  -184,    56,    92,  -184,   211,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,    66,  -184,
     -28,   348,  -184,  -184,  -184,  -100,  -184,  -184,   -57,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   244,  -184,
      69,   -57,  -184,  -184,   -26,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,   120,  -184,  -184,   105,   108,  -184,  -184,
      51,  -184,  -184,  -184,  -184,   -34,  -184,    83,   -47,  -184,
     210,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,   117,  -184,    -2,  -184,  -184,   -35,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,   514,  -184,    88,
      -2,  -184,  -184,    89,   -58,  -184,  -184,  -184,    99,  -184,
     -21,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,    14,  -151,  -184,  -184,  -184,  -184,  -184,
     102,  -184,     8,  -184,  -184,  -184,  -184,   171,    10,  -184,
    -184,  -184,  -184,    17,   107,  -184,  -184,    66,  -184,    -2,
     -35,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   477,
    -184,  -184,   477,   477,   -74,  -184,  -184,    18,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   -49,   134,
    -184,  -184,  -184,   404,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -113,   -10,    -8,  -184,  -184,  -184,  -184,    19,
    -184,  -184,    11,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   477,   477,
    -184,   162,   -74,   129,  -184,   133,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,   -51,  -184,    44,     9,    21,
    -127,  -184,    29,  -184,    -2,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,   477,  -184,  -184,  -184,  -184,    12,
    -184,  -184,  -184,   -57,  -184,  -184,  -184,    23,  -184,  -184,
    -184,    24,    48,    -2,    38,  -148,  -184,    54,    -2,  -184,
    -184,  -184,    42,   -87,  -184,  -184,  -184,  -184,  -184,   202,
      57,    47,  -184,    60,  -184,    -2,  -184,  -184
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,  -184,   -41,  -184,  -184,   -15,   -38,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,    49,  -184,  -184,  -184,
    -184,   -23,  -184,  -184,  -184,  -184,  -184,  -184,  -153,  -184,
    -184,   144,  -184,  -184,   109,  -184,  -184,  -184,     1,  -184,
    -184,  -184,  -184,    85,  -184,  -184,   239,   -53,  -184,  -184,
    -184,  -184,    70,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,   127,  -184,  -184,  -184,  -184,
    -184,  -184,   103,  -184,  -184,    53,  -184,  -184,   231,    31,
    -183,  -184,  -184,  -184,   -31,  -184,  -184,   -98,  -184,  -184,
    -184,  -130,  -184,  -143,  -184
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
     118,   160,   270,   202,   271,   262,   263,    97,   162,   115,
     380,   116,   201,   332,     1,   366,   210,   277,   358,   284,
     220,   155,   171,     2,   159,    82,   272,     3,     4,     5,
     214,    83,   358,   290,   291,     6,     7,   367,   103,   394,
     233,   221,     8,     9,    84,   212,    10,   213,    11,   399,
      12,    13,   233,   121,    14,   122,   123,   124,   129,   215,
     156,   163,   157,    15,   142,   222,   310,    16,   143,   238,
     385,   290,   291,    17,   168,    18,   145,   161,   172,   285,
     252,   286,   333,   117,    19,    20,   207,   209,    21,    22,
     211,   217,   218,    23,    24,    98,   219,    25,    26,    99,
     117,   404,   405,   406,   407,   408,    27,   328,   329,   239,
     240,   241,   242,   254,   164,   368,   224,   235,    28,    29,
      30,   381,   369,   173,   236,    31,   254,   146,   147,   251,
     256,   257,   260,   273,    32,   261,   203,   264,    33,   370,
      34,   158,    35,    36,   266,   148,   267,   268,   174,   276,
     279,   117,    37,    38,    39,    40,    41,    42,    43,    44,
     281,   282,    45,   295,    46,   296,   175,   306,   308,   176,
     335,   287,   363,    47,   307,   331,   365,   374,    48,    49,
      50,   388,    51,    52,   149,   364,    53,    54,   371,   375,
     378,   372,   288,     2,   379,    -6,    55,     3,     4,     5,
     297,   382,   383,   384,   243,     6,     7,   389,   298,   391,
     397,   299,     8,     9,   150,   402,    10,   393,    11,    86,
      12,    13,   244,    87,    14,   387,   330,   245,   246,    88,
     106,   398,   417,    15,   107,   394,   401,    16,   403,   414,
     415,   177,   416,    17,   234,    18,   275,   255,   309,   300,
     265,   105,   253,   269,    19,    20,   258,   280,    21,    22,
     141,   359,   386,    23,    24,   400,   413,    25,    26,   178,
     179,   180,   181,     0,     0,     0,    27,   182,   151,   301,
      89,   311,     0,   152,     0,     0,     0,     0,    28,    29,
      30,     0,   108,   225,   377,    31,     0,     0,     0,     0,
     130,   131,   132,   133,    32,     0,     0,     0,    33,     0,
      34,     0,    35,    36,    90,     0,   226,     0,     0,   227,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      91,   134,    45,   135,    46,   136,   109,     0,     0,     0,
       0,   137,   302,    47,   110,     0,     0,   111,    48,    49,
      50,     0,    51,    52,     0,     0,    53,    54,     2,     0,
       0,    92,     3,     4,     5,    -6,    55,     0,   390,   112,
       6,     7,     0,     0,   113,     0,     0,     8,     9,     0,
       0,    10,     0,    11,     0,    12,    13,     0,     0,    14,
     404,   405,   406,   407,   408,     0,     0,     0,    15,   412,
     228,   229,    16,     0,     0,     0,     0,   230,    17,     0,
      18,     0,     0,   336,     0,     0,     0,     0,     0,    19,
      20,   337,     0,    21,    22,     0,     0,     0,    23,    24,
       0,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,   338,   339,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    33,   340,    34,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    44,     0,   341,    45,     0,    46,
       0,     0,     0,     0,   342,     0,   343,     0,    47,     0,
       0,     0,     0,    48,    49,    50,     0,    51,    52,   344,
       0,    53,    54,     0,   312,     0,     0,   186,     0,     0,
       0,    55,   313,   187,     0,   188,   345,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     314,   315,     0,     0,   316,     0,     0,     0,     0,     0,
     317,     0,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,     0,   348,     0,     0,     0,     0,   349,
       0,     0,     0,   350,     0,     0,   318,   319,     0,     0,
     320,   321,     0,   322,   323,   324,     0,   325,     0,     0,
       0,     0,   190,     0,   191,     0,     0,     0,     0,     0,
     192,     0,   193,     0,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-184)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    39,   185,    61,    39,   158,   159,    11,    42,    66,
      61,    68,    50,    62,     1,     4,    57,   200,   145,     5,
      34,    27,    45,    10,    39,   182,    61,    14,    15,    16,
      32,    61,   145,   184,   185,    22,    23,    26,   157,   187,
      93,    55,    29,    30,    61,    60,    33,    62,    35,   197,
      37,    38,   105,   157,    41,   157,   157,   157,    61,    61,
      66,    95,    68,    50,   157,    79,   249,    54,   157,     3,
     197,   184,   185,    60,   157,    62,    61,    61,   157,    65,
     121,    67,   131,   157,    71,    72,    61,     0,    75,    76,
     182,    61,   157,    80,    81,    99,   157,    84,    85,   103,
     157,   188,   189,   190,   191,   192,    93,   260,   261,    43,
      44,    45,    46,   128,   148,   104,   196,    61,   105,   106,
     107,   172,   111,     6,    32,   112,   141,     7,     8,   157,
      61,   157,    27,   168,   121,    27,   194,    86,   125,   128,
     127,   147,   129,   130,    61,    25,   193,   170,    31,    61,
      61,   157,   139,   140,   141,   142,   143,   144,   145,   146,
      61,   182,   149,    61,   151,   157,    49,   157,    61,    52,
      36,   157,   182,   160,   157,   157,   157,   330,   165,   166,
     167,   364,   169,   170,    64,   193,   173,   174,   177,    27,
      61,   180,   178,    10,    61,   182,   183,    14,    15,    16,
      29,   157,   193,   182,   138,    22,    23,   195,    37,   186,
     393,    40,    29,    30,    94,   398,    33,   193,    35,     8,
      37,    38,   156,    12,    41,   196,   264,   161,   162,    18,
      20,   193,   415,    50,    24,   187,   182,    54,   196,   182,
     193,   124,   182,    60,   100,    62,   197,   138,   247,    78,
     165,    12,   125,   183,    71,    72,   153,   204,    75,    76,
      29,   292,   360,    80,    81,   395,   409,    84,    85,   152,
     153,   154,   155,    -1,    -1,    -1,    93,   160,   158,   108,
      69,   250,    -1,   163,    -1,    -1,    -1,    -1,   105,   106,
     107,    -1,    82,    28,   332,   112,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,   121,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,   130,   103,    -1,    51,    -1,    -1,    54,
      -1,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     119,    87,   149,    89,   151,    91,   126,    -1,    -1,    -1,
      -1,    97,   171,   160,   134,    -1,    -1,   137,   165,   166,
     167,    -1,   169,   170,    -1,    -1,   173,   174,    10,    -1,
      -1,   150,    14,    15,    16,   182,   183,    -1,   383,   159,
      22,    23,    -1,    -1,   164,    -1,    -1,    29,    30,    -1,
      -1,    33,    -1,    35,    -1,    37,    38,    -1,    -1,    41,
     188,   189,   190,   191,   192,    -1,    -1,    -1,    50,   197,
     135,   136,    54,    -1,    -1,    -1,    -1,   142,    60,    -1,
      62,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    71,
      72,    17,    -1,    75,    76,    -1,    -1,    -1,    80,    81,
      -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,    -1,    53,    54,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    -1,   125,    70,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    92,   149,    -1,   151,
      -1,    -1,    -1,    -1,   100,    -1,   102,    -1,   160,    -1,
      -1,    -1,    -1,   165,   166,   167,    -1,   169,   170,   115,
      -1,   173,   174,    -1,    47,    -1,    -1,    13,    -1,    -1,
      -1,   183,    55,    19,    -1,    21,   132,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,   170,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,   179,    -1,    -1,   109,   110,    -1,    -1,
     113,   114,    -1,   116,   117,   118,    -1,   120,    -1,    -1,
      -1,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    10,    14,    15,    16,    22,    23,    29,    30,
      33,    35,    37,    38,    41,    50,    54,    60,    62,    71,
      72,    75,    76,    80,    81,    84,    85,    93,   105,   106,
     107,   112,   121,   125,   127,   129,   130,   139,   140,   141,
     142,   143,   144,   145,   146,   149,   151,   160,   165,   166,
     167,   169,   170,   173,   174,   183,   199,   200,   201,   202,
     203,   215,   216,   217,   218,   222,   227,   235,   244,   249,
     253,   258,   262,   263,   264,   265,   266,   274,   275,   278,
     289,   290,   182,    61,    61,   219,     8,    12,    18,    69,
     103,   119,   150,   254,   255,   256,   257,    11,    99,   103,
     238,   239,   240,   157,   267,   254,    20,    24,    82,   126,
     134,   137,   159,   164,   229,    66,    68,   157,   204,   205,
     206,   157,   157,   157,   157,   272,   273,   204,   286,    61,
      56,    57,    58,    59,    87,    89,    91,    97,   241,   242,
     243,   286,   157,   157,   285,    61,     7,     8,    25,    64,
      94,   158,   163,   279,   280,    27,    66,    68,   147,   204,
     205,    61,    42,    95,   148,   250,   251,   252,   157,   268,
     228,   229,   157,     6,    31,    49,    52,   124,   152,   153,
     154,   155,   160,   259,   260,   261,    13,    19,    21,    48,
      88,    90,    96,    98,   101,   122,   123,   223,   224,   225,
     226,   205,    61,   194,   282,   283,   284,    61,   281,     0,
     201,   182,   204,   204,    32,    61,   288,    61,   157,   157,
      34,    55,    79,   277,   196,    28,    51,    54,   135,   136,
     142,   220,   221,   255,   239,    61,    32,   230,     3,    43,
      44,    45,    46,   138,   156,   161,   162,   245,   246,   247,
     248,   157,   201,   273,   204,   242,    61,   157,   280,   236,
      27,    27,   236,   236,    86,   251,    61,   193,   229,   260,
     288,    39,    61,   168,   287,   224,    61,   288,   270,    61,
     283,    61,   182,   207,     5,    65,    67,   157,   178,   276,
     184,   185,   291,   292,   293,    61,   157,    29,    37,    40,
      78,   108,   171,   231,   232,   233,   157,   157,    61,   246,
     288,   287,    47,    55,    73,    74,    77,    83,   109,   110,
     113,   114,   116,   117,   118,   120,   175,   237,   236,   236,
     205,   157,    62,   131,   271,    36,     9,    17,    53,    54,
      70,    92,   100,   102,   115,   132,   133,   168,   170,   175,
     179,   208,   209,   210,   211,   212,   213,   214,   145,   292,
     294,   295,   297,   182,   193,   157,     4,    26,   104,   111,
     128,   177,   180,   234,   236,    27,   269,   205,    61,    61,
      61,   172,   157,   193,   182,   197,   295,   196,   288,   195,
     204,   186,   296,   193,   187,   298,   299,   288,   193,   197,
     299,   182,   288,   196,   188,   189,   190,   191,   192,   300,
     301,   302,   197,   301,   182,   193,   182,   288
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
/* Line 1787 of yacc.c  */
#line 372 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			/* I will need to incorporate much more fine grained
			 * error messages. The following should suffice for
			 * the time being.
			 */
			struct FILE_INFO * ip_ctx = lex_current();
			msyslog(LOG_ERR, 
				"syntax error in %s line %d, column %d",
				ip_ctx->fname,
				ip_ctx->errpos.nline,
				ip_ctx->errpos.ncol);
		}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 408 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			peer_node *my_node;

			my_node = create_peer_node((yyvsp[(1) - (3)].Integer), (yyvsp[(2) - (3)].Address_node), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.peers, my_node);
		}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 427 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Address_node) = create_address_node((yyvsp[(2) - (2)].String), (yyvsp[(1) - (2)].Integer)); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 432 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Address_node) = create_address_node((yyvsp[(1) - (1)].String), AF_UNSPEC); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 437 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = AF_INET; }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 439 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = AF_INET6; }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 444 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 446 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 460 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer)); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 476 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 478 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_uval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 492 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 506 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			unpeer_node *my_node;
			
			my_node = create_unpeer_node((yyvsp[(2) - (2)].Address_node));
			if (my_node)
				APPEND_G_FIFO(cfgt.unpeers, my_node);
		}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 527 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.broadcastclient = 1; }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 529 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.manycastserver, (yyvsp[(2) - (2)].Address_fifo)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 531 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.multicastclient, (yyvsp[(2) - (2)].Address_fifo)); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 533 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.mdnstries = (yyvsp[(2) - (2)].Integer); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 544 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *atrv;
			
			atrv = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer));
			APPEND_G_FIFO(cfgt.vars, atrv);
		}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 551 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.control_key = (yyvsp[(2) - (2)].Integer); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 553 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { 
			cfgt.auth.cryptosw++;
			CONCAT_G_FIFOS(cfgt.auth.crypto_cmd_list, (yyvsp[(2) - (2)].Attr_val_fifo));
		}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 558 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.keys = (yyvsp[(2) - (2)].String); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 560 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.keysdir = (yyvsp[(2) - (2)].String); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 562 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			    msyslog(LOG_WARNING,
				    "requestkey is a no-op because "
				    "ntpdc has been removed.");
			}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 568 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.revoke = (yyvsp[(2) - (2)].Integer); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 570 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			cfgt.auth.trusted_key_list = (yyvsp[(2) - (2)].Attr_val_fifo);

			// if (!cfgt.auth.trusted_key_list)
			// 	cfgt.auth.trusted_key_list = $2;
			// else
			// 	LINK_SLIST(cfgt.auth.trusted_key_list, $2, link);
		}
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 579 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.ntp_signd_socket = (yyvsp[(2) - (2)].String); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 584 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 586 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 594 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 596 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val) = NULL;
			cfgt.auth.revoke = (yyvsp[(2) - (2)].Integer);
			msyslog(LOG_WARNING,
				"'crypto revoke %d' is deprecated, "
				"please use 'revoke %d' instead.",
				cfgt.auth.revoke, cfgt.auth.revoke);
		}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 621 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.orphan_cmds, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 626 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 631 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {	
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 639 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (double)(yyvsp[(2) - (2)].Integer)); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 641 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double)); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 643 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (double)(yyvsp[(2) - (2)].Integer)); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 669 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.stats_list, (yyvsp[(2) - (2)].Int_fifo)); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 671 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (lex_from_file()) {
				cfgt.stats_dir = (yyvsp[(2) - (2)].String);
			} else {
				YYFREE((yyvsp[(2) - (2)].String));
				yyerror("statsdir remote configuration ignored");
			}
		}
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 680 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			filegen_node *fgn;
			
			fgn = create_filegen_node((yyvsp[(2) - (3)].Integer), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.filegen_opts, fgn);
		}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 690 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = (yyvsp[(1) - (2)].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 695 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = NULL;
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(1) - (1)].Integer)));
		}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 714 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 716 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 724 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String));
			} else {
				(yyval.Attr_val) = NULL;
				YYFREE((yyvsp[(2) - (2)].String));
				yyerror("filegen file remote config ignored");
			}
		}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 734 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				yyerror("filegen type remote config ignored");
			}
		}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 743 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			const char *err;
			
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				if (T_Link == (yyvsp[(1) - (1)].Integer))
					err = "filegen link remote config ignored";
				else
					err = "filegen nolink remote config ignored";
				yyerror(err);
			}
		}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 758 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer)); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 788 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			CONCAT_G_FIFOS(cfgt.discard_opts, (yyvsp[(2) - (2)].Attr_val_fifo));
		}
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 792 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			CONCAT_G_FIFOS(cfgt.mru_opts, (yyvsp[(2) - (2)].Attr_val_fifo));
		}
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 796 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node((yyvsp[(2) - (3)].Address_node), NULL, (yyvsp[(3) - (3)].Int_fifo),
						  lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 804 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node((yyvsp[(2) - (5)].Address_node), (yyvsp[(4) - (5)].Address_node), (yyvsp[(5) - (5)].Int_fifo),
						  lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 812 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node(NULL, NULL, (yyvsp[(3) - (3)].Int_fifo),
						  lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 820 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node(
				create_address_node(
					estrdup("0.0.0.0"), 
					AF_INET),
				create_address_node(
					estrdup("0.0.0.0"), 
					AF_INET),
				(yyvsp[(4) - (4)].Int_fifo), 
				lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 835 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;
			
			rn = create_restrict_node(
				create_address_node(
					estrdup("::"), 
					AF_INET6),
				create_address_node(
					estrdup("::"), 
					AF_INET6),
				(yyvsp[(4) - (4)].Int_fifo), 
				lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 850 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *	rn;

			APPEND_G_FIFO((yyvsp[(3) - (3)].Int_fifo), create_int_node((yyvsp[(2) - (3)].Integer)));
			rn = create_restrict_node(
				NULL, NULL, (yyvsp[(3) - (3)].Int_fifo), lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 862 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Int_fifo) = NULL; }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 864 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = (yyvsp[(1) - (2)].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 890 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 895 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 903 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 914 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 919 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 927 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 947 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			addr_opts_node *aon;
			
			aon = create_addr_opts_node((yyvsp[(2) - (3)].Address_node), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.fudge, aon);
		}
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 957 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 962 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 970 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double)); }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 972 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 974 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 976 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 978 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 999 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.rlimit, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 1004 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 1009 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 1017 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 1033 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.enable_opts, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 1035 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.disable_opts, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 1040 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 1045 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 1053 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer)); }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 1055 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { 
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer));
			} else {
				char err_str[128];
				
				(yyval.Attr_val) = NULL;
				snprintf(err_str, sizeof(err_str),
					 "enable/disable %s remote configuration ignored",
					 keyword((yyvsp[(1) - (1)].Integer)));
				yyerror(err_str);
			}
		}
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 1089 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.tinker, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 1094 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 1099 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 1107 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double)); }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 1132 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 219:
/* Line 1787 of yacc.c  */
#line 1139 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 1146 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 1153 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			char error_text[64];
			attr_val *av;

			if (lex_from_file()) {
				av = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String));
				APPEND_G_FIFO(cfgt.vars, av);
			} else {
				YYFREE((yyvsp[(2) - (2)].String));
				snprintf(error_text, sizeof(error_text),
					 "%s remote config ignored",
					 keyword((yyvsp[(1) - (2)].Integer)));
				yyerror(error_text);
			}
		}
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 1169 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (!lex_from_file()) {
				YYFREE((yyvsp[(2) - (3)].String)); /* avoid leak */
				yyerror("remote includefile ignored");
				break;
			}
			if (lex_level() > MAXINCLUDELEVEL) {
				fprintf(stderr, "getconfig: Maximum include file level exceeded.\n");
				msyslog(LOG_ERR, "getconfig: Maximum include file level exceeded.");
			} else {
				const char * path = (yyvsp[(2) - (3)].String);
				if (!lex_push_file(path, "r")) {
					fprintf(stderr, "getconfig: Couldn't open <%s>\n", path);
					msyslog(LOG_ERR, "getconfig: Couldn't open <%s>", path);
				}
			}
			YYFREE((yyvsp[(2) - (3)].String)); /* avoid leak */
		}
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 1188 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { lex_flush_stack(); }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 1190 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { /* see drift_parm below for actions */ }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 1192 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.logconfig, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 1194 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.phone, (yyvsp[(2) - (2)].String_fifo)); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 1196 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { APPEND_G_FIFO(cfgt.setvar, (yyvsp[(2) - (2)].Set_var)); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 1198 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			addr_opts_node *aon;
			
			aon = create_addr_opts_node((yyvsp[(2) - (3)].Address_node), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.trap, aon);
		}
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 1205 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.ttl, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 1220 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
#ifndef LEAP_SMEAR
			yyerror("Built without LEAP_SMEAR support.");
#endif
		}
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 1240 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (lex_from_file()) {
				attr_val *av;
				av = create_attr_sval(T_Driftfile, (yyvsp[(1) - (1)].String));
				APPEND_G_FIFO(cfgt.vars, av);
			} else {
				YYFREE((yyvsp[(1) - (1)].String));
				yyerror("driftfile remote configuration ignored");
			}
		}
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 1251 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_sval(T_Driftfile, (yyvsp[(1) - (2)].String));
			APPEND_G_FIFO(cfgt.vars, av);
			av = create_attr_dval(T_WanderThreshold, (yyvsp[(2) - (2)].Double));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 1260 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_sval(T_Driftfile, estrdup(""));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 1270 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Set_var) = create_setvar_node((yyvsp[(1) - (4)].String), (yyvsp[(3) - (4)].String), (yyvsp[(4) - (4)].Integer)); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 1276 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = 0; }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 1281 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 1283 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 1291 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 1293 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), estrdup((yyvsp[(2) - (2)].Address_node)->address));
			destroy_address_node((yyvsp[(2) - (2)].Address_node));
		}
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 1301 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 1306 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 1314 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			char	prefix;
			char *	type;
			
			switch ((yyvsp[(1) - (1)].String)[0]) {
			
			case '+':
			case '-':
			case '=':
				prefix = (yyvsp[(1) - (1)].String)[0];
				type = (yyvsp[(1) - (1)].String) + 1;
				break;
				
			default:
				prefix = '=';
				type = (yyvsp[(1) - (1)].String);
			}	
			
			(yyval.Attr_val) = create_attr_sval(prefix, estrdup(type));
			YYFREE((yyvsp[(1) - (1)].String));
		}
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 1339 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			nic_rule_node *nrn;
			
			nrn = create_nic_rule_node((yyvsp[(3) - (3)].Integer), NULL, (yyvsp[(2) - (3)].Integer));
			APPEND_G_FIFO(cfgt.nic_rules, nrn);
		}
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 1346 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			nic_rule_node *nrn;
			
			nrn = create_nic_rule_node(0, (yyvsp[(3) - (3)].String), (yyvsp[(2) - (3)].Integer));
			APPEND_G_FIFO(cfgt.nic_rules, nrn);
		}
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 1374 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.reset_counters, (yyvsp[(2) - (2)].Int_fifo)); }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 1379 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = (yyvsp[(1) - (2)].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 1384 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = NULL;
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(1) - (1)].Integer)));
		}
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 1408 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 1413 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), create_int_node((yyvsp[(1) - (1)].Integer)));
		}
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 1421 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 1426 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 1434 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival('i', (yyvsp[(1) - (1)].Integer)); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 1440 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_rangeval('-', (yyvsp[(2) - (5)].Integer), (yyvsp[(4) - (5)].Integer)); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 1445 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.String_fifo) = (yyvsp[(1) - (2)].String_fifo);
			APPEND_G_FIFO((yyval.String_fifo), create_string_node((yyvsp[(2) - (2)].String)));
		}
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 1450 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.String_fifo) = NULL;
			APPEND_G_FIFO((yyval.String_fifo), create_string_node((yyvsp[(1) - (1)].String)));
		}
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1458 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Address_fifo) = (yyvsp[(1) - (2)].Address_fifo);
			APPEND_G_FIFO((yyval.Address_fifo), (yyvsp[(2) - (2)].Address_node));
		}
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 1463 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Address_fifo) = NULL;
			APPEND_G_FIFO((yyval.Address_fifo), (yyvsp[(1) - (1)].Address_node));
		}
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 1471 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if ((yyvsp[(1) - (1)].Integer) != 0 && (yyvsp[(1) - (1)].Integer) != 1) {
				yyerror("Integer value is not boolean (0 or 1). Assuming 1");
				(yyval.Integer) = 1;
			} else {
				(yyval.Integer) = (yyvsp[(1) - (1)].Integer);
			}
		}
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 1479 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = 1; }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 1480 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = 0; }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 1484 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Double) = (double)(yyvsp[(1) - (1)].Integer); }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 1495 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			sim_node *sn;
			
			sn =  create_sim_node((yyvsp[(3) - (5)].Attr_val_fifo), (yyvsp[(4) - (5)].Sim_server_fifo));
			APPEND_G_FIFO(cfgt.sim_details, sn);

			/* Revert from ; to \n for end-of-command */
			old_config_style = true;
		}
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 1512 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { old_config_style = false; }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 1517 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (3)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (3)].Attr_val));
		}
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 1522 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (2)].Attr_val));
		}
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 1530 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (3)].Integer), (yyvsp[(3) - (3)].Double)); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1540 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_server_fifo) = (yyvsp[(1) - (2)].Sim_server_fifo);
			APPEND_G_FIFO((yyval.Sim_server_fifo), (yyvsp[(2) - (2)].Sim_server));
		}
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1545 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_server_fifo) = NULL;
			APPEND_G_FIFO((yyval.Sim_server_fifo), (yyvsp[(1) - (1)].Sim_server));
		}
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1553 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Sim_server) = ONLY_SIM(create_sim_server((yyvsp[(1) - (5)].Address_node), (yyvsp[(3) - (5)].Double), (yyvsp[(4) - (5)].Sim_script_fifo))); }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 1558 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Double) = (yyvsp[(3) - (4)].Double); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 1563 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Address_node) = (yyvsp[(3) - (3)].Address_node); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 1568 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_script_fifo) = (yyvsp[(1) - (2)].Sim_script_fifo);
			APPEND_G_FIFO((yyval.Sim_script_fifo), (yyvsp[(2) - (2)].Sim_script));
		}
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 1573 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_script_fifo) = NULL;
			APPEND_G_FIFO((yyval.Sim_script_fifo), (yyvsp[(1) - (1)].Sim_script));
		}
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 1581 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Sim_script) = ONLY_SIM(create_sim_script_info((yyvsp[(3) - (6)].Double), (yyvsp[(5) - (6)].Attr_val_fifo))); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 1586 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (3)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (3)].Attr_val));
		}
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 1591 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (2)].Attr_val));
		}
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 1599 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (3)].Integer), (yyvsp[(3) - (3)].Double)); }
    break;


/* Line 1787 of yacc.c  */
#line 3414 "ntp_parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 1610 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"


void 
yyerror(
	const char *msg
	)
{
	int retval;
	struct FILE_INFO * ip_ctx;

	ip_ctx = lex_current();
	ip_ctx->errpos = ip_ctx->tokpos;
	
	msyslog(LOG_ERR, "line %d column %d %s", 
		ip_ctx->errpos.nline, ip_ctx->errpos.ncol, msg);
	if (!lex_from_file()) {
		/* Save the error message in the correct buffer */
		retval = snprintf(remote_config.err_msg + remote_config.err_pos,
				  MAXLINE - remote_config.err_pos,
				  "column %d %s",
				  ip_ctx->errpos.ncol, msg);

		/* Increment the value of err_pos */
		if (retval > 0)
			remote_config.err_pos += retval;

		/* Increment the number of errors */
		++remote_config.no_errors;
	}
}


/*
 * token_name - convert T_ token integers to text
 *		example: token_name(T_Server) returns "T_Server"
 */
const char *
token_name(
	int token
	)
{
	return yytname[YYTRANSLATE(token)];
}


/* Initial Testing function -- ignore */
#if 0
int main(int argc, char *argv[])
{
	ip_file = FOPEN(argv[1], "r");
	if (!ip_file)
		fprintf(stderr, "ERROR!! Could not open file: %s\n", argv[1]);
	yyparse();
	return 0;
}
#endif

