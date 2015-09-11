/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 2 "grammar.y"

#include "nodo.h"

extern elnodo * procedimientos[127]; //cambiar esta forma
extern int idx_prc;

extern elnodo * pila_programas[32];
 extern int idx_prg;

 extern int nro_decimales;
 extern long memoria;


#include "stdio.h"
 
#define MSDOS
//char constantes[127][127];
//char variables[127][127];


/* Line 268 of yacc.c  */
#line 92 "grammar.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STOP = 258,
     LLAMAR = 259,
     PROC = 260,
     END = 261,
     PROCNAME = 262,
     GRAFICOS = 263,
     DIM = 264,
     LINEA = 265,
     CIRCULO = 266,
     CONVERTIR = 267,
     EVALUAR = 268,
     EQ = 269,
     TERMINAR = 270,
     DECIMALES = 271,
     VENTANA = 272,
     FIN = 273,
     BOTON = 274,
     MENSAJE = 275,
     ETIQUETA = 276,
     TEXTO = 277,
     NE = 278,
     LT = 279,
     LE = 280,
     GT = 281,
     GE = 282,
     PLUS = 283,
     MINUS = 284,
     MULT = 285,
     DIVIDE = 286,
     RPAREN = 287,
     LPAREN = 288,
     ASSIGN = 289,
     SEMICOLON = 290,
     COMMA = 291,
     IF = 292,
     THEN = 293,
     ELSE = 294,
     FI = 295,
     WHILE = 296,
     FOR = 297,
     TO = 298,
     DO = 299,
     OD = 300,
     PRINT = 301,
     LEER = 302,
     BORRAR = 303,
     NUMBER = 304,
     NAME = 305,
     SNAME = 306,
     LITERAL = 307,
     DOBLECOMILLA = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 22 "grammar.y"

 elnodo * nodo;



/* Line 293 of yacc.c  */
#line 187 "grammar.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 199 "grammar.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   410

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    18,    22,    26,
      33,    36,    39,    42,    45,    48,    56,    62,    68,    78,
      83,    88,    93,    97,   101,   108,   114,   121,   124,   127,
     133,   142,   149,   153,   157,   160,   162,   164,   167,   169,
     173,   176,   178,   182,   184,   186,   188,   191,   193,   195,
     199,   203,   207,   211,   215,   219,   223,   225,   229,   233,
     235,   239,   243,   246,   249,   253,   255,   257,   262,   264,
     266,   268
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    65,    -1,    65,    15,    58,    -1,    73,
      -1,    58,    73,    -1,    71,    14,    66,    -1,    70,    14,
      52,    -1,     9,    71,    49,    -1,    71,    54,    66,    55,
      14,    66,    -1,     4,    72,    -1,    16,    49,    -1,    46,
      63,    -1,    47,    70,    -1,    47,    71,    -1,    37,    66,
      38,    65,    39,    65,    40,    -1,    37,    66,    38,    65,
      40,    -1,    41,    66,    44,    65,    45,    -1,    42,    71,
      14,    66,    43,    66,    44,    65,    45,    -1,    17,    60,
       6,    17,    -1,    17,    71,    49,    49,    -1,    47,    17,
      71,    52,    -1,     4,    17,    71,    -1,    71,    17,    52,
      -1,    71,    19,    52,    72,    49,    49,    -1,    71,    21,
      52,    49,    49,    -1,    71,    22,    51,    67,    36,    67,
      -1,    20,    63,    -1,     4,    52,    -1,     8,    72,    71,
      71,    71,    -1,    10,    67,    36,    67,    36,    67,    36,
      67,    -1,    11,    67,    36,    67,    36,    67,    -1,    12,
      70,    71,    -1,    12,    71,    70,    -1,    13,    52,    -1,
       3,    -1,    52,    -1,    52,    61,    -1,    62,    -1,    61,
      36,    62,    -1,    19,    52,    -1,    64,    -1,    63,    36,
      64,    -1,    66,    -1,    52,    -1,    70,    -1,    65,    59,
      -1,    59,    -1,    67,    -1,    67,    14,    67,    -1,    67,
      23,    67,    -1,    67,    24,    67,    -1,    67,    25,    67,
      -1,    67,    26,    67,    -1,    67,    27,    67,    -1,    70,
      14,    52,    -1,    68,    -1,    67,    28,    68,    -1,    67,
      29,    68,    -1,    69,    -1,    68,    30,    69,    -1,    68,
      31,    69,    -1,    28,    69,    -1,    29,    69,    -1,    33,
      66,    32,    -1,    49,    -1,    71,    -1,    71,    54,    66,
      55,    -1,    51,    -1,    50,    -1,    50,    -1,     5,    72,
      65,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    74,    75,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   112,   113,   117,   118,
     122,   125,   126,   130,   131,   132,   137,   138,   142,   143,
     144,   145,   146,   147,   148,   149,   153,   154,   155,   159,
     160,   161,   165,   166,   167,   168,   169,   170,   174,   177,
     180,   184
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STOP", "LLAMAR", "PROC", "END",
  "PROCNAME", "GRAFICOS", "DIM", "LINEA", "CIRCULO", "CONVERTIR",
  "EVALUAR", "EQ", "TERMINAR", "DECIMALES", "VENTANA", "FIN", "BOTON",
  "MENSAJE", "ETIQUETA", "TEXTO", "NE", "LT", "LE", "GT", "GE", "PLUS",
  "MINUS", "MULT", "DIVIDE", "RPAREN", "LPAREN", "ASSIGN", "SEMICOLON",
  "COMMA", "IF", "THEN", "ELSE", "FI", "WHILE", "FOR", "TO", "DO", "OD",
  "PRINT", "LEER", "BORRAR", "NUMBER", "NAME", "SNAME", "LITERAL",
  "DOBLECOMILLA", "'['", "']'", "$accept", "ROOT", "procedimientos",
  "statement", "defventana", "defcontroles", "lista_controles",
  "lista_expr", "lista_expr2", "stmtseq", "expression", "expr2", "expr3",
  "expr4", "sdesignator", "designator", "proc_designator", "procedimiento", 0
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
     305,   306,   307,   308,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    63,    63,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    71,
      72,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     3,     3,     3,     6,
       2,     2,     2,     2,     2,     7,     5,     5,     9,     4,
       4,     4,     3,     3,     6,     5,     6,     2,     2,     5,
       8,     6,     3,     3,     2,     1,     1,     2,     1,     3,
       2,     1,     3,     1,     1,     1,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     2,     2,     3,     1,     1,     4,     1,     1,
       1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    68,     0,
      47,     2,     0,     0,     0,    70,    28,    10,     0,     0,
       0,     0,     0,    65,     0,    56,    59,    66,     0,     0,
       0,    34,    11,    36,     0,     0,    44,    27,    41,    43,
      48,    45,     0,     0,     0,     0,    12,     0,    13,    14,
       1,     0,    46,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     8,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     7,     6,    23,     0,     0,
       0,     0,     0,    64,    57,    58,     0,    60,    61,     0,
       0,    40,     0,    19,    20,    42,    49,    50,    51,    52,
      53,    54,    55,     0,     0,     0,    21,     0,     5,     0,
       0,     0,     0,    29,     0,    67,     0,    39,     0,    16,
      17,     0,     0,     0,    25,     0,     0,     0,    31,     0,
       0,    71,    24,    26,     9,     0,    15,     0,    30,     0,
      18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,   103,    20,    44,    86,    87,    47,    48,    21,
      49,    50,    35,    36,    22,    37,    27,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -88
static const yytype_int16 yypact[] =
{
     346,   -88,   -14,   -44,   -41,    13,    13,   -24,   -39,   -12,
     -33,   351,    44,    44,   -41,   351,     8,   -88,   -88,    35,
     -88,   207,    26,     1,   -41,   -88,   -88,   -88,   -41,     7,
      13,    13,    44,   -88,    79,    -1,   -88,     6,    94,   -41,
      14,   -88,   -88,    47,    61,    20,   -88,    34,   -88,   -88,
     381,    65,    37,    65,    40,    67,    34,   -41,   -88,   -88,
     -88,    80,   -88,    45,    44,    50,    51,    57,    60,    44,
     -88,   -41,   -88,   -88,   -88,    54,    13,    13,    13,    13,
      13,    44,    13,   -88,   -88,    62,    82,   -88,   102,    75,
     351,    13,    13,    13,    13,    13,    13,    64,   346,   346,
      44,    73,   -44,    80,   -88,   -88,   -88,   -88,   -44,    89,
      13,    74,   -41,   -88,    -1,    -1,    99,   -88,   -88,    76,
     121,   -88,    47,   -88,   -88,   -88,    25,    25,    25,    25,
      25,    25,   -88,   162,   222,    98,   -88,   346,   -88,    95,
      96,   126,   129,   -88,    13,   -88,    13,   -88,   346,   -88,
     -88,    44,   271,   104,   -88,    13,    44,   148,    25,   286,
     103,   -88,   -88,    25,   -88,    13,   -88,   346,    25,   331,
     -88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -13,   -88,   -88,    38,   143,    78,   -87,
      32,    -4,   -45,     3,    36,     0,     2,    77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,    34,    38,    24,    29,    28,    25,    40,    62,    17,
      45,   133,   134,    41,    55,    64,    59,    17,    65,    43,
      66,    23,    67,    68,    70,    57,    17,    18,    71,    79,
      80,   114,   115,    73,    74,    60,    25,    42,    26,    83,
      63,    30,    31,    39,    52,    54,    32,    51,    53,    53,
     152,    51,    58,    76,    77,    69,    72,   101,    17,    18,
      81,   159,    33,    17,    75,    18,    85,    88,    53,    89,
      90,   112,    30,    31,   116,    98,    84,    32,   120,    97,
     169,   100,   117,   118,    99,   102,   113,   126,   127,   128,
     129,   130,   131,    33,    17,    18,   106,   105,    23,    23,
      53,   111,   107,   108,   137,    53,   141,    76,    77,   109,
     139,   110,   143,   119,   121,    78,   132,    53,   122,   123,
      62,    62,    76,    77,   124,   136,    51,    76,    77,   142,
      82,   145,   135,    23,    23,   144,    53,    23,   140,    62,
     157,   151,   158,   156,   153,   154,    62,   167,    23,    76,
      77,   163,    23,   162,    76,    77,    62,   146,    56,    23,
     147,   168,   155,     0,     0,     1,     2,    23,   125,    23,
       3,     4,     5,     6,     7,     8,    76,    77,     9,    10,
     138,     0,    11,   160,   165,     0,     0,    53,   164,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,    12,
       0,   148,   149,    13,    14,     0,     0,     0,    15,    16,
       1,     2,    17,    18,     0,     3,     4,     5,     6,     7,
       8,     0,    61,     9,    10,     1,     2,    11,     0,     0,
       3,     4,     5,     6,     7,     8,     0,     0,     9,    10,
       0,     0,    11,     0,    12,     0,     0,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,    17,    18,    12,
       0,     0,     0,    13,    14,     0,     0,   150,    15,    16,
       0,     0,    17,    18,     1,     2,     0,   161,     0,     3,
       4,     5,     6,     7,     8,     0,     0,     9,    10,     1,
       2,    11,     0,     0,     3,     4,     5,     6,     7,     8,
       0,     0,     9,    10,     0,     0,    11,     0,    12,     0,
       0,     0,    13,    14,     0,     0,     0,    15,    16,     0,
       0,    17,    18,    12,     0,     0,   166,    13,    14,     0,
       0,     0,    15,    16,     1,     2,    17,    18,     0,     3,
       4,     5,     6,     7,     8,     0,     0,     9,    10,     1,
       2,    11,     0,     0,     3,     4,     5,     6,     7,     8,
       0,     0,     9,    10,     0,     0,    11,     0,    12,     0,
       0,     0,    13,    14,     0,     0,   170,    15,    16,    30,
      31,    17,    18,    12,    32,     0,     0,    13,    14,     0,
       0,     0,    15,    16,     0,    91,    17,    18,     0,     0,
      33,    17,    18,    46,    92,    93,    94,    95,    96,    76,
      77
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-88))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     5,     6,    17,     4,     3,    50,     7,    21,    50,
      10,    98,    99,    52,    14,    14,    16,    50,    17,    52,
      19,    21,    21,    22,    24,    17,    50,    51,    28,    30,
      31,    76,    77,    30,    31,     0,    50,    49,    52,    39,
      14,    28,    29,     7,    12,    13,    33,    11,    12,    13,
     137,    15,    16,    28,    29,    54,    49,    57,    50,    51,
      54,   148,    49,    50,    32,    51,    19,     6,    32,    49,
      36,    71,    28,    29,    78,    38,    40,    33,    82,    14,
     167,    14,    79,    80,    44,     5,    32,    91,    92,    93,
      94,    95,    96,    49,    50,    51,    64,    52,    98,    99,
      64,    69,    52,    52,   102,    69,   110,    28,    29,    52,
     108,    51,   112,    81,    52,    36,    52,    81,    36,    17,
     133,   134,    28,    29,    49,    52,    90,    28,    29,    55,
      36,    55,   100,   133,   134,    36,   100,   137,    49,   152,
     144,    43,   146,    14,    49,    49,   159,    44,   148,    28,
      29,   155,   152,    49,    28,    29,   169,    36,    15,   159,
     122,   165,    36,    -1,    -1,     3,     4,   167,    90,   169,
       8,     9,    10,    11,    12,    13,    28,    29,    16,    17,
     103,    -1,    20,   151,    36,    -1,    -1,   151,   156,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    46,    47,
       3,     4,    50,    51,    -1,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,     3,     4,    20,    -1,    -1,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    17,
      -1,    -1,    20,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,
      -1,    -1,    50,    51,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    17,     3,
       4,    20,    -1,    -1,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    17,    -1,    -1,    20,    -1,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    50,    51,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    46,    47,     3,     4,    50,    51,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    17,     3,
       4,    20,    -1,    -1,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    17,    -1,    -1,    20,    -1,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,    28,
      29,    50,    51,    37,    33,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    -1,    14,    50,    51,    -1,    -1,
      49,    50,    51,    52,    23,    24,    25,    26,    27,    28,
      29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     8,     9,    10,    11,    12,    13,    16,
      17,    20,    37,    41,    42,    46,    47,    50,    51,    57,
      59,    65,    70,    71,    17,    50,    52,    72,    72,    71,
      28,    29,    33,    49,    67,    68,    69,    71,    67,    70,
      71,    52,    49,    52,    60,    71,    52,    63,    64,    66,
      67,    70,    66,    70,    66,    71,    63,    17,    70,    71,
       0,    15,    59,    14,    14,    17,    19,    21,    22,    54,
      71,    71,    49,    69,    69,    66,    28,    29,    36,    30,
      31,    54,    36,    71,    70,    19,    61,    62,     6,    49,
      36,    14,    23,    24,    25,    26,    27,    14,    38,    44,
      14,    71,     5,    58,    73,    52,    66,    52,    52,    52,
      51,    66,    71,    32,    68,    68,    67,    69,    69,    66,
      67,    52,    36,    17,    49,    64,    67,    67,    67,    67,
      67,    67,    52,    65,    65,    66,    52,    72,    73,    72,
      49,    67,    55,    71,    36,    55,    36,    62,    39,    40,
      45,    43,    65,    49,    49,    36,    14,    67,    67,    65,
      66,     6,    49,    67,    66,    36,    40,    44,    67,    65,
      45
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


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
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  *++yyvsp = yylval;

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
        case 2:

/* Line 1806 of yacc.c  */
#line 67 "grammar.y"
    {  pila_programas[idx_prg] = ((yyvsp[(1) - (1)].nodo)); /* stmtseq */ ;  idx_prg++ ; }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 68 "grammar.y"
    {
  	printf("se ha reducido el programa por la regla de la linea 66 de grammar.y\n");
 	pila_programas[idx_prg] = ((yyvsp[(1) - (3)].nodo)); /* stmtseq */ ;  idx_prg++; }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 74 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* un procedimiento  */ }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 75 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(2) - (2)].nodo) ; /*varios procedim.*/ }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 79 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_num, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asignacion*/}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 80 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asign literal*/}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 81 "grammar.y"
    { (yyval.nodo) = nodo2(dimensionar, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dimensionar un vector entero */ }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 82 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 83 "grammar.y"
    {  (yyval.nodo) = nodo1(llamar, (yyvsp[(2) - (2)].nodo)) ;/*llamar proced.*/}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 84 "grammar.y"
    { (yyval.nodo) = nodo1(decimales, (yyvsp[(2) - (2)].nodo) ) ; }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 85 "grammar.y"
    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 86 "grammar.y"
    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable alfa*/}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 87 "grammar.y"
    { (yyval.nodo) = nodo1(leer,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable numerica*/}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 88 "grammar.y"
    { (yyval.nodo) = nodo3(si, (yyvsp[(2) - (7)].nodo), (yyvsp[(4) - (7)].nodo), (yyvsp[(6) - (7)].nodo)); /*if con else */}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 89 "grammar.y"
    { (yyval.nodo) = nodo2(si, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*if sin else*/}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 90 "grammar.y"
    { (yyval.nodo) = nodo2(mientras, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*while*/}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 91 "grammar.y"
    {(yyval.nodo) = nodo4(desde, (yyvsp[(2) - (9)].nodo), (yyvsp[(4) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(8) - (9)].nodo)); /*for*/}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 92 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (4)].nodo) ; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 93 "grammar.y"
    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)) ;  }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 94 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[(3) - (4)].nodo)) ;  }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 95 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 96 "grammar.y"
    { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 97 "grammar.y"
    { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(5) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 98 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[(1) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)) ;  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 99 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 100 "grammar.y"
    { (yyval.nodo) = nodo1(mensaje,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 101 "grammar.y"
    {   (yyval.nodo) = nodo1(interpreta, (yyvsp[(2) - (2)].nodo));  }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 102 "grammar.y"
    { (yyval.nodo) = nodo4(graficos, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo));   }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 103 "grammar.y"
    { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[(2) - (8)].nodo), (yyvsp[(4) - (8)].nodo), (yyvsp[(6) - (8)].nodo), (yyvsp[(8) - (8)].nodo)) ; }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 104 "grammar.y"
    { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[(2) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 105 "grammar.y"
    {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo));}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 106 "grammar.y"
    {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo));}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 107 "grammar.y"
    {  (yyval.nodo) = nodo1(interpreta, (yyvsp[(2) - (2)].nodo) );  }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 108 "grammar.y"
    { (yyval.nodo)=nodo1(stop, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 112 "grammar.y"
    {  (yyval.nodo) = nodo1(ventana, (yyvsp[(1) - (1)].nodo)) ;  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 113 "grammar.y"
    { (yyval.nodo)=(yyvsp[(2) - (2)].nodo); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 117 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo) ; }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 118 "grammar.y"
    { (yyval.nodo) = nodo2( secuencia_controles, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 122 "grammar.y"
    { (yyval.nodo) = nodo1(guardar_boton, (yyvsp[(2) - (2)].nodo)) ; }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 125 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo) ; /*lista expr*/ }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 126 "grammar.y"
    { (yyval.nodo)=nodo2 (secuencia, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo))  ; /*varias lista expr, separadas por coma*/ }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 130 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[(1) - (1)].nodo)); /*lista expresion2*/}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 131 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[(1) - (1)].nodo) ); /* un literal*/}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 132 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[(1) - (1)].nodo)); /* una variable literal*/}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 137 "grammar.y"
    { (yyval.nodo) = nodo2(secuencia, (yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo)); /*una seq de comandos*/}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 138 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*un comando*/}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.nodo) = nodo2(suma, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*suma*/}
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expresion2*/}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 143 "grammar.y"
    { (yyval.nodo) = nodo2(igualque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*igualdad*/}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.nodo) = nodo2(noigualque,    (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*no igual*/}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.nodo) = nodo2(menorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor que*/}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 146 "grammar.y"
    { (yyval.nodo) = nodo2(menorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor o igual que*/}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 147 "grammar.y"
    { (yyval.nodo) = nodo2(mayorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor que*/}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 148 "grammar.y"
    { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor o igual que*/}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 149 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 153 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expr2*/}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.nodo) = nodo2(suma, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*suma*/}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 155 "grammar.y"
    { (yyval.nodo) = nodo2(resta, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*resta*/}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 159 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 160 "grammar.y"
    { (yyval.nodo) = nodo2(multiplica, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*multiplicar*/}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 161 "grammar.y"
    { (yyval.nodo) = nodo2 (divide, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dividir*/}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 165 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (2)].nodo); /*positivo*/}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 166 "grammar.y"
    { (yyval.nodo) = nodo1(negativo, (yyvsp[(2) - (2)].nodo)); /*negativo*/}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 167 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); /*expr enter parentesis*/}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 168 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo); /*numero*/}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 169 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador variable*/}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 170 "grammar.y"
    { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo));   }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 174 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador string*/}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 177 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo);  /* nombre designador */ }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 180 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo) ;  /*designador proced.*/ }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 184 "grammar.y"
    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*un procedimiento*/
                        procedimientos[(int) (yyvsp[(2) - (4)].nodo)->num] = (yyvsp[(3) - (4)].nodo)   ;   /* revisar este metodo */
			idx_prc++;
			}
    break;



/* Line 1806 of yacc.c  */
#line 2113 "grammar.tab.c"
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 2067 of yacc.c  */
#line 189 "grammar.y"




