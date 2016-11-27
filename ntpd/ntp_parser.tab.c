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
#line 352 "ntp_parser.tab.c"
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
#line 380 "ntp_parser.tab.c"

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
#define YYFINAL  206
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   617

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  195
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  305
/* YYNRULES -- Number of states.  */
#define YYNSTATES  409

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   444

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     191,   192,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   190,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   193,     2,   194,     2,     2,     2,     2,
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
     185,   186,   187,   188,   189
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
      85,    87,    89,    91,    94,    97,    99,   101,   103,   105,
     107,   109,   112,   114,   116,   118,   121,   124,   127,   130,
     133,   136,   139,   142,   145,   148,   151,   152,   155,   158,
     161,   163,   165,   167,   169,   172,   175,   177,   180,   183,
     186,   188,   190,   192,   194,   196,   198,   200,   202,   204,
     206,   209,   212,   216,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   238,   241,   244,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   276,   279,   283,   289,   293,   298,   303,   307,   308,
     311,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   335,   337,   339,   341,   344,   346,   349,   351,
     353,   355,   358,   360,   363,   365,   367,   369,   371,   373,
     375,   377,   379,   383,   386,   388,   391,   394,   397,   400,
     403,   405,   407,   409,   411,   413,   415,   418,   421,   423,
     426,   428,   430,   432,   435,   438,   441,   443,   445,   447,
     449,   451,   453,   455,   457,   459,   461,   464,   467,   469,
     472,   474,   476,   478,   480,   482,   484,   486,   488,   490,
     492,   494,   496,   499,   502,   505,   508,   512,   514,   517,
     520,   523,   526,   530,   533,   535,   537,   539,   541,   543,
     545,   547,   549,   551,   553,   556,   557,   562,   564,   565,
     566,   569,   572,   575,   578,   580,   582,   586,   590,   592,
     594,   596,   598,   600,   602,   604,   606,   608,   611,   614,
     616,   618,   620,   622,   624,   626,   628,   630,   633,   635,
     638,   640,   642,   644,   650,   653,   655,   658,   660,   662,
     664,   666,   668,   670,   676,   678,   682,   685,   689,   691,
     693,   696,   698,   704,   709,   713,   716,   718,   725,   729,
     732,   736,   738,   740,   742,   744
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     196,     0,    -1,   197,    -1,   197,   198,   179,    -1,   198,
     179,    -1,     1,   179,    -1,    -1,   199,    -1,   210,    -1,
     212,    -1,   213,    -1,   222,    -1,   230,    -1,   217,    -1,
     239,    -1,   244,    -1,   248,    -1,   253,    -1,   257,    -1,
     284,    -1,   200,   201,   204,    -1,   142,    -1,   127,    -1,
     122,    -1,    12,    -1,    81,    -1,   202,    -1,   203,   154,
      -1,   154,    -1,    63,    -1,    65,    -1,    -1,   204,   205,
      -1,   206,    -1,   208,    -1,   207,    -1,    15,    -1,    51,
      -1,   112,    -1,   129,    -1,   130,    -1,   165,    -1,   176,
      -1,   209,    58,    -1,   209,   169,    -1,    67,    -1,    97,
      -1,    89,    -1,   167,    -1,    99,    -1,   172,    -1,   211,
     201,    -1,   170,    -1,   171,    -1,    13,    -1,    82,   281,
      -1,   103,   281,    -1,    90,    58,    -1,    20,    58,    -1,
      21,   214,    -1,    68,   154,    -1,    69,   154,    -1,   136,
      58,    -1,   139,    58,    -1,   166,   277,    -1,   118,   154,
      -1,    -1,   214,   215,    -1,   216,   154,    -1,   139,    58,
      -1,    49,    -1,   132,    -1,   133,    -1,    26,    -1,   163,
     218,    -1,   218,   219,    -1,   219,    -1,   220,    58,    -1,
     221,   283,    -1,    19,   282,    -1,    17,    -1,    46,    -1,
     119,    -1,   120,    -1,    98,    -1,    11,    -1,    95,    -1,
      87,    -1,    93,    -1,    85,    -1,   146,   223,    -1,   148,
     154,    -1,    39,   224,   225,    -1,   223,   224,    -1,   224,
      -1,    18,    -1,    22,    -1,    79,    -1,   123,    -1,   134,
      -1,   156,    -1,   161,    -1,   131,    -1,    -1,   225,   226,
      -1,    38,   154,    -1,   168,   229,    -1,   227,    -1,   228,
      -1,    75,    -1,   105,    -1,    35,    -1,    27,    -1,   108,
      -1,   125,    -1,    24,    -1,   174,    -1,   101,    -1,   177,
      -1,     4,    -1,    28,   233,    -1,   102,   236,    -1,   138,
     201,   231,    -1,   138,   202,    83,   202,   231,    -1,   138,
      25,   231,    -1,   138,    63,    25,   231,    -1,   138,    65,
      25,   231,    -1,   138,   144,   231,    -1,    -1,   231,   232,
      -1,    45,    -1,    52,    -1,    70,    -1,    71,    -1,    74,
      -1,    80,    -1,   106,    -1,   107,    -1,   110,    -1,   111,
      -1,   113,    -1,   114,    -1,   115,    -1,   117,    -1,   172,
      -1,   233,   234,    -1,   234,    -1,   235,    58,    -1,     9,
      -1,    96,    -1,   100,    -1,   236,   237,    -1,   237,    -1,
     238,    58,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    84,    -1,    86,    -1,    88,    -1,    94,    -1,    48,
     201,   240,    -1,   240,   241,    -1,   241,    -1,   242,   283,
      -1,   243,   282,    -1,   153,    58,    -1,     3,   154,    -1,
     135,   154,    -1,   158,    -1,   159,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,   140,   245,    -1,   245,   246,
      -1,   246,    -1,   247,    58,    -1,    92,    -1,   145,    -1,
      40,    -1,    35,   249,    -1,    27,   249,    -1,   249,   250,
      -1,   250,    -1,   251,    -1,   252,    -1,     8,    -1,    10,
      -1,    16,    -1,    66,    -1,   100,    -1,   116,    -1,   147,
      -1,   162,   254,    -1,   254,   255,    -1,   255,    -1,   256,
     283,    -1,     6,    -1,    29,    -1,    47,    -1,    50,    -1,
     121,    -1,   149,    -1,   150,    -1,   151,    -1,   152,    -1,
     157,    -1,   269,    -1,   273,    -1,   258,   283,    -1,   259,
      58,    -1,   260,   154,    -1,   261,   154,    -1,    57,   154,
     198,    -1,    36,    -1,    31,   262,    -1,    77,   267,    -1,
     124,   280,    -1,   143,   263,    -1,   164,   202,   265,    -1,
     167,   276,    -1,    14,    -1,   109,    -1,   157,    -1,    33,
      -1,    73,    -1,    72,    -1,    78,    -1,   126,    -1,   141,
      -1,   154,    -1,   154,    30,    -1,    -1,   154,   190,   154,
     264,    -1,    25,    -1,    -1,    -1,   265,   266,    -1,   128,
      58,    -1,    59,   202,    -1,   267,   268,    -1,   268,    -1,
     154,    -1,   270,   272,   271,    -1,   270,   272,   154,    -1,
      59,    -1,   104,    -1,     5,    -1,    62,    -1,    64,    -1,
     175,    -1,    76,    -1,    52,    -1,    32,    -1,   137,   274,
      -1,   274,   275,    -1,   275,    -1,     7,    -1,     8,    -1,
      23,    -1,    61,    -1,    91,    -1,   155,    -1,   160,    -1,
     276,    58,    -1,    58,    -1,   277,   278,    -1,   278,    -1,
      58,    -1,   279,    -1,   191,    58,    34,    58,   192,    -1,
     280,   154,    -1,   154,    -1,   281,   201,    -1,   201,    -1,
      58,    -1,   165,    -1,    37,    -1,    58,    -1,    30,    -1,
     285,   193,   286,   289,   194,    -1,   180,    -1,   286,   287,
     179,    -1,   287,   179,    -1,   288,   190,   283,    -1,   181,
      -1,   182,    -1,   289,   290,    -1,   290,    -1,   292,   193,
     291,   293,   194,    -1,   183,   190,   283,   179,    -1,   142,
     190,   201,    -1,   293,   294,    -1,   294,    -1,   184,   190,
     283,   193,   295,   194,    -1,   295,   296,   179,    -1,   296,
     179,    -1,   297,   190,   283,    -1,   185,    -1,   186,    -1,
     187,    -1,   188,    -1,   189,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   360,   360,   364,   365,   366,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     402,   412,   413,   414,   415,   416,   420,   421,   426,   431,
     433,   439,   440,   448,   449,   453,   458,   459,   460,   461,
     462,   463,   464,   468,   470,   475,   476,   477,   478,   479,
     480,   488,   498,   499,   509,   511,   513,   515,   526,   528,
     533,   535,   537,   543,   545,   554,   560,   561,   569,   571,
     583,   584,   585,   586,   595,   600,   605,   613,   615,   617,
     622,   623,   624,   625,   626,   627,   631,   632,   633,   634,
     643,   645,   654,   664,   669,   677,   678,   679,   680,   681,
     682,   683,   684,   689,   690,   698,   708,   717,   732,   737,
     738,   742,   743,   747,   748,   749,   750,   751,   752,   753,
     762,   766,   770,   778,   786,   794,   809,   824,   837,   838,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   860,   864,   869,   877,   882,   883,
     884,   888,   893,   901,   906,   907,   908,   909,   910,   911,
     912,   913,   921,   931,   936,   944,   946,   948,   957,   959,
     964,   965,   969,   970,   971,   972,   980,   985,   990,   998,
    1003,  1004,  1005,  1014,  1016,  1021,  1026,  1034,  1036,  1053,
    1054,  1055,  1056,  1057,  1058,  1062,  1070,  1075,  1080,  1088,
    1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,
    1111,  1112,  1113,  1120,  1127,  1134,  1150,  1169,  1171,  1173,
    1175,  1177,  1179,  1186,  1191,  1192,  1193,  1197,  1201,  1210,
    1214,  1215,  1216,  1220,  1231,  1241,  1250,  1255,  1257,  1262,
    1263,  1271,  1273,  1281,  1286,  1294,  1319,  1326,  1336,  1337,
    1341,  1342,  1343,  1344,  1348,  1349,  1350,  1354,  1359,  1364,
    1372,  1373,  1374,  1375,  1376,  1377,  1378,  1388,  1393,  1401,
    1406,  1414,  1416,  1420,  1425,  1430,  1438,  1443,  1451,  1460,
    1461,  1465,  1466,  1475,  1493,  1497,  1502,  1510,  1515,  1516,
    1520,  1525,  1533,  1538,  1543,  1548,  1553,  1561,  1566,  1571,
    1579,  1584,  1585,  1586,  1587,  1588
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Abbrev", "T_Age", "T_All", "T_Allan",
  "T_Allpeers", "T_Auth", "T_Average", "T_Bclient", "T_Beacon",
  "T_Broadcast", "T_Broadcastclient", "T_Broadcastdelay", "T_Burst",
  "T_Calibrate", "T_Ceiling", "T_Clockstats", "T_Cohort", "T_ControlKey",
  "T_Crypto", "T_Cryptostats", "T_Ctl", "T_Day", "T_Default", "T_Digest",
  "T_Disable", "T_Discard", "T_Dispersion", "T_Double", "T_Driftfile",
  "T_Drop", "T_Dscp", "T_Ellipsis", "T_Enable", "T_End", "T_False",
  "T_File", "T_Filegen", "T_Filenum", "T_Flag1", "T_Flag2", "T_Flag3",
  "T_Flag4", "T_Flake", "T_Floor", "T_Freq", "T_Fudge", "T_Host",
  "T_Huffpuff", "T_Iburst", "T_Ignore", "T_Incalloc", "T_Incmem",
  "T_Initalloc", "T_Initmem", "T_Includefile", "T_Integer", "T_Interface",
  "T_Intrange", "T_Io", "T_Ipv4", "T_Ipv4_flag", "T_Ipv6", "T_Ipv6_flag",
  "T_Kernel", "T_Key", "T_Keys", "T_Keysdir", "T_Kod", "T_Mssntp",
  "T_Leapfile", "T_Leapsmearinterval", "T_Limited", "T_Link", "T_Listen",
  "T_Logconfig", "T_Logfile", "T_Loopstats", "T_Lowpriotrap",
  "T_Manycastclient", "T_Manycastserver", "T_Mask", "T_Maxage",
  "T_Maxclock", "T_Maxdepth", "T_Maxdist", "T_Maxmem", "T_Maxpoll",
  "T_Mdnstries", "T_Mem", "T_Memlock", "T_Minclock", "T_Mindepth",
  "T_Mindist", "T_Minimum", "T_Minpoll", "T_Minsane", "T_Mode",
  "T_Monitor", "T_Month", "T_Mru", "T_Multicastclient", "T_Nic",
  "T_Nolink", "T_Nomodify", "T_Nomrulist", "T_None", "T_Nonvolatile",
  "T_Nopeer", "T_Noquery", "T_Noselect", "T_Noserve", "T_Notrap",
  "T_Notrust", "T_Ntp", "T_Ntpport", "T_NtpSignDsocket", "T_Orphan",
  "T_Orphanwait", "T_Panic", "T_Peer", "T_Peerstats", "T_Phone", "T_Pid",
  "T_Pidfile", "T_Pool", "T_Port", "T_Preempt", "T_Prefer", "T_Protostats",
  "T_Pw", "T_Randfile", "T_Rawstats", "T_Refid", "T_Requestkey", "T_Reset",
  "T_Restrict", "T_Revoke", "T_Rlimit", "T_Saveconfigdir", "T_Server",
  "T_Setvar", "T_Source", "T_Stacksize", "T_Statistics", "T_Stats",
  "T_Statsdir", "T_Step", "T_Stepback", "T_Stepfwd", "T_Stepout",
  "T_Stratum", "T_String", "T_Sys", "T_Sysstats", "T_Tick", "T_Time1",
  "T_Time2", "T_Timer", "T_Timingstats", "T_Tinker", "T_Tos", "T_Trap",
  "T_True", "T_Trustedkey", "T_Ttl", "T_Type", "T_U_int", "T_Unconfig",
  "T_Unpeer", "T_Version", "T_WanderThreshold", "T_Week", "T_Wildcard",
  "T_Xleave", "T_Year", "T_Flag", "T_EOC", "T_Simulate", "T_Beep_Delay",
  "T_Sim_Duration", "T_Server_Offset", "T_Duration", "T_Freq_Offset",
  "T_Wander", "T_Jitter", "T_Prop_Delay", "T_Proc_Delay", "'='", "'('",
  "')'", "'{'", "'}'", "$accept", "configuration", "command_list",
  "command", "server_command", "client_type", "address", "ip_address",
  "address_fam", "option_list", "option", "option_flag",
  "option_flag_keyword", "option_int", "option_int_keyword",
  "unpeer_command", "unpeer_keyword", "other_mode_command",
  "authentication_command", "crypto_command_list", "crypto_command",
  "crypto_str_keyword", "orphan_mode_command", "tos_option_list",
  "tos_option", "tos_option_int_keyword", "tos_option_dbl_keyword",
  "monitoring_command", "stats_list", "stat", "filegen_option_list",
  "filegen_option", "link_nolink", "enable_disable", "filegen_type",
  "access_control_command", "ac_flag_list", "access_control_flag",
  "discard_option_list", "discard_option", "discard_option_keyword",
  "mru_option_list", "mru_option", "mru_option_keyword", "fudge_command",
  "fudge_factor_list", "fudge_factor", "fudge_factor_dbl_keyword",
  "fudge_factor_bool_keyword", "rlimit_command", "rlimit_option_list",
  "rlimit_option", "rlimit_option_keyword", "system_option_command",
  "system_option_list", "system_option", "system_option_flag_keyword",
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
      61,    40,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   195,   196,   197,   197,   197,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     199,   200,   200,   200,   200,   200,   201,   201,   202,   203,
     203,   204,   204,   205,   205,   206,   207,   207,   207,   207,
     207,   207,   207,   208,   208,   209,   209,   209,   209,   209,
     209,   210,   211,   211,   212,   212,   212,   212,   213,   213,
     213,   213,   213,   213,   213,   213,   214,   214,   215,   215,
     216,   216,   216,   216,   217,   218,   218,   219,   219,   219,
     220,   220,   220,   220,   220,   220,   221,   221,   221,   221,
     222,   222,   222,   223,   223,   224,   224,   224,   224,   224,
     224,   224,   224,   225,   225,   226,   226,   226,   226,   227,
     227,   228,   228,   229,   229,   229,   229,   229,   229,   229,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   233,   233,   234,   235,   235,
     235,   236,   236,   237,   238,   238,   238,   238,   238,   238,
     238,   238,   239,   240,   240,   241,   241,   241,   241,   241,
     242,   242,   243,   243,   243,   243,   244,   245,   245,   246,
     247,   247,   247,   248,   248,   249,   249,   250,   250,   251,
     251,   251,   251,   251,   251,   252,   253,   254,   254,   255,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   258,   258,   258,   259,   259,   260,
     261,   261,   261,   262,   262,   262,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   268,   269,   269,   270,   270,
     271,   271,   271,   271,   272,   272,   272,   273,   274,   274,
     275,   275,   275,   275,   275,   275,   275,   276,   276,   277,
     277,   278,   278,   279,   280,   280,   281,   281,   282,   282,
     282,   283,   283,   284,   285,   286,   286,   287,   288,   288,
     289,   289,   290,   291,   292,   293,   293,   294,   295,   295,
     296,   297,   297,   297,   297,   297
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     2,     2,     2,
       1,     1,     1,     1,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     5,     3,     4,     4,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     1,     2,     2,
       2,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     4,     1,     0,     0,
       2,     2,     2,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     5,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     5,     1,     3,     2,     3,     1,     1,
       2,     1,     5,     4,     3,     2,     1,     6,     3,     2,
       3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    24,    54,   224,     0,    66,     0,     0,   235,
     227,     0,   217,     0,     0,     0,   248,     0,     0,   229,
     228,     0,   230,    25,     0,     0,     0,     0,   249,   225,
       0,    23,     0,   231,    22,     0,     0,     0,     0,     0,
     232,    21,     0,     0,     0,   226,     0,     0,     0,     0,
       0,    52,    53,   284,     0,     2,     0,     7,     0,     8,
       0,     9,    10,    13,    11,    12,    14,    15,    16,    17,
      18,     0,     0,     0,     0,   210,     0,   211,    19,     0,
       5,    58,    59,   189,   190,   191,   192,   193,   194,   195,
     184,   186,   187,   188,   148,   149,   150,   120,   146,     0,
     233,   218,   183,    95,    96,    97,    98,   102,    99,   100,
     101,   103,    29,    30,    28,     0,    26,     0,     6,    60,
      61,   245,   219,   244,   277,    55,    57,   154,   155,   156,
     157,   158,   159,   160,   161,   121,   152,     0,    56,    65,
     275,   220,    62,   260,   261,   262,   263,   264,   265,   266,
     257,   259,   128,    29,    30,   128,   128,    26,    63,   182,
     180,   181,   176,   178,     0,     0,   221,    90,    94,    91,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     196,   198,     0,    85,    80,     0,    81,    89,    87,    88,
      86,    84,    82,    83,    74,    76,     0,     0,   239,   271,
       0,    64,   270,   272,   268,   223,     1,     0,     4,    31,
      51,   282,   281,   212,   213,   214,   215,   256,   255,   254,
       0,     0,    73,    70,    71,    72,     0,    67,     0,   185,
     145,   147,   234,    92,     0,   172,   173,   174,   175,     0,
       0,   170,   171,   162,   164,     0,     0,    27,   216,   243,
     276,   151,   153,   274,   258,   124,   128,   128,   127,   122,
       0,   177,   179,     0,    93,   197,   199,   280,   278,   279,
      79,    75,    77,    78,   222,     0,   269,   267,     3,    20,
     250,   251,   252,   247,   253,   246,   288,   289,     0,     0,
       0,    69,    68,   112,   111,     0,   109,   110,     0,   104,
     107,   108,   168,   169,   167,   163,   165,   166,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   129,   125,   126,   128,   238,     0,     0,
     240,     0,    36,    37,    45,    47,    46,    49,    38,    39,
      40,    41,    48,    50,    42,    32,    33,    35,    34,     0,
       0,     0,     0,   291,     0,   286,     0,   105,   119,   115,
     117,   113,   114,   116,   118,   106,   123,   237,   236,   242,
     241,     0,    43,    44,     0,   285,   283,   290,     0,   287,
     273,   294,     0,     0,     0,     0,     0,   296,     0,     0,
     292,   295,   293,     0,     0,   301,   302,   303,   304,   305,
       0,     0,     0,   297,     0,   299,     0,   298,   300
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,    55,    56,    57,    58,   124,   116,   117,   279,
     345,   346,   347,   348,   349,    59,    60,    61,    62,    82,
     227,   228,    63,   194,   195,   196,   197,    64,   167,   111,
     233,   299,   300,   301,   365,    65,   255,   323,    97,    98,
      99,   135,   136,   137,    66,   243,   244,   245,   246,    67,
     162,   163,   164,    68,    90,    91,    92,    93,    69,   180,
     181,   182,    70,    71,    72,    73,    74,   101,   166,   368,
     274,   330,   122,   123,    75,    76,   285,   220,    77,   150,
     151,   205,   201,   202,   203,   141,   125,   270,   213,    78,
      79,   288,   289,   290,   352,   353,   383,   354,   386,   387,
     400,   401,   402
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -181
static const yytype_int16 yypact[] =
{
      27,  -161,  -181,  -181,  -181,   -38,  -181,    71,     2,  -103,
    -181,    71,  -181,    -9,   -57,  -102,  -181,   -98,   -97,  -181,
    -181,   -86,  -181,  -181,   -57,    24,   211,   -57,  -181,  -181,
     -78,  -181,   -69,  -181,  -181,    30,    22,    -4,    33,    -3,
    -181,  -181,   -62,    -9,   -61,  -181,   304,   497,   -47,   -53,
      45,  -181,  -181,  -181,    31,   200,   -67,  -181,   -57,  -181,
     -57,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,    20,    52,   -34,   -31,  -181,     1,  -181,  -181,   -72,
    -181,  -181,    23,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
      71,  -181,  -181,  -181,  -181,  -181,  -181,     2,  -181,    70,
     103,  -181,    71,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,   158,  -181,   -20,   361,  -181,
    -181,  -181,   -86,  -181,  -181,   -57,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,   211,  -181,    77,   -57,  -181,
    -181,   -15,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
      22,  -181,  -181,   116,   119,  -181,  -181,    63,  -181,  -181,
    -181,  -181,    -3,  -181,    90,   -32,  -181,    -9,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
     304,  -181,    20,  -181,  -181,   -33,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,   497,  -181,   102,    20,  -181,  -181,
     114,   -53,  -181,  -181,  -181,   120,  -181,    -5,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
       5,  -146,  -181,  -181,  -181,  -181,   121,  -181,    29,  -181,
    -181,  -181,  -181,   -11,    32,  -181,  -181,  -181,  -181,    34,
     123,  -181,  -181,   158,  -181,    20,   -33,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,   441,  -181,  -181,   441,   441,
     -47,  -181,  -181,    42,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,   -27,   169,  -181,  -181,  -181,   256,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -108,    26,
      21,  -181,  -181,  -181,  -181,    54,  -181,  -181,    18,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,   441,   441,  -181,   185,   -47,   157,
    -181,   159,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,   -51,
      35,    37,  -123,  -181,    36,  -181,    20,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,   441,  -181,  -181,  -181,
    -181,    38,  -181,  -181,   -57,  -181,  -181,  -181,    39,  -181,
    -181,  -181,    44,    48,    20,    47,  -104,  -181,    40,    20,
    -181,  -181,  -181,    53,    65,  -181,  -181,  -181,  -181,  -181,
      55,    59,    57,  -181,    66,  -181,    20,  -181,  -181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,  -181,   -12,  -181,  -181,   -14,   -36,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,    61,  -181,  -181,  -181,  -181,   -40,
    -181,  -181,  -181,  -181,  -181,  -181,  -141,  -181,  -181,   126,
    -181,  -181,   125,  -181,  -181,  -181,    13,  -181,  -181,  -181,
    -181,    96,  -181,  -181,   250,   -64,  -181,  -181,  -181,  -181,
      82,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,   141,  -181,  -181,  -181,  -181,  -181,  -181,
     124,  -181,  -181,    69,  -181,  -181,   248,    41,  -180,  -181,
    -181,  -181,    -8,  -181,  -181,   -76,  -181,  -181,  -181,  -107,
    -181,  -117,  -181
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
     115,   157,   266,   168,   267,   199,   112,   372,   113,   103,
     280,    94,   198,   104,   258,   259,   293,   273,    80,   350,
      81,   152,   358,   156,   294,   268,   229,   295,     1,   143,
     144,   206,   328,   217,   350,   286,   287,   159,   229,     2,
       3,     4,   359,   207,   209,   145,   210,     5,     6,   222,
     211,   100,   118,   218,     7,     8,   119,   120,     9,   153,
      10,   154,    11,    12,   296,   306,    13,   281,   121,   282,
     105,   376,   223,   286,   287,    14,   139,   219,   212,    83,
     385,    84,   126,   146,    15,   140,    16,    85,   142,   160,
     390,   158,   165,   169,   297,    17,    18,   114,    95,    19,
      20,   329,    96,   204,    21,    22,   248,   114,    23,    24,
     214,   250,   208,   147,   106,   324,   325,    25,   373,   360,
     215,   221,   107,   216,   250,   108,   361,   264,   231,    26,
      27,    28,   269,   232,   247,   252,    29,    86,   200,   253,
     155,   256,   161,   362,   257,    30,   260,   109,   262,    31,
     114,    32,   110,    33,    34,   224,   225,   298,   263,   283,
     272,   234,   226,    35,    36,    37,    38,    39,    40,    41,
      42,    87,   275,    43,   278,    44,   379,   148,   277,   291,
     284,   304,   149,   292,    45,   366,   302,    88,   303,    46,
      47,    48,   363,    49,    50,   364,   327,    51,    52,   235,
     236,   237,   238,   331,   388,   355,    -6,    53,   357,   393,
     367,   356,     2,     3,     4,   370,   375,   371,    89,   392,
       5,     6,   382,   230,   326,   374,   408,     7,     8,   378,
     380,     9,   385,    10,   384,    11,    12,   389,   405,    13,
     395,   396,   397,   398,   399,   407,   394,   406,    14,   403,
     395,   396,   397,   398,   399,   271,   305,    15,   261,    16,
     251,   102,   265,   249,   127,   128,   129,   130,    17,    18,
     276,   332,    19,    20,   254,   138,   377,    21,    22,   391,
     351,    23,    24,   404,     0,     0,     0,   307,     0,     0,
      25,     0,   369,   239,     0,   131,     0,   132,     0,   133,
       0,     0,    26,    27,    28,   134,     0,   333,     0,    29,
     170,   240,     0,     0,     0,     0,   241,   242,    30,     0,
       0,     0,    31,   334,    32,     0,    33,    34,     0,     0,
       0,     0,     0,   171,     0,     0,    35,    36,    37,    38,
      39,    40,    41,    42,     0,   335,    43,     0,    44,     0,
       0,   172,     0,   336,   173,   337,     0,    45,     0,     0,
     381,     0,    46,    47,    48,     0,    49,    50,   338,     0,
      51,    52,     0,     2,     3,     4,     0,     0,     0,    -6,
      53,     5,     6,     0,     0,   339,   340,     0,     7,     8,
       0,     0,     9,     0,    10,     0,    11,    12,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
      16,   341,     0,   342,     0,   174,     0,     0,   343,    17,
      18,     0,   344,    19,    20,     0,     0,     0,    21,    22,
       0,     0,    23,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,   175,   176,   177,   178,     0,     0,     0,
       0,   179,     0,    26,    27,    28,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,    31,     0,    32,   308,    33,    34,     0,
       0,     0,     0,   309,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     0,    43,   183,    44,
       0,   310,   311,     0,   184,   312,   185,     0,    45,     0,
       0,   313,     0,    46,    47,    48,     0,    49,    50,     0,
       0,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,   186,     0,     0,     0,   314,   315,     0,
       0,   316,   317,     0,   318,   319,   320,     0,   321,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,   188,     0,     0,     0,     0,     0,
     189,     0,   190,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,     0,     0,   192,   193
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-181)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      14,    37,   182,    43,    37,    58,    63,    58,    65,    18,
       5,     9,    48,    22,   155,   156,    27,   197,   179,   142,
      58,    25,     4,    37,    35,    58,    90,    38,     1,     7,
       8,     0,    59,    32,   142,   181,   182,    40,   102,    12,
      13,    14,    24,    55,    58,    23,    60,    20,    21,    26,
      30,   154,   154,    52,    27,    28,   154,   154,    31,    63,
      33,    65,    35,    36,    75,   245,    39,    62,   154,    64,
      79,   194,    49,   181,   182,    48,   154,    76,    58,     8,
     184,    10,    58,    61,    57,   154,    59,    16,    58,    92,
     194,    58,   154,   154,   105,    68,    69,   154,    96,    72,
      73,   128,   100,    58,    77,    78,   118,   154,    81,    82,
      58,   125,   179,    91,   123,   256,   257,    90,   169,   101,
     154,   193,   131,   154,   138,   134,   108,   167,    58,   102,
     103,   104,   165,    30,   154,    58,   109,    66,   191,   154,
     144,    25,   145,   125,    25,   118,    83,   156,    58,   122,
     154,   124,   161,   126,   127,   132,   133,   168,   190,   154,
      58,     3,   139,   136,   137,   138,   139,   140,   141,   142,
     143,   100,    58,   146,   179,   148,   356,   155,    58,    58,
     175,    58,   160,   154,   157,   326,   154,   116,   154,   162,
     163,   164,   174,   166,   167,   177,   154,   170,   171,    41,
      42,    43,    44,    34,   384,   179,   179,   180,   154,   389,
      25,   190,    12,    13,    14,    58,   179,    58,   147,   179,
      20,    21,   183,    97,   260,   190,   406,    27,    28,   193,
     192,    31,   184,    33,   190,    35,    36,   190,   179,    39,
     185,   186,   187,   188,   189,   179,   193,   190,    48,   194,
     185,   186,   187,   188,   189,   194,   243,    57,   162,    59,
     135,    11,   180,   122,    53,    54,    55,    56,    68,    69,
     201,    15,    72,    73,   150,    27,   352,    77,    78,   386,
     288,    81,    82,   400,    -1,    -1,    -1,   246,    -1,    -1,
      90,    -1,   328,   135,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,   102,   103,   104,    94,    -1,    51,    -1,   109,
       6,   153,    -1,    -1,    -1,    -1,   158,   159,   118,    -1,
      -1,    -1,   122,    67,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    89,   146,    -1,   148,    -1,
      -1,    47,    -1,    97,    50,    99,    -1,   157,    -1,    -1,
     374,    -1,   162,   163,   164,    -1,   166,   167,   112,    -1,
     170,   171,    -1,    12,    13,    14,    -1,    -1,    -1,   179,
     180,    20,    21,    -1,    -1,   129,   130,    -1,    27,    28,
      -1,    -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,   165,    -1,   167,    -1,   121,    -1,    -1,   172,    68,
      69,    -1,   176,    72,    73,    -1,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,   157,    -1,   102,   103,   104,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,   122,    -1,   124,    45,   126,   127,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,    11,   148,
      -1,    70,    71,    -1,    17,    74,    19,    -1,   157,    -1,
      -1,    80,    -1,   162,   163,   164,    -1,   166,   167,    -1,
      -1,   170,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,    -1,    46,    -1,    -1,    -1,   106,   107,    -1,
      -1,   110,   111,    -1,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,   119,   120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    12,    13,    14,    20,    21,    27,    28,    31,
      33,    35,    36,    39,    48,    57,    59,    68,    69,    72,
      73,    77,    78,    81,    82,    90,   102,   103,   104,   109,
     118,   122,   124,   126,   127,   136,   137,   138,   139,   140,
     141,   142,   143,   146,   148,   157,   162,   163,   164,   166,
     167,   170,   171,   180,   196,   197,   198,   199,   200,   210,
     211,   212,   213,   217,   222,   230,   239,   244,   248,   253,
     257,   258,   259,   260,   261,   269,   270,   273,   284,   285,
     179,    58,   214,     8,    10,    16,    66,   100,   116,   147,
     249,   250,   251,   252,     9,    96,   100,   233,   234,   235,
     154,   262,   249,    18,    22,    79,   123,   131,   134,   156,
     161,   224,    63,    65,   154,   201,   202,   203,   154,   154,
     154,   154,   267,   268,   201,   281,    58,    53,    54,    55,
      56,    84,    86,    88,    94,   236,   237,   238,   281,   154,
     154,   280,    58,     7,     8,    23,    61,    91,   155,   160,
     274,   275,    25,    63,    65,   144,   201,   202,    58,    40,
      92,   145,   245,   246,   247,   154,   263,   223,   224,   154,
       6,    29,    47,    50,   121,   149,   150,   151,   152,   157,
     254,   255,   256,    11,    17,    19,    46,    85,    87,    93,
      95,    98,   119,   120,   218,   219,   220,   221,   202,    58,
     191,   277,   278,   279,    58,   276,     0,   198,   179,   201,
     201,    30,    58,   283,    58,   154,   154,    32,    52,    76,
     272,   193,    26,    49,   132,   133,   139,   215,   216,   250,
     234,    58,    30,   225,     3,    41,    42,    43,    44,   135,
     153,   158,   159,   240,   241,   242,   243,   154,   198,   268,
     201,   237,    58,   154,   275,   231,    25,    25,   231,   231,
      83,   246,    58,   190,   224,   255,   283,    37,    58,   165,
     282,   219,    58,   283,   265,    58,   278,    58,   179,   204,
       5,    62,    64,   154,   175,   271,   181,   182,   286,   287,
     288,    58,   154,    27,    35,    38,    75,   105,   168,   226,
     227,   228,   154,   154,    58,   241,   283,   282,    45,    52,
      70,    71,    74,    80,   106,   107,   110,   111,   113,   114,
     115,   117,   172,   232,   231,   231,   202,   154,    59,   128,
     266,    34,    15,    51,    67,    89,    97,    99,   112,   129,
     130,   165,   167,   172,   176,   205,   206,   207,   208,   209,
     142,   287,   289,   290,   292,   179,   190,   154,     4,    24,
     101,   108,   125,   174,   177,   229,   231,    25,   264,   202,
      58,    58,    58,   169,   190,   179,   194,   290,   193,   283,
     192,   201,   183,   291,   190,   184,   293,   294,   283,   190,
     194,   294,   179,   283,   193,   185,   186,   187,   188,   189,
     295,   296,   297,   194,   296,   179,   190,   179,   283
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
#line 367 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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
#line 403 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			peer_node *my_node;

			my_node = create_peer_node((yyvsp[(1) - (3)].Integer), (yyvsp[(2) - (3)].Address_node), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.peers, my_node);
		}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 422 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Address_node) = create_address_node((yyvsp[(2) - (2)].String), (yyvsp[(1) - (2)].Integer)); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 427 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Address_node) = create_address_node((yyvsp[(1) - (1)].String), AF_UNSPEC); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 432 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = AF_INET; }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 434 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = AF_INET6; }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 439 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 441 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 454 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer)); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 469 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 471 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_uval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 489 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			unpeer_node *my_node;
			
			my_node = create_unpeer_node((yyvsp[(2) - (2)].Address_node));
			if (my_node)
				APPEND_G_FIFO(cfgt.unpeers, my_node);
		}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 510 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.broadcastclient = 1; }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 512 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.manycastserver, (yyvsp[(2) - (2)].Address_fifo)); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 514 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.multicastclient, (yyvsp[(2) - (2)].Address_fifo)); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 516 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.mdnstries = (yyvsp[(2) - (2)].Integer); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 527 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.control_key = (yyvsp[(2) - (2)].Integer); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 529 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { 
			cfgt.auth.cryptosw++;
			CONCAT_G_FIFOS(cfgt.auth.crypto_cmd_list, (yyvsp[(2) - (2)].Attr_val_fifo));
		}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 534 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.keys = (yyvsp[(2) - (2)].String); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 536 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.keysdir = (yyvsp[(2) - (2)].String); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 538 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			    msyslog(LOG_WARNING,
				    "requestkey is a no-op because "
				    "ntpdc has been removed.");
			}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 544 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.revoke = (yyvsp[(2) - (2)].Integer); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 546 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			cfgt.auth.trusted_key_list = (yyvsp[(2) - (2)].Attr_val_fifo);

			// if (!cfgt.auth.trusted_key_list)
			// 	cfgt.auth.trusted_key_list = $2;
			// else
			// 	LINK_SLIST(cfgt.auth.trusted_key_list, $2, link);
		}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 555 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { cfgt.auth.ntp_signd_socket = (yyvsp[(2) - (2)].String); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 560 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 562 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 570 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 572 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val) = NULL;
			cfgt.auth.revoke = (yyvsp[(2) - (2)].Integer);
			msyslog(LOG_WARNING,
				"'crypto revoke %d' is deprecated, "
				"please use 'revoke %d' instead.",
				cfgt.auth.revoke, cfgt.auth.revoke);
		}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 596 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.orphan_cmds, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 601 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 606 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {	
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 614 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (double)(yyvsp[(2) - (2)].Integer)); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 616 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double)); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 618 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (double)(yyvsp[(2) - (2)].Integer)); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 644 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.stats_list, (yyvsp[(2) - (2)].Int_fifo)); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 646 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (lex_from_file()) {
				cfgt.stats_dir = (yyvsp[(2) - (2)].String);
			} else {
				YYFREE((yyvsp[(2) - (2)].String));
				yyerror("statsdir remote configuration ignored");
			}
		}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 655 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			filegen_node *fgn;
			
			fgn = create_filegen_node((yyvsp[(2) - (3)].Integer), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.filegen_opts, fgn);
		}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 665 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = (yyvsp[(1) - (2)].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 670 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = NULL;
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(1) - (1)].Integer)));
		}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 689 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 691 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 699 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 106:
/* Line 1787 of yacc.c  */
#line 709 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if (lex_from_file()) {
				(yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				yyerror("filegen type remote config ignored");
			}
		}
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 718 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 108:
/* Line 1787 of yacc.c  */
#line 733 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer)); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 763 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			CONCAT_G_FIFOS(cfgt.discard_opts, (yyvsp[(2) - (2)].Attr_val_fifo));
		}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 767 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			CONCAT_G_FIFOS(cfgt.mru_opts, (yyvsp[(2) - (2)].Attr_val_fifo));
		}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 771 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node((yyvsp[(2) - (3)].Address_node), NULL, (yyvsp[(3) - (3)].Int_fifo),
						  lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 779 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node((yyvsp[(2) - (5)].Address_node), (yyvsp[(4) - (5)].Address_node), (yyvsp[(5) - (5)].Int_fifo),
						  lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 787 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *rn;

			rn = create_restrict_node(NULL, NULL, (yyvsp[(3) - (3)].Int_fifo),
						  lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 795 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 126:
/* Line 1787 of yacc.c  */
#line 810 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 127:
/* Line 1787 of yacc.c  */
#line 825 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			restrict_node *	rn;

			APPEND_G_FIFO((yyvsp[(3) - (3)].Int_fifo), create_int_node((yyvsp[(2) - (3)].Integer)));
			rn = create_restrict_node(
				NULL, NULL, (yyvsp[(3) - (3)].Int_fifo), lex_current()->curpos.nline);
			APPEND_G_FIFO(cfgt.restrict_opts, rn);
		}
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 837 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Int_fifo) = NULL; }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 839 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = (yyvsp[(1) - (2)].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 865 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 870 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 878 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 889 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 894 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 902 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 922 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			addr_opts_node *aon;
			
			aon = create_addr_opts_node((yyvsp[(2) - (3)].Address_node), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.fudge, aon);
		}
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 932 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 937 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 945 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double)); }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 947 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 949 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if ((yyvsp[(2) - (2)].Integer) >= 0 && (yyvsp[(2) - (2)].Integer) <= 16) {
				(yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer));
			} else {
				(yyval.Attr_val) = NULL;
				yyerror("fudge factor: stratum value not in [0..16], ignored");
			}
		}
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 958 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 960 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String)); }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 981 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.rlimit, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 986 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 991 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 999 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 1015 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.enable_opts, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 1017 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.disable_opts, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 1022 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 1027 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 1035 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival(T_Flag, (yyvsp[(1) - (1)].Integer)); }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 1037 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 196:
/* Line 1787 of yacc.c  */
#line 1071 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.tinker, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 1076 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 1081 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 1089 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double)); }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 1114 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_dval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Double));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 1121 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 1128 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;

			av = create_attr_sval((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].String));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 1135 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 216:
/* Line 1787 of yacc.c  */
#line 1151 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 217:
/* Line 1787 of yacc.c  */
#line 1170 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { lex_flush_stack(); }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 1172 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { /* see drift_parm below for actions */ }
    break;

  case 219:
/* Line 1787 of yacc.c  */
#line 1174 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.logconfig, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 1176 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.phone, (yyvsp[(2) - (2)].String_fifo)); }
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 1178 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { APPEND_G_FIFO(cfgt.setvar, (yyvsp[(2) - (2)].Set_var)); }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 1180 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			addr_opts_node *aon;
			
			aon = create_addr_opts_node((yyvsp[(2) - (3)].Address_node), (yyvsp[(3) - (3)].Attr_val_fifo));
			APPEND_G_FIFO(cfgt.trap, aon);
		}
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 1187 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.ttl, (yyvsp[(2) - (2)].Attr_val_fifo)); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 1202 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
#ifndef ENABLE_LEAP_SMEAR
			yyerror("Built without LEAP_SMEAR support.");
#endif
		}
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 1221 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 234:
/* Line 1787 of yacc.c  */
#line 1232 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_sval(T_Driftfile, (yyvsp[(1) - (2)].String));
			APPEND_G_FIFO(cfgt.vars, av);
			av = create_attr_dval(T_WanderThreshold, (yyvsp[(2) - (2)].Double));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 1241 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			attr_val *av;
			
			av = create_attr_sval(T_Driftfile, estrdup(""));
			APPEND_G_FIFO(cfgt.vars, av);
		}
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 1251 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Set_var) = create_setvar_node((yyvsp[(1) - (4)].String), (yyvsp[(3) - (4)].String), (yyvsp[(4) - (4)].Integer)); }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 1257 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = 0; }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 1262 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val_fifo) = NULL; }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 1264 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 1272 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival((yyvsp[(1) - (2)].Integer), (yyvsp[(2) - (2)].Integer)); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 1274 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val) = create_attr_sval((yyvsp[(1) - (2)].Integer), estrdup((yyvsp[(2) - (2)].Address_node)->address));
			destroy_address_node((yyvsp[(2) - (2)].Address_node));
		}
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 1282 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 1287 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 1295 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
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

  case 246:
/* Line 1787 of yacc.c  */
#line 1320 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			nic_rule_node *nrn;
			
			nrn = create_nic_rule_node((yyvsp[(3) - (3)].Integer), NULL, (yyvsp[(2) - (3)].Integer));
			APPEND_G_FIFO(cfgt.nic_rules, nrn);
		}
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 1327 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			nic_rule_node *nrn;
			
			nrn = create_nic_rule_node(0, (yyvsp[(3) - (3)].String), (yyvsp[(2) - (3)].Integer));
			APPEND_G_FIFO(cfgt.nic_rules, nrn);
		}
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 1355 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { CONCAT_G_FIFOS(cfgt.reset_counters, (yyvsp[(2) - (2)].Int_fifo)); }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 1360 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = (yyvsp[(1) - (2)].Int_fifo);
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 1365 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Int_fifo) = NULL;
			APPEND_G_FIFO((yyval.Int_fifo), create_int_node((yyvsp[(1) - (1)].Integer)));
		}
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 1389 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), create_int_node((yyvsp[(2) - (2)].Integer)));
		}
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 1394 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), create_int_node((yyvsp[(1) - (1)].Integer)));
		}
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 1402 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (2)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (2)].Attr_val));
		}
    break;

  case 270:
/* Line 1787 of yacc.c  */
#line 1407 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (1)].Attr_val));
		}
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 1415 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_ival('i', (yyvsp[(1) - (1)].Integer)); }
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 1421 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_rangeval('-', (yyvsp[(2) - (5)].Integer), (yyvsp[(4) - (5)].Integer)); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 1426 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.String_fifo) = (yyvsp[(1) - (2)].String_fifo);
			APPEND_G_FIFO((yyval.String_fifo), create_string_node((yyvsp[(2) - (2)].String)));
		}
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 1431 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.String_fifo) = NULL;
			APPEND_G_FIFO((yyval.String_fifo), create_string_node((yyvsp[(1) - (1)].String)));
		}
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 1439 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Address_fifo) = (yyvsp[(1) - (2)].Address_fifo);
			APPEND_G_FIFO((yyval.Address_fifo), (yyvsp[(2) - (2)].Address_node));
		}
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 1444 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Address_fifo) = NULL;
			APPEND_G_FIFO((yyval.Address_fifo), (yyvsp[(1) - (1)].Address_node));
		}
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 1452 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			if ((yyvsp[(1) - (1)].Integer) != 0 && (yyvsp[(1) - (1)].Integer) != 1) {
				yyerror("Integer value is not boolean (0 or 1). Assuming 1");
				(yyval.Integer) = 1;
			} else {
				(yyval.Integer) = (yyvsp[(1) - (1)].Integer);
			}
		}
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 1460 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = 1; }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 1461 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Integer) = 0; }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 1465 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Double) = (double)(yyvsp[(1) - (1)].Integer); }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1476 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			sim_node *sn;
			
			sn =  create_sim_node((yyvsp[(3) - (5)].Attr_val_fifo), (yyvsp[(4) - (5)].Sim_server_fifo));
			APPEND_G_FIFO(cfgt.sim_details, sn);

			/* Revert from ; to \n for end-of-command */
			old_config_style = true;
		}
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 1493 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { old_config_style = false; }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 1498 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (3)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (3)].Attr_val));
		}
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 1503 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (2)].Attr_val));
		}
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 1511 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (3)].Integer), (yyvsp[(3) - (3)].Double)); }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 1521 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_server_fifo) = (yyvsp[(1) - (2)].Sim_server_fifo);
			APPEND_G_FIFO((yyval.Sim_server_fifo), (yyvsp[(2) - (2)].Sim_server));
		}
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 1526 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_server_fifo) = NULL;
			APPEND_G_FIFO((yyval.Sim_server_fifo), (yyvsp[(1) - (1)].Sim_server));
		}
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 1534 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Sim_server) = ONLY_SIM(create_sim_server((yyvsp[(1) - (5)].Address_node), (yyvsp[(3) - (5)].Double), (yyvsp[(4) - (5)].Sim_script_fifo))); }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 1539 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Double) = (yyvsp[(3) - (4)].Double); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 1544 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Address_node) = (yyvsp[(3) - (3)].Address_node); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 1549 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_script_fifo) = (yyvsp[(1) - (2)].Sim_script_fifo);
			APPEND_G_FIFO((yyval.Sim_script_fifo), (yyvsp[(2) - (2)].Sim_script));
		}
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 1554 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Sim_script_fifo) = NULL;
			APPEND_G_FIFO((yyval.Sim_script_fifo), (yyvsp[(1) - (1)].Sim_script));
		}
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1562 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Sim_script) = ONLY_SIM(create_sim_script_info((yyvsp[(3) - (6)].Double), (yyvsp[(5) - (6)].Attr_val_fifo))); }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1567 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = (yyvsp[(1) - (3)].Attr_val_fifo);
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(2) - (3)].Attr_val));
		}
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1572 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    {
			(yyval.Attr_val_fifo) = NULL;
			APPEND_G_FIFO((yyval.Attr_val_fifo), (yyvsp[(1) - (2)].Attr_val));
		}
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 1580 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"
    { (yyval.Attr_val) = create_attr_dval((yyvsp[(1) - (3)].Integer), (yyvsp[(3) - (3)].Double)); }
    break;


/* Line 1787 of yacc.c  */
#line 3382 "ntp_parser.tab.c"
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
#line 1591 "/mnt/devel/ntp/commit/ntpd/ntp_parser.y"


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

