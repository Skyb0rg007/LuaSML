/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         TLUA_YYSTYPE
#define YYLTYPE         TLUA_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         tlua_yyparse
#define yylex           tlua_yylex
#define yyerror         tlua_yyerror
#define yydebug         tlua_yydebug
#define yynerrs         tlua_yynerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HASH = 3,                       /* HASH  */
  YYSYMBOL_HASHLBRACKET = 4,               /* HASHLBRACKET  */
  YYSYMBOL_LPAREN = 5,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 6,                     /* RPAREN  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_ARROW = 8,                      /* ARROW  */
  YYSYMBOL_ASTERISK = 9,                   /* ASTERISK  */
  YYSYMBOL_DOTDOTDOT = 10,                 /* DOTDOTDOT  */
  YYSYMBOL_COLON = 11,                     /* COLON  */
  YYSYMBOL_COLONGT = 12,                   /* COLONGT  */
  YYSYMBOL_SEMICOLON = 13,                 /* SEMICOLON  */
  YYSYMBOL_EQUALOP = 14,                   /* EQUALOP  */
  YYSYMBOL_DARROW = 15,                    /* DARROW  */
  YYSYMBOL_LBRACKET = 16,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 17,                  /* RBRACKET  */
  YYSYMBOL_WILD = 18,                      /* WILD  */
  YYSYMBOL_LBRACE = 19,                    /* LBRACE  */
  YYSYMBOL_BAR = 20,                       /* BAR  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_ANDALSO = 23,                   /* ANDALSO  */
  YYSYMBOL_AS = 24,                        /* AS  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_DATATYPE = 26,                  /* DATATYPE  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_END = 29,                       /* END  */
  YYSYMBOL_EQTYPE = 30,                    /* EQTYPE  */
  YYSYMBOL_EXCEPTION = 31,                 /* EXCEPTION  */
  YYSYMBOL_FN = 32,                        /* FN  */
  YYSYMBOL_FUN = 33,                       /* FUN  */
  YYSYMBOL_FUNCTOR = 34,                   /* FUNCTOR  */
  YYSYMBOL_HANDLE = 35,                    /* HANDLE  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_IN = 37,                        /* IN  */
  YYSYMBOL_INCLUDE = 38,                   /* INCLUDE  */
  YYSYMBOL_INFIX = 39,                     /* INFIX  */
  YYSYMBOL_INFIXR = 40,                    /* INFIXR  */
  YYSYMBOL_LET = 41,                       /* LET  */
  YYSYMBOL_LOCAL = 42,                     /* LOCAL  */
  YYSYMBOL_NONFIX = 43,                    /* NONFIX  */
  YYSYMBOL_OF = 44,                        /* OF  */
  YYSYMBOL_OP = 45,                        /* OP  */
  YYSYMBOL_OPEN = 46,                      /* OPEN  */
  YYSYMBOL_ORELSE = 47,                    /* ORELSE  */
  YYSYMBOL_RAISE = 48,                     /* RAISE  */
  YYSYMBOL_REC = 49,                       /* REC  */
  YYSYMBOL_SHARING = 50,                   /* SHARING  */
  YYSYMBOL_SIG = 51,                       /* SIG  */
  YYSYMBOL_SIGNATURE = 52,                 /* SIGNATURE  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_STRUCTURE = 54,                 /* STRUCTURE  */
  YYSYMBOL_THEN = 55,                      /* THEN  */
  YYSYMBOL_TYPE = 56,                      /* TYPE  */
  YYSYMBOL_VAL = 57,                       /* VAL  */
  YYSYMBOL_WHERE = 58,                     /* WHERE  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_WITH = 60,                      /* WITH  */
  YYSYMBOL_WITHTYPE = 61,                  /* WITHTYPE  */
  YYSYMBOL_SHORTALPHANUMID = 62,           /* SHORTALPHANUMID  */
  YYSYMBOL_SHORTSYMID = 63,                /* SHORTSYMID  */
  YYSYMBOL_TYVARID = 64,                   /* TYVARID  */
  YYSYMBOL_LONGALPHANUMID = 65,            /* LONGALPHANUMID  */
  YYSYMBOL_LONGSYMID = 66,                 /* LONGSYMID  */
  YYSYMBOL_REAL = 67,                      /* REAL  */
  YYSYMBOL_WORD = 68,                      /* WORD  */
  YYSYMBOL_INT = 69,                       /* INT  */
  YYSYMBOL_STRING = 70,                    /* STRING  */
  YYSYMBOL_CHAR = 71,                      /* CHAR  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_input = 73,                     /* input  */
  YYSYMBOL_fixity = 74,                    /* fixity  */
  YYSYMBOL_digit = 75,                     /* digit  */
  YYSYMBOL_decs = 76,                      /* decs  */
  YYSYMBOL_dec = 77,                       /* dec  */
  YYSYMBOL_decnolocal = 78,                /* decnolocal  */
  YYSYMBOL_funs = 79,                      /* funs  */
  YYSYMBOL_clauses_top = 80,               /* clauses_top  */
  YYSYMBOL_clauses = 81,                   /* clauses  */
  YYSYMBOL_clause = 82,                    /* clause  */
  YYSYMBOL_tyvarseq = 83,                  /* tyvarseq  */
  YYSYMBOL_tyvar_pc = 84,                  /* tyvar_pc  */
  YYSYMBOL_opcon = 85,                     /* opcon  */
  YYSYMBOL_ebs = 86,                       /* ebs  */
  YYSYMBOL_eb = 87,                        /* eb  */
  YYSYMBOL_ebrhs = 88,                     /* ebrhs  */
  YYSYMBOL_numericField = 89,              /* numericField  */
  YYSYMBOL_match = 90,                     /* match  */
  YYSYMBOL_constraint = 91,                /* constraint  */
  YYSYMBOL_rules = 92,                     /* rules  */
  YYSYMBOL_rule = 93,                      /* rule  */
  YYSYMBOL_elabel = 94,                    /* elabel  */
  YYSYMBOL_elabels = 95,                   /* elabels  */
  YYSYMBOL_exp_ps = 96,                    /* exp_ps  */
  YYSYMBOL_exp = 97,                       /* exp  */
  YYSYMBOL_app_exp = 98,                   /* app_exp  */
  YYSYMBOL_aexp = 99,                      /* aexp  */
  YYSYMBOL_exp_2c = 100,                   /* exp_2c  */
  YYSYMBOL_exp_list = 101,                 /* exp_list  */
  YYSYMBOL_pat = 102,                      /* pat  */
  YYSYMBOL_cpat = 103,                     /* cpat  */
  YYSYMBOL_apats = 104,                    /* apats  */
  YYSYMBOL_apat = 105,                     /* apat  */
  YYSYMBOL_pats = 106,                     /* pats  */
  YYSYMBOL_barcpats = 107,                 /* barcpats  */
  YYSYMBOL_commapats = 108,                /* commapats  */
  YYSYMBOL_patitems = 109,                 /* patitems  */
  YYSYMBOL_patitem = 110,                  /* patitem  */
  YYSYMBOL_ty = 111,                       /* ty  */
  YYSYMBOL_ty1 = 112,                      /* ty1  */
  YYSYMBOL_tlabel = 113,                   /* tlabel  */
  YYSYMBOL_tlabels = 114,                  /* tlabels  */
  YYSYMBOL_tuple_ty = 115,                 /* tuple_ty  */
  YYSYMBOL_ty0_pc = 116,                   /* ty0_pc  */
  YYSYMBOL_optbar = 117,                   /* optbar  */
  YYSYMBOL_optsemicolon = 118,             /* optsemicolon  */
  YYSYMBOL_const = 119,                    /* const  */
  YYSYMBOL_shortAlphanumId = 120,          /* shortAlphanumId  */
  YYSYMBOL_shortSymId = 121,               /* shortSymId  */
  YYSYMBOL_longAlphanumId = 122,           /* longAlphanumId  */
  YYSYMBOL_longSymId = 123,                /* longSymId  */
  YYSYMBOL_vidNoEqual = 124,               /* vidNoEqual  */
  YYSYMBOL_vid = 125,                      /* vid  */
  YYSYMBOL_longvidNoEqual = 126,           /* longvidNoEqual  */
  YYSYMBOL_longvid = 127,                  /* longvid  */
  YYSYMBOL_con = 128,                      /* con  */
  YYSYMBOL_longcon = 129,                  /* longcon  */
  YYSYMBOL_tyvar = 130,                    /* tyvar  */
  YYSYMBOL_tycon = 131,                    /* tycon  */
  YYSYMBOL_longtycon = 132,                /* longtycon  */
  YYSYMBOL_idField = 133,                  /* idField  */
  YYSYMBOL_field = 134,                    /* field  */
  YYSYMBOL_longstrid = 135,                /* longstrid  */
  YYSYMBOL_vids = 136,                     /* vids  */
  YYSYMBOL_longstrids = 137                /* longstrids  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 9 "src/parser.y"

#define YYLLOC_DEFAULT(Cur, Rhs, N) do {                                        \
    if (N) {                                                                    \
        (Cur).left.line    = YYRHSLOC(Rhs, 1).left.line;                        \
        (Cur).left.column  = YYRHSLOC(Rhs, 1).left.column;                      \
        (Cur).right.line   = YYRHSLOC(Rhs, N).right.line;                       \
        (Cur).right.column = YYRHSLOC(Rhs, N).right.column;                     \
    } else {                                                                    \
        (Cur).left.line   = (Cur).right.line   = YYRHSLOC(Rhs, 0).right.line;   \
        (Cur).left.column = (Cur).right.column = YYRHSLOC(Rhs, 0).right.column; \
    }                                                                           \
} while (0)

/* Required function definitions */
extern int tlua_yylex(TLUA_YYSTYPE *, struct region *, void *);
static void tlua_yyerror(struct region *, void *scanner, tlua_lexstate *, const char *);
/* Required for allocation macros */
#define allocator (&lexstate->alloc)

#line 268 "_build/parser.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#ifdef NDEBUG
# define YY_ASSERT(E) ((void) (0 && (E)))
#else
# include <assert.h> /* INFRINGES ON USER NAME SPACE */
# define YY_ASSERT(E) assert (E)
#endif


#if 1

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined TLUA_YYLTYPE_IS_TRIVIAL && TLUA_YYLTYPE_IS_TRIVIAL \
             && defined TLUA_YYSTYPE_IS_TRIVIAL && TLUA_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX) YY_CAST (yysymbol_kind_t, YYX)

#if TLUA_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   154,   154,   155,   159,   160,   161,   162,   163,   165,
     171,   172,   173,   175,   176,   180,   181,   182,   183,   184,
     185,   187,   188,   190,   192,   193,   195,   205,   206,   208,
     209,   217,   218,   220,   221,   223,   225,   226,   227,   228,
     230,   237,   239,   240,   247,   249,   250,   252,   254,   255,
     269,   270,   272,   273,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   286,   287,   288,   294,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   318,   343,   344,
     345,   357,   358,   364,   365,   369,   370,   372,   373,   374,
     376,   377,   379,   384,   389,   395,   396,   405,   406,   407,
     408,   410,   411,   413,   414,   416,   417,   419,   423,   427,
     432,   439,   440,   441,   443,   444,   445,   446,   447,   448,
     449,   451,   453,   454,   456,   457,   459,   460,   464,   464,
     466,   466,   481,   482,   483,   484,   485,   487,   488,   489,
     490,   492,   493,   494,   496,   497,   499,   500,   501,   503,
     504,   506,   508,   510,   512,   513,   515,   516,   518,   519,
     520,   522,   523,   527,   528,   534,   535,   540,   541
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "EOF", "error", "invalid token", "HASH", "HASHLBRACKET", "LPAREN",
  "RPAREN", "COMMA", "ARROW", "ASTERISK", "DOTDOTDOT", "COLON", "COLONGT",
  "SEMICOLON", "EQUALOP", "DARROW", "LBRACKET", "RBRACKET", "WILD",
  "LBRACE", "BAR", "RBRACE", "AND", "ANDALSO", "AS", "CASE", "DATATYPE",
  "DO", "ELSE", "END", "EQTYPE", "EXCEPTION", "FN", "FUN", "FUNCTOR",
  "HANDLE", "IF", "IN", "INCLUDE", "INFIX", "INFIXR", "LET", "LOCAL",
  "NONFIX", "OF", "OP", "OPEN", "ORELSE", "RAISE", "REC", "SHARING", "SIG",
  "SIGNATURE", "STRUCT", "STRUCTURE", "THEN", "TYPE", "VAL", "WHERE",
  "WHILE", "WITH", "WITHTYPE", "SHORTALPHANUMID", "SHORTSYMID", "TYVARID",
  "LONGALPHANUMID", "LONGSYMID", "REAL", "WORD", "INT", "STRING", "CHAR",
  "$accept", "input", "fixity", "digit", "decs", "dec", "decnolocal",
  "funs", "clauses_top", "clauses", "clause", "tyvarseq", "tyvar_pc",
  "opcon", "ebs", "eb", "ebrhs", "numericField", "match", "constraint",
  "rules", "rule", "elabel", "elabels", "exp_ps", "exp", "app_exp", "aexp",
  "exp_2c", "exp_list", "pat", "cpat", "apats", "apat", "pats", "barcpats",
  "commapats", "patitems", "patitem", "ty", "ty1", "tlabel", "tlabels",
  "tuple_ty", "ty0_pc", "optbar", "optsemicolon", "const",
  "shortAlphanumId", "shortSymId", "longAlphanumId", "longSymId",
  "vidNoEqual", "vid", "longvidNoEqual", "longvid", "con", "longcon",
  "tyvar", "tycon", "longtycon", "idField", "field", "longstrid", "vids",
  "longstrids", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-162)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     470,   172,   263,   332,  -143,  -143,   401,   170,   470,   505,
     470,   566,   208,   470,   470,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,    44,   207,  -143,   489,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,   489,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,    38,    79,  -143,    91,   343,   119,
    -143,   106,  -143,   120,   118,   142,   132,   408,  -143,  -143,
     573,     7,   566,   470,   298,    28,    78,    78,   566,  -143,
     113,    73,   125,   566,  -143,  -143,   336,   267,  -143,    55,
    -143,   470,   505,   470,  -143,  -143,  -143,   470,  -143,  -143,
     470,   470,  -143,  -143,  -143,   172,  -143,    55,  -143,   470,
     505,   573,   573,   573,  -143,   140,   208,  -143,   149,   156,
      23,  -143,   573,  -143,  -143,   470,  -143,   336,  -143,    73,
      11,  -143,   151,  -143,  -143,  -143,   130,  -143,  -143,   155,
     163,   573,  -143,  -143,  -143,  -143,   161,  -143,  -143,   113,
    -143,    73,  -143,   470,  -143,   470,    55,   229,   193,   122,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,   194,  -143,    53,
    -143,   400,  -143,  -143,   292,  -143,   193,   336,  -143,   197,
     191,   204,   195,  -143,  -143,   192,   214,   211,  -143,   573,
     470,    55,   573,   573,  -143,   361,  -143,   255,    55,  -143,
     298,   230,   233,   163,  -143,  -143,   224,   237,   566,  -143,
    -143,   226,   336,   368,   251,  -143,   268,   241,   247,    55,
      55,  -143,   573,  -143,  -143,  -143,  -143,  -143,    42,   573,
    -143,   336,   193,    26,  -143,   117,   470,   208,  -143,  -143,
     193,  -143,  -143,   130,  -143,   573,   262,   252,  -143,  -143,
      55,   134,   172,  -143,    55,   193,   122,  -143,   197,  -143,
    -143,   573,   336,  -143,  -143,  -143,   470,  -143,    31,  -143,
    -143,  -143,   193,  -143,  -143,   336
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,   143,   150,     0,     0,     0,    41,
       0,    10,     0,     0,     0,   137,   138,   139,   140,   132,
     133,   134,   135,   136,     0,   130,    58,    64,    69,   141,
     142,   147,   148,   146,   149,    66,   160,    40,   162,   158,
     159,   161,    70,    72,    83,     0,    75,     0,   130,     0,
      79,     0,    74,    51,     0,    42,     0,     0,   129,    59,
       0,     0,    10,     0,     0,   128,     4,     6,    10,     8,
       0,     0,     0,    10,    13,    68,    63,     0,     1,     0,
     131,     0,    41,     0,     3,    65,    67,     0,    71,    76,
       0,   131,    52,    77,    78,     0,    73,     0,    49,     0,
      41,   101,   101,   101,    95,     0,     0,    44,    45,     0,
      86,    89,    90,    94,    92,     0,    12,    15,   145,     0,
      36,    18,    33,   144,   151,    31,     0,   153,    16,    21,
     128,     0,    27,     9,     5,     7,     0,   163,   164,   167,
      19,   165,    20,     0,    11,     0,     0,     0,    57,   113,
     111,   154,   155,   157,   114,   156,   120,    56,    54,    55,
      84,    82,    81,    53,   130,    50,    43,    48,    60,   105,
       0,     0,     0,   109,    99,     0,   108,     0,    93,     0,
       0,     0,     0,     0,    91,     0,    32,     0,     0,    35,
       0,     0,    29,   128,    17,    23,    24,    42,    10,   168,
     166,     0,    61,     0,     0,   116,   123,     0,     0,     0,
       0,   119,     0,   102,    98,    96,    97,   100,     0,     0,
      46,    47,    88,   103,    85,    87,     0,     0,   152,    38,
      37,    34,    28,     0,    22,     0,     0,     0,    80,   118,
       0,     0,     0,   115,     0,   112,   125,   124,   105,   107,
     110,     0,    62,    39,    30,    25,     0,    14,   126,   127,
     117,   122,   121,   106,   104,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,   218,   -41,  -143,  -143,   -99,  -143,    51,
    -143,  -143,    60,  -143,   107,  -143,  -143,  -143,   -47,    99,
     127,  -143,  -143,   206,   -84,     0,    45,  -143,   219,    16,
     -49,  -142,  -103,  -143,   -34,    59,    65,    98,  -143,   -80,
     109,  -143,    81,   114,   100,   -60,   317,   -45,     5,    19,
      43,  -143,   -48,   -52,   -24,   -11,   225,   126,   -61,  -143,
    -120,    17,     1,  -143,   217,   210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    71,   134,    72,    73,    74,   128,   129,   195,
     196,   130,   191,   120,   121,   122,   189,    38,    59,    98,
     107,   108,    53,    54,    47,    44,    26,    27,    49,    45,
     169,   110,   111,   112,   170,   224,   213,   175,   176,   148,
     149,   206,   207,   150,   204,    60,    92,    28,    29,    30,
      31,    32,    33,   124,    34,    35,   125,   229,   154,   155,
     156,    41,    56,   139,   142,   140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    75,    42,    48,   132,   131,    39,   163,    57,   184,
      61,   109,    39,    76,    77,   113,   123,   166,    79,   141,
      40,   116,    51,   123,    55,   187,    40,   136,   197,   211,
      81,   194,   144,   126,   181,   158,   114,   181,   240,   209,
     223,   225,    82,   182,    78,    87,   251,   183,    58,    79,
     183,    36,   173,   168,    83,   188,   113,   113,   113,   201,
     146,    81,   115,   117,    79,   192,   203,   113,   171,   172,
     131,   123,    85,    82,   147,   137,    81,   114,   114,   114,
      86,   157,     4,   159,   151,    83,   113,   118,   114,   141,
     161,   164,   127,   123,   234,   178,    88,    89,   152,   167,
      39,   222,   151,   160,    15,    16,   177,   114,   230,   223,
      39,    37,    55,   138,    40,   185,   152,    15,    16,   127,
      17,   260,   153,    94,    40,    93,   211,    95,   181,   245,
     109,   210,   197,   131,   113,    15,    16,   113,   113,    96,
     153,   183,   123,   164,   137,   202,    99,   133,   208,    36,
     173,   151,    39,    97,   151,   114,  -161,   237,   114,   114,
     258,   174,   143,   248,   262,   152,    40,   113,   152,   179,
     250,   180,   192,   190,   113,    15,   228,   193,    17,    36,
     221,    36,   138,    58,    15,    16,   151,    17,   114,   153,
     113,    52,   153,   151,   127,   114,    15,    16,   198,    17,
     152,   209,    15,    16,   212,    79,   113,   152,   214,    37,
     215,   114,   216,   217,   151,   151,   228,     4,    79,   177,
      80,   218,     5,    39,   153,   219,   252,   114,   152,   152,
      81,   153,    15,    16,    15,    16,   232,    40,    36,    37,
     233,    37,    82,   208,   235,   151,   151,    39,    97,   151,
     205,   151,   153,   153,    83,   238,   265,   241,   244,   152,
     152,    40,   243,   152,     4,   152,     1,     2,     3,     5,
      15,    16,     4,    17,    18,   242,   256,     5,    79,     6,
      43,   257,     7,   153,   153,   135,   255,   153,     8,   153,
      81,    15,    16,   254,   145,     9,   236,   231,    37,    10,
     227,   165,    82,    79,    11,    91,   220,     4,    12,   162,
     264,    13,   118,   263,    83,    81,   249,    15,    16,   246,
      17,    18,    14,   261,   247,    15,    16,    82,    17,    18,
      19,    20,    21,    22,    23,     1,     2,     3,    46,    83,
     259,     4,    84,   119,   186,     0,     5,    79,     6,   199,
      90,     7,     0,   253,    79,     0,    91,     8,   200,    81,
      15,    16,     0,     0,     9,     0,    81,     0,    10,     0,
       0,    82,    79,    11,   239,   240,   209,    12,    82,     0,
      13,     0,     0,    83,    81,     0,     0,     0,     0,   226,
      83,    14,     0,     0,    15,    16,    82,    17,    18,    19,
      20,    21,    22,    23,     1,     2,     3,    90,    83,     0,
       4,    79,     0,     0,     0,     5,     0,     6,    50,    79,
       7,     0,     0,    81,     0,     0,     8,     0,     0,     0,
       0,    81,     0,     9,     0,    82,     0,    10,     0,     0,
       0,     0,    11,    82,     0,     0,    12,    83,     0,    13,
       0,     0,   100,     0,     0,    83,     0,     0,     0,     0,
      14,     0,     0,    15,    16,     0,    17,    18,    19,    20,
      21,    22,    23,     1,     2,     3,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     0,     6,     0,     0,     7,
       0,     0,     1,     2,     3,     8,     0,     0,     4,     0,
       0,     0,     9,     5,     0,     6,    10,     0,     7,  -128,
    -128,    11,     0,     0,  -128,    12,     0,     0,    13,     0,
       0,  -128,     0,  -128,  -128,    58,     0,     0,     0,    14,
      11,     0,    15,    16,    12,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
    -128,    15,    16,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,  -128,  -128,     0,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,   101,   102,    62,
       0,     0,     4,     0,     0,     0,     0,     0,     0,   103,
       0,   104,   105,    63,     0,     0,     0,    64,     0,    65,
       0,     0,     0,     0,     0,    66,    67,     0,    68,    69,
       0,     0,    70,     0,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,    17,    18,
      19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    12,     1,     3,    65,    65,     1,    91,     8,   112,
      10,    60,     7,    13,    14,    60,    64,    97,    11,    71,
       1,    62,     6,    71,     7,    14,     7,    68,   131,   149,
      23,   130,    73,     5,    11,    82,    60,    11,     7,     8,
     182,   183,    35,    20,     0,     7,    20,    24,    20,    11,
      24,     9,    10,   100,    47,    44,   101,   102,   103,   143,
       5,    23,    55,    63,    11,   126,   146,   112,   102,   103,
     130,   119,    27,    35,    19,    70,    23,   101,   102,   103,
      35,    81,     9,    83,    79,    47,   131,    14,   112,   141,
      90,    91,    64,   141,   193,   106,    17,     6,    79,    99,
      95,   181,    97,    87,    62,    63,   105,   131,   188,   251,
     105,    69,    95,    70,    95,   115,    97,    62,    63,    64,
      65,   241,    79,    17,   105,     6,   246,     7,    11,   209,
     179,     9,   235,   193,   179,    62,    63,   182,   183,    21,
      97,    24,   190,   143,   139,   145,    14,    69,   147,     9,
      10,   146,   147,    11,   149,   179,    14,   198,   182,   183,
     240,    21,    37,   212,   244,   146,   147,   212,   149,    20,
     219,    15,   233,    22,   219,    62,   187,    22,    65,     9,
     180,     9,   139,    20,    62,    63,   181,    65,   212,   146,
     235,    21,   149,   188,    64,   219,    62,    63,    37,    65,
     181,     8,    62,    63,     7,    11,   251,   188,    17,    69,
       6,   235,    17,    21,   209,   210,   227,     9,    11,   218,
      13,     7,    14,   218,   181,    14,   226,   251,   209,   210,
      23,   188,    62,    63,    62,    63,     6,   218,     9,    69,
       7,    69,    35,   242,    20,   240,   241,   242,    11,   244,
      21,   246,   209,   210,    47,    29,   256,     6,    11,   240,
     241,   242,    21,   244,     9,   246,     3,     4,     5,    14,
      62,    63,     9,    65,    66,     7,    14,    14,    11,    16,
      17,    29,    19,   240,   241,    67,   235,   244,    25,   246,
      23,    62,    63,   233,    27,    32,   197,   190,    69,    36,
      45,    95,    35,    11,    41,    13,   179,     9,    45,    90,
     251,    48,    14,   248,    47,    23,   218,    62,    63,   210,
      65,    66,    59,   242,   210,    62,    63,    35,    65,    66,
      67,    68,    69,    70,    71,     3,     4,     5,     6,    47,
     240,     9,    25,    45,   119,    -1,    14,    11,    16,   139,
       7,    19,    -1,   227,    11,    -1,    13,    25,   141,    23,
      62,    63,    -1,    -1,    32,    -1,    23,    -1,    36,    -1,
      -1,    35,    11,    41,     6,     7,     8,    45,    35,    -1,
      48,    -1,    -1,    47,    23,    -1,    -1,    -1,    -1,    28,
      47,    59,    -1,    -1,    62,    63,    35,    65,    66,    67,
      68,    69,    70,    71,     3,     4,     5,     7,    47,    -1,
       9,    11,    -1,    -1,    -1,    14,    -1,    16,    17,    11,
      19,    -1,    -1,    23,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    23,    -1,    32,    -1,    35,    -1,    36,    -1,    -1,
      -1,    -1,    41,    35,    -1,    -1,    45,    47,    -1,    48,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    19,
      -1,    -1,     3,     4,     5,    25,    -1,    -1,     9,    -1,
      -1,    -1,    32,    14,    -1,    16,    36,    -1,    19,     4,
       5,    41,    -1,    -1,     9,    45,    -1,    -1,    48,    -1,
      -1,    16,    -1,    18,    19,    20,    -1,    -1,    -1,    59,
      41,    -1,    62,    63,    45,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,     4,     5,    13,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    18,    19,    27,    -1,    -1,    -1,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    14,    16,    19,    25,    32,
      36,    41,    45,    48,    59,    62,    63,    65,    66,    67,
      68,    69,    70,    71,    73,    97,    98,    99,   119,   120,
     121,   122,   123,   124,   126,   127,     9,    69,    89,   120,
     121,   133,   134,    17,    97,   101,     6,    96,    97,   100,
      17,   101,    21,    94,    95,   133,   134,    97,    20,    90,
     117,    97,    13,    27,    31,    33,    39,    40,    42,    43,
      46,    74,    76,    77,    78,   127,    97,    97,     0,    11,
      13,    23,    35,    47,   118,    98,    98,     7,    17,     6,
       7,    13,   118,     6,    17,     7,    21,    11,    91,    14,
      44,     4,     5,    16,    18,    19,    45,    92,    93,   102,
     103,   104,   105,   119,   126,    55,    76,    97,    14,    45,
      85,    86,    87,   124,   125,   128,     5,    64,    79,    80,
      83,   117,   130,    69,    75,    75,    76,   120,   122,   135,
     137,   125,   136,    37,    76,    27,     5,    19,   111,   112,
     115,   120,   121,   122,   130,   131,   132,    97,    90,    97,
     101,    97,   100,    96,    97,    95,   111,    97,    90,   102,
     106,   106,   106,    10,    21,   109,   110,   134,   127,    20,
      15,    11,    20,    24,   104,    97,   128,    14,    44,    88,
      22,    84,   130,    22,    79,    81,    82,   104,    37,   137,
     136,    96,    97,   111,   116,    21,   113,   114,   134,     8,
       9,   132,     7,   108,    17,     6,    17,    21,     7,    14,
      92,    97,   111,   103,   107,   103,    28,    45,   127,   129,
     111,    86,     6,     7,    79,    20,    91,    76,    29,     6,
       7,     6,     7,    21,    11,   111,   112,   115,   102,   109,
     102,    20,    97,   129,    84,    81,    14,    29,   111,   116,
     132,   114,   111,   108,   107,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    74,    75,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    88,    88,    88,    88,
      89,    90,    91,    91,    90,    92,    92,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     110,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   120,   121,   122,
     123,   124,   124,   124,   125,   125,   126,   126,   126,   127,
     127,   128,   129,   130,   131,   131,   132,   132,   133,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     2,     1,     1,
       0,     2,     2,     1,     5,     2,     2,     3,     2,     2,
       2,     1,     3,     2,     1,     3,     4,     1,     3,     1,
       3,     1,     2,     1,     3,     2,     0,     2,     2,     3,
       1,     0,     0,     2,     2,     1,     3,     3,     3,     2,
       3,     1,     2,     3,     3,     3,     3,     3,     1,     2,
       4,     4,     6,     2,     1,     2,     1,     2,     2,     1,
       2,     3,     2,     3,     2,     2,     3,     3,     3,     2,
       5,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       1,     2,     1,     2,     1,     1,     3,     3,     3,     2,
       3,     0,     2,     1,     3,     0,     3,     3,     1,     1,
       3,     1,     3,     1,     1,     3,     2,     4,     3,     2,
       1,     3,     3,     1,     3,     3,     3,     3,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = T_TLUA_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == T_TLUA_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, lexstate, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use T_TLUA_YYerror or T_TLUA_YYUNDEF. */
#define YYERRCODE T_TLUA_YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if TLUA_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined TLUA_YYLTYPE_IS_TRIVIAL && TLUA_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, lexstate); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, tlua_lexstate *lexstate)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (lexstate);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, tlua_lexstate *lexstate)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, lexstate);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, void *scanner, tlua_lexstate *lexstate)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, lexstate);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, lexstate); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !TLUA_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !TLUA_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner, tlua_lexstate *lexstate)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (lexstate);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *scanner, tlua_lexstate *lexstate)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined TLUA_YYLTYPE_IS_TRIVIAL && TLUA_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = T_TLUA_YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == T_TLUA_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == T_TLUA_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = T_TLUA_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = T_TLUA_YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* input: exp optsemicolon  */
#line 155 "src/parser.y"
                        { tlua_print_exp((yyvsp[-1].exp), stdout); puts(""); }
#line 1795 "_build/parser.c"
    break;

  case 4: /* fixity: INFIX  */
#line 159 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIX;  (yyval.fixity).precedence = -1; }
#line 1801 "_build/parser.c"
    break;

  case 5: /* fixity: INFIX digit  */
#line 160 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIX;  (yyval.fixity).precedence = (yyvsp[0].digit); }
#line 1807 "_build/parser.c"
    break;

  case 6: /* fixity: INFIXR  */
#line 161 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIXR; (yyval.fixity).precedence = -1; }
#line 1813 "_build/parser.c"
    break;

  case 7: /* fixity: INFIXR digit  */
#line 162 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIXR; (yyval.fixity).precedence = (yyvsp[0].digit); }
#line 1819 "_build/parser.c"
    break;

  case 8: /* fixity: NONFIX  */
#line 163 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_NONFIX; (yyval.fixity).precedence = -1; }
#line 1825 "_build/parser.c"
    break;

  case 9: /* digit: INT  */
#line 165 "src/parser.y"
            {
        (yyval.digit) = (yyvsp[0].integer).val;
        if (!(yyvsp[0].integer).isdigit)
            fprintf(stderr, "Not a digit!\n");
      }
#line 1835 "_build/parser.c"
    break;

  case 10: /* decs: %empty  */
#line 171 "src/parser.y"
              { (yyval.dec_list) = NULL; }
#line 1841 "_build/parser.c"
    break;

  case 11: /* decs: dec decs  */
#line 172 "src/parser.y"
                { list_cons((yyval.dec_list), (yyvsp[-1].dec), (yyvsp[0].dec_list)); }
#line 1847 "_build/parser.c"
    break;

  case 12: /* decs: SEMICOLON decs  */
#line 173 "src/parser.y"
                      { (yyval.dec_list) = (yyvsp[0].dec_list); }
#line 1853 "_build/parser.c"
    break;

  case 13: /* dec: decnolocal  */
#line 175 "src/parser.y"
                 { (yyval.dec) = (yyvsp[0].dec); }
#line 1859 "_build/parser.c"
    break;

  case 14: /* dec: LOCAL decs IN decs END  */
#line 176 "src/parser.y"
                             { tlua_dec((yyval.dec), LOCAL, (yyloc)); (yyval.dec)->val.local.d1 = (yyvsp[-3].dec_list); (yyval.dec)->val.local.d2 = (yyvsp[-1].dec_list); }
#line 1865 "_build/parser.c"
    break;

  case 15: /* decnolocal: DO exp  */
#line 180 "src/parser.y"
                    { tlua_dec((yyval.dec), DO, (yyloc)); (yyval.dec)->val.do_ = (yyvsp[0].exp); }
#line 1871 "_build/parser.c"
    break;

  case 16: /* decnolocal: FUN funs  */
#line 181 "src/parser.y"
                      { tlua_dec((yyval.dec), FUN, (yyloc)); (yyval.dec)->val.fun.tyvars = NULL; (yyval.dec)->val.fun.fbs = (yyvsp[0].funbinds_list); }
#line 1877 "_build/parser.c"
    break;

  case 17: /* decnolocal: FUN tyvarseq funs  */
#line 182 "src/parser.y"
                               { tlua_dec((yyval.dec), FUN, (yyloc)); (yyval.dec)->val.fun.tyvars = (yyvsp[-1].var_list); (yyval.dec)->val.fun.fbs = (yyvsp[0].funbinds_list); }
#line 1883 "_build/parser.c"
    break;

  case 18: /* decnolocal: EXCEPTION ebs  */
#line 183 "src/parser.y"
                           { tlua_dec((yyval.dec), EXCEPTION, (yyloc)); (yyval.dec)->val.exception = (yyvsp[0].eb_list); }
#line 1889 "_build/parser.c"
    break;

  case 19: /* decnolocal: OPEN longstrids  */
#line 184 "src/parser.y"
                             { tlua_dec((yyval.dec), OPEN, (yyloc)); (yyval.dec)->val.open = (yyvsp[0].var_list); }
#line 1895 "_build/parser.c"
    break;

  case 20: /* decnolocal: fixity vids  */
#line 185 "src/parser.y"
                         { tlua_dec((yyval.dec), FIX, (yyloc)); (yyval.dec)->val.fixity.fixity = (yyvsp[-1].fixity); (yyval.dec)->val.fixity.ops = (yyvsp[0].var_list); }
#line 1901 "_build/parser.c"
    break;

  case 21: /* funs: clauses_top  */
#line 187 "src/parser.y"
                   { list_cons((yyval.funbinds_list), (yyvsp[0].funbind_list), NULL); }
#line 1907 "_build/parser.c"
    break;

  case 22: /* funs: clauses_top AND funs  */
#line 188 "src/parser.y"
                            { list_cons((yyval.funbinds_list), (yyvsp[-2].funbind_list), (yyvsp[0].funbinds_list)); }
#line 1913 "_build/parser.c"
    break;

  case 23: /* clauses_top: optbar clauses  */
#line 190 "src/parser.y"
                             { (yyval.funbind_list) = (yyvsp[0].funbind_list); }
#line 1919 "_build/parser.c"
    break;

  case 24: /* clauses: clause  */
#line 192 "src/parser.y"
                 { list_cons((yyval.funbind_list), (yyvsp[0].funbind), NULL); }
#line 1925 "_build/parser.c"
    break;

  case 25: /* clauses: clause BAR clauses  */
#line 193 "src/parser.y"
                             { list_cons((yyval.funbind_list), (yyvsp[-2].funbind), NULL); }
#line 1931 "_build/parser.c"
    break;

  case 26: /* clause: apats constraint EQUALOP exp  */
#line 195 "src/parser.y"
                                      { tlua_funbind((yyval.funbind)); (yyval.funbind)->pats = (yyvsp[-3].pat_list); (yyval.funbind)->result_type = (yyvsp[-2].type); (yyval.funbind)->body = (yyvsp[0].exp); }
#line 1937 "_build/parser.c"
    break;

  case 27: /* tyvarseq: tyvar  */
#line 205 "src/parser.y"
                 { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 1943 "_build/parser.c"
    break;

  case 28: /* tyvarseq: LPAREN tyvar_pc RPAREN  */
#line 206 "src/parser.y"
                                  { (yyval.var_list) = (yyvsp[-1].var_list); }
#line 1949 "_build/parser.c"
    break;

  case 29: /* tyvar_pc: tyvar  */
#line 208 "src/parser.y"
                 { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 1955 "_build/parser.c"
    break;

  case 30: /* tyvar_pc: tyvar COMMA tyvar_pc  */
#line 209 "src/parser.y"
                                { list_cons((yyval.var_list), (yyvsp[-2].var), (yyvsp[0].var_list)); }
#line 1961 "_build/parser.c"
    break;

  case 31: /* opcon: con  */
#line 217 "src/parser.y"
            { (yyval.var) = (yyvsp[0].var); }
#line 1967 "_build/parser.c"
    break;

  case 32: /* opcon: OP con  */
#line 218 "src/parser.y"
               { (yyval.var) = (yyvsp[0].var); }
#line 1973 "_build/parser.c"
    break;

  case 33: /* ebs: eb  */
#line 220 "src/parser.y"
         { list_cons((yyval.eb_list), (yyvsp[0].eb), NULL); }
#line 1979 "_build/parser.c"
    break;

  case 34: /* ebs: eb AND ebs  */
#line 221 "src/parser.y"
                 { list_cons((yyval.eb_list), (yyvsp[-2].eb), (yyvsp[0].eb_list)); }
#line 1985 "_build/parser.c"
    break;

  case 35: /* eb: opcon ebrhs  */
#line 223 "src/parser.y"
                 { (yyval.eb) = (yyvsp[0].eb); (yyval.eb)->con = (yyvsp[-1].var); }
#line 1991 "_build/parser.c"
    break;

  case 36: /* ebrhs: %empty  */
#line 225 "src/parser.y"
               { tlua_eb((yyval.eb), GEN); (yyval.eb)->val.gen = NULL; }
#line 1997 "_build/parser.c"
    break;

  case 37: /* ebrhs: OF ty  */
#line 226 "src/parser.y"
              { tlua_eb((yyval.eb), GEN); (yyval.eb)->val.gen = (yyvsp[0].type); }
#line 2003 "_build/parser.c"
    break;

  case 38: /* ebrhs: EQUALOP longcon  */
#line 227 "src/parser.y"
                        { tlua_eb((yyval.eb), DEF); (yyval.eb)->val.def = (yyvsp[0].var); }
#line 2009 "_build/parser.c"
    break;

  case 39: /* ebrhs: EQUALOP OP longcon  */
#line 228 "src/parser.y"
                           { tlua_eb((yyval.eb), DEF); (yyval.eb)->val.def = (yyvsp[0].var); }
#line 2015 "_build/parser.c"
    break;

  case 40: /* numericField: INT  */
#line 230 "src/parser.y"
                   {
    tlua_field((yyval.field), NUM);
    if (!(yyvsp[0].integer).isfield)
        fprintf(stderr, "Invalid numeric label\n");
    (yyval.field)->val.num = (unsigned)(yyvsp[0].integer).val;
}
#line 2026 "_build/parser.c"
    break;

  case 41: /* match: %empty  */
#line 237 "src/parser.y"
               { (yyval.match) = NULL; }
#line 2032 "_build/parser.c"
    break;

  case 42: /* constraint: %empty  */
#line 239 "src/parser.y"
                    { (yyval.type) = NULL; }
#line 2038 "_build/parser.c"
    break;

  case 43: /* constraint: COLON ty  */
#line 240 "src/parser.y"
                      { (yyval.type) = (yyvsp[0].type); }
#line 2044 "_build/parser.c"
    break;

  case 44: /* match: optbar rules  */
#line 247 "src/parser.y"
                     { tlua_match((yyval.match), (yyloc)); (yyval.match)->rules = (yyvsp[0].rule_list); }
#line 2050 "_build/parser.c"
    break;

  case 45: /* rules: rule  */
#line 249 "src/parser.y"
             { list_cons((yyval.rule_list), (yyvsp[0].rule), NULL); }
#line 2056 "_build/parser.c"
    break;

  case 46: /* rules: rule BAR rules  */
#line 250 "src/parser.y"
                       { list_cons((yyval.rule_list), (yyvsp[-2].rule), (yyvsp[0].rule_list)); }
#line 2062 "_build/parser.c"
    break;

  case 47: /* rule: pat DARROW exp  */
#line 252 "src/parser.y"
                      { tlua_rule((yyval.rule)); (yyval.rule)->pat = (yyvsp[-2].pat); (yyval.rule)->exp = (yyvsp[0].exp); }
#line 2068 "_build/parser.c"
    break;

  case 48: /* elabel: field EQUALOP exp  */
#line 254 "src/parser.y"
                           { tlua_record_item((yyval.record_item), (yyloc)); (yyval.record_item)->field = (yyvsp[-2].field); (yyval.record_item)->val = (yyvsp[0].exp); }
#line 2074 "_build/parser.c"
    break;

  case 49: /* elabel: idField constraint  */
#line 255 "src/parser.y"
                            {
           tlua_exp *e, *fa;
           tlua_var *v;
           tlua_var(v, (yylsp[-1]));
           v->name = (yyvsp[-1].field)->val.ident;
           tlua_exp(e, VAR, (yylsp[-1]));
           e->val.var = v;
           tlua_exp(fa, FLATAPP, (yylsp[-1]));
           list_cons(fa->val.flatapp, e, NULL);
           tlua_record_item((yyval.record_item), (yyloc));
           (yyval.record_item)->field = (yyvsp[-1].field);
           (yyval.record_item)->val = fa;
       }
#line 2092 "_build/parser.c"
    break;

  case 50: /* elabels: elabel COMMA elabels  */
#line 269 "src/parser.y"
                               { list_cons((yyval.record), (yyvsp[-2].record_item), (yyvsp[0].record)); }
#line 2098 "_build/parser.c"
    break;

  case 51: /* elabels: elabel  */
#line 270 "src/parser.y"
                 { list_cons((yyval.record), (yyvsp[0].record_item), NULL); }
#line 2104 "_build/parser.c"
    break;

  case 52: /* exp_ps: exp optsemicolon  */
#line 272 "src/parser.y"
                          { list_cons((yyval.exp_list), (yyvsp[-1].exp), NULL); }
#line 2110 "_build/parser.c"
    break;

  case 53: /* exp_ps: exp SEMICOLON exp_ps  */
#line 273 "src/parser.y"
                              { list_cons((yyval.exp_list), (yyvsp[-2].exp), (yyvsp[0].exp_list)); }
#line 2116 "_build/parser.c"
    break;

  case 54: /* exp: exp HANDLE match  */
#line 275 "src/parser.y"
                       { tlua_exp((yyval.exp), HANDLE, (yyloc)); (yyval.exp)->val.handle.exp = (yyvsp[-2].exp); (yyval.exp)->val.handle.match = (yyvsp[0].match); }
#line 2122 "_build/parser.c"
    break;

  case 55: /* exp: exp ORELSE exp  */
#line 276 "src/parser.y"
                     { tlua_exp((yyval.exp), ORELSE, (yyloc)); (yyval.exp)->val.orelse.left = (yyvsp[-2].exp); (yyval.exp)->val.orelse.right = (yyvsp[0].exp); }
#line 2128 "_build/parser.c"
    break;

  case 56: /* exp: exp ANDALSO exp  */
#line 277 "src/parser.y"
                      { tlua_exp((yyval.exp), ANDALSO, (yyloc)); (yyval.exp)->val.andalso.left = (yyvsp[-2].exp); (yyval.exp)->val.andalso.right = (yyvsp[0].exp); }
#line 2134 "_build/parser.c"
    break;

  case 57: /* exp: exp COLON ty  */
#line 278 "src/parser.y"
                   { tlua_exp((yyval.exp), CONSTRAINT, (yyloc)); (yyval.exp)->val.constraint.exp = (yyvsp[-2].exp); (yyval.exp)->val.constraint.type = (yyvsp[0].type); }
#line 2140 "_build/parser.c"
    break;

  case 58: /* exp: app_exp  */
#line 279 "src/parser.y"
              { tlua_exp((yyval.exp), FLATAPP, (yyloc)); (yyval.exp)->val.flatapp = (yyvsp[0].exp_list); }
#line 2146 "_build/parser.c"
    break;

  case 59: /* exp: FN match  */
#line 280 "src/parser.y"
               { tlua_exp((yyval.exp), FN, (yyloc)); (yyval.exp)->val.fn = (yyvsp[0].match); }
#line 2152 "_build/parser.c"
    break;

  case 60: /* exp: CASE exp OF match  */
#line 281 "src/parser.y"
                        { tlua_exp((yyval.exp), CASE, (yyloc)); (yyval.exp)->val.case_.exp = (yyvsp[-2].exp); (yyval.exp)->val.case_.match = (yyvsp[0].match); }
#line 2158 "_build/parser.c"
    break;

  case 61: /* exp: WHILE exp DO exp  */
#line 282 "src/parser.y"
                       { tlua_exp((yyval.exp), WHILE, (yyloc)); (yyval.exp)->val.while_.cond = (yyvsp[-2].exp); (yyval.exp)->val.while_.body = (yyvsp[0].exp); }
#line 2164 "_build/parser.c"
    break;

  case 62: /* exp: IF exp THEN exp ELSE exp  */
#line 283 "src/parser.y"
                               { tlua_exp((yyval.exp), IF, (yyloc)); (yyval.exp)->val.if_.cond = (yyvsp[-4].exp); (yyval.exp)->val.if_.true_ = (yyvsp[-2].exp); (yyval.exp)->val.if_.false_ = (yyvsp[0].exp); }
#line 2170 "_build/parser.c"
    break;

  case 63: /* exp: RAISE exp  */
#line 284 "src/parser.y"
                { tlua_exp((yyval.exp), RAISE, (yyloc)); (yyval.exp)->val.raise = (yyvsp[0].exp); }
#line 2176 "_build/parser.c"
    break;

  case 64: /* app_exp: aexp  */
#line 286 "src/parser.y"
               { list_cons((yyval.exp_list), (yyvsp[0].exp), NULL); }
#line 2182 "_build/parser.c"
    break;

  case 65: /* app_exp: aexp app_exp  */
#line 287 "src/parser.y"
                       { list_cons((yyval.exp_list), (yyvsp[-1].exp), (yyvsp[0].exp_list)); }
#line 2188 "_build/parser.c"
    break;

  case 66: /* app_exp: longvid  */
#line 288 "src/parser.y"
                  { 
            tlua_exp *e;
            tlua_exp(e, VAR, (yyloc));
            e->val.var = (yyvsp[0].var);
            list_cons((yyval.exp_list), e, NULL);
        }
#line 2199 "_build/parser.c"
    break;

  case 67: /* app_exp: longvid app_exp  */
#line 294 "src/parser.y"
                          {
            tlua_exp *e;
            tlua_exp(e, VAR, (yyloc));
            e->val.var = (yyvsp[-1].var);
            list_cons((yyval.exp_list), e, (yyvsp[0].exp_list));
        }
#line 2210 "_build/parser.c"
    break;

  case 68: /* aexp: OP longvid  */
#line 301 "src/parser.y"
                  { tlua_exp((yyval.exp), VAR, (yyloc)); (yyval.exp)->val.var = (yyvsp[0].var); }
#line 2216 "_build/parser.c"
    break;

  case 69: /* aexp: const  */
#line 302 "src/parser.y"
             { tlua_exp((yyval.exp), CONST, (yyloc)); (yyval.exp)->val.const_ = (yyvsp[0].const_); }
#line 2222 "_build/parser.c"
    break;

  case 70: /* aexp: HASH field  */
#line 303 "src/parser.y"
                  { tlua_exp((yyval.exp), SELECTOR, (yyloc)); (yyval.exp)->val.sel = (yyvsp[0].field); }
#line 2228 "_build/parser.c"
    break;

  case 71: /* aexp: HASHLBRACKET exp_list RBRACKET  */
#line 304 "src/parser.y"
                                      { tlua_exp((yyval.exp), VECTOR, (yyloc)); (yyval.exp)->val.vector = (yyvsp[-1].exp_list); }
#line 2234 "_build/parser.c"
    break;

  case 72: /* aexp: HASHLBRACKET RBRACKET  */
#line 305 "src/parser.y"
                             { tlua_exp((yyval.exp), VECTOR, (yyloc)); (yyval.exp)->val.vector = NULL; }
#line 2240 "_build/parser.c"
    break;

  case 73: /* aexp: LBRACE elabels RBRACE  */
#line 306 "src/parser.y"
                             { tlua_exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = (yyvsp[-1].record); }
#line 2246 "_build/parser.c"
    break;

  case 74: /* aexp: LBRACE RBRACE  */
#line 307 "src/parser.y"
                     { tlua_exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = NULL; }
#line 2252 "_build/parser.c"
    break;

  case 75: /* aexp: LPAREN RPAREN  */
#line 308 "src/parser.y"
                     { tlua_exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = NULL; }
#line 2258 "_build/parser.c"
    break;

  case 76: /* aexp: LPAREN exp_ps RPAREN  */
#line 309 "src/parser.y"
                            {
        if ((yyvsp[-1].exp_list) && !(yyvsp[-1].exp_list)->cdr) {
            (yyval.exp) = (yyvsp[-1].exp_list)->car;
            (yyval.exp)->loc = (yyloc);
        } else {
            tlua_exp((yyval.exp), SEQ, (yyloc));
            (yyval.exp)->val.seq = (yyvsp[-1].exp_list);
        }
     }
#line 2272 "_build/parser.c"
    break;

  case 77: /* aexp: LPAREN exp_2c RPAREN  */
#line 318 "src/parser.y"
                            {
        if (!(yyvsp[-1].exp_list)->cdr) {
            (yyval.exp) = (yyvsp[-1].exp_list)->car;
            (yyval.exp)->loc = (yyloc);
        } else {
            tlua_exp *e;
            list(exp) *it;
            int n = 1;
            list(record_item) *r, *tmp;
            tlua_record_item *item;

            tlua_exp((yyval.exp), RECORD, (yyloc));
            r = (yyval.exp)->val.record = NULL;
            list_foreach(e, it, (yyvsp[-1].exp_list)) {
                tlua_record_item(item, e->loc);
                tlua_field(item->field, NUM); item->field->val.num = n;
                item->val = e;

                list_cons(tmp, item, NULL);
                if (r) r->cdr = tmp; else (yyval.exp)->val.record = tmp;
                r = tmp;
                n++;
            }
        }
     }
#line 2302 "_build/parser.c"
    break;

  case 78: /* aexp: LBRACKET exp_list RBRACKET  */
#line 343 "src/parser.y"
                                  { tlua_exp((yyval.exp), LIST, (yyloc)); (yyval.exp)->val.list = (yyvsp[-1].exp_list); }
#line 2308 "_build/parser.c"
    break;

  case 79: /* aexp: LBRACKET RBRACKET  */
#line 344 "src/parser.y"
                         { tlua_exp((yyval.exp), LIST, (yyloc)); (yyval.exp)->val.list = NULL; }
#line 2314 "_build/parser.c"
    break;

  case 80: /* aexp: LET decs IN exp_ps END  */
#line 345 "src/parser.y"
                              {
        tlua_exp((yyval.exp), LET, (yyloc));
        (yyval.exp)->val.let.decs = (yyvsp[-3].dec_list);
        if (!(yyvsp[-1].exp_list)->cdr)
            (yyval.exp)->val.let.body = (yyvsp[-1].exp_list)->car;
        else {
            tlua_exp((yyval.exp)->val.let.body, SEQ, (yylsp[-1]));
            (yyval.exp)->val.let.body->val.seq = (yyvsp[-1].exp_list);
        }
            
     }
#line 2330 "_build/parser.c"
    break;

  case 81: /* exp_2c: exp COMMA exp_2c  */
#line 357 "src/parser.y"
                          { list_cons((yyval.exp_list), (yyvsp[-2].exp), (yyvsp[0].exp_list)); }
#line 2336 "_build/parser.c"
    break;

  case 82: /* exp_2c: exp COMMA exp  */
#line 358 "src/parser.y"
                       {
           list(exp) *l;
           list_cons(l, (yyvsp[0].exp), NULL);
           list_cons((yyval.exp_list), (yyvsp[-2].exp), l);
       }
#line 2346 "_build/parser.c"
    break;

  case 83: /* exp_list: exp  */
#line 364 "src/parser.y"
               { list_cons((yyval.exp_list), (yyvsp[0].exp), NULL); }
#line 2352 "_build/parser.c"
    break;

  case 84: /* exp_list: exp COMMA exp_list  */
#line 365 "src/parser.y"
                              { list_cons((yyval.exp_list), (yyvsp[-2].exp), (yyvsp[0].exp_list)); }
#line 2358 "_build/parser.c"
    break;

  case 85: /* pat: cpat BAR barcpats  */
#line 369 "src/parser.y"
                        { tlua_pat((yyval.pat), OR, (yyloc)); list_cons((yyval.pat)->val.or_, (yyvsp[-2].pat), (yyvsp[0].pat_list)); }
#line 2364 "_build/parser.c"
    break;

  case 86: /* pat: cpat  */
#line 370 "src/parser.y"
                        { (yyval.pat) = (yyvsp[0].pat); }
#line 2370 "_build/parser.c"
    break;

  case 87: /* cpat: cpat AS cpat  */
#line 372 "src/parser.y"
                    { (yyval.pat) = NULL; }
#line 2376 "_build/parser.c"
    break;

  case 88: /* cpat: cpat COLON ty  */
#line 373 "src/parser.y"
                     { tlua_pat((yyval.pat), CONSTRAINT, (yyloc)); (yyval.pat)->val.constraint.pat = (yyvsp[-2].pat); (yyval.pat)->val.constraint.type = (yyvsp[0].type); }
#line 2382 "_build/parser.c"
    break;

  case 89: /* cpat: apats  */
#line 374 "src/parser.y"
             { tlua_pat((yyval.pat), FLATAPP, (yyloc)); (yyval.pat)->val.flatapp = (yyvsp[0].pat_list); }
#line 2388 "_build/parser.c"
    break;

  case 90: /* apats: apat  */
#line 376 "src/parser.y"
                   { list_cons((yyval.pat_list), (yyvsp[0].pat), NULL); }
#line 2394 "_build/parser.c"
    break;

  case 91: /* apats: apat apats  */
#line 377 "src/parser.y"
                   { list_cons((yyval.pat_list), (yyvsp[-1].pat), (yyvsp[0].pat_list)); }
#line 2400 "_build/parser.c"
    break;

  case 92: /* apat: longvidNoEqual  */
#line 379 "src/parser.y"
                      {
         tlua_pat((yyval.pat), VAR, (yyloc));
         (yyval.pat)->val.var.name = (yyvsp[0].var);
         (yyval.pat)->val.var.fixop = FIXOP_NONE;
     }
#line 2410 "_build/parser.c"
    break;

  case 93: /* apat: OP longvid  */
#line 384 "src/parser.y"
                  {
         tlua_pat((yyval.pat), VAR, (yyloc));
         (yyval.pat)->val.var.name = (yyvsp[0].var);
         (yyval.pat)->val.var.fixop = FIXOP_OP;
     }
#line 2420 "_build/parser.c"
    break;

  case 94: /* apat: const  */
#line 389 "src/parser.y"
             {
         if ((yyvsp[0].const_)->tag == CONST_REAL) {
             fprintf(stderr, "Real constants are not allowed in patterns\n");
         }
         tlua_pat((yyval.pat), CONST, (yyloc)); (yyval.pat)->val.const_ = (yyvsp[0].const_);
     }
#line 2431 "_build/parser.c"
    break;

  case 95: /* apat: WILD  */
#line 395 "src/parser.y"
            { tlua_pat((yyval.pat), WILD, (yyloc)); }
#line 2437 "_build/parser.c"
    break;

  case 96: /* apat: LPAREN pats RPAREN  */
#line 396 "src/parser.y"
                          { 
        if ((yyvsp[-1].pat_list) && (yyvsp[-1].pat_list)->cdr) {
            (yyval.pat) = (yyvsp[-1].pat_list)->car;
            (yyval.pat)->loc = (yyloc);
        } else {
            tlua_pat((yyval.pat), TUPLE, (yyloc));
            (yyval.pat)->val.tuple = (yyvsp[-1].pat_list);
        }
     }
#line 2451 "_build/parser.c"
    break;

  case 97: /* apat: LBRACKET pats RBRACKET  */
#line 405 "src/parser.y"
                              { tlua_pat((yyval.pat), LIST, (yyloc)); (yyval.pat)->val.list = (yyvsp[-1].pat_list); }
#line 2457 "_build/parser.c"
    break;

  case 98: /* apat: HASHLBRACKET pats RBRACKET  */
#line 406 "src/parser.y"
                                  { tlua_pat((yyval.pat), VECTOR, (yyloc)); (yyval.pat)->val.vector = (yyvsp[-1].pat_list); }
#line 2463 "_build/parser.c"
    break;

  case 99: /* apat: LBRACE RBRACE  */
#line 407 "src/parser.y"
                     { tlua_pat((yyval.pat), TUPLE, (yyloc)); (yyval.pat)->val.tuple = NULL; }
#line 2469 "_build/parser.c"
    break;

  case 100: /* apat: LBRACE patitems RBRACE  */
#line 408 "src/parser.y"
                              { tlua_pat((yyval.pat), RECORD, (yyloc)); (yyval.pat)->val.record = (yyvsp[-1].pat_record); }
#line 2475 "_build/parser.c"
    break;

  case 101: /* pats: %empty  */
#line 410 "src/parser.y"
              { (yyval.pat_list) = NULL; }
#line 2481 "_build/parser.c"
    break;

  case 102: /* pats: pat commapats  */
#line 411 "src/parser.y"
                     { list_cons((yyval.pat_list), (yyvsp[-1].pat), (yyvsp[0].pat_list)); }
#line 2487 "_build/parser.c"
    break;

  case 103: /* barcpats: cpat  */
#line 413 "src/parser.y"
                { list_cons((yyval.pat_list), (yyvsp[0].pat), NULL); }
#line 2493 "_build/parser.c"
    break;

  case 104: /* barcpats: cpat BAR barcpats  */
#line 414 "src/parser.y"
                             { list_cons((yyval.pat_list), (yyvsp[-2].pat), (yyvsp[0].pat_list)); }
#line 2499 "_build/parser.c"
    break;

  case 105: /* commapats: %empty  */
#line 416 "src/parser.y"
                   { (yyval.pat_list) = NULL; }
#line 2505 "_build/parser.c"
    break;

  case 106: /* commapats: COMMA pat commapats  */
#line 417 "src/parser.y"
                                { list_cons((yyval.pat_list), (yyvsp[-1].pat), (yyvsp[0].pat_list)); }
#line 2511 "_build/parser.c"
    break;

  case 107: /* patitems: patitem COMMA patitems  */
#line 419 "src/parser.y"
                                  {
            list(record_item) *p; list_cons(p, (yyvsp[-2].record_item), (yyvsp[0].pat_record).items); (yyvsp[0].pat_record).items = p;
            (yyval.pat_record) = (yyvsp[0].pat_record);
         }
#line 2520 "_build/parser.c"
    break;

  case 108: /* patitems: patitem  */
#line 423 "src/parser.y"
                   {
            (yyval.pat_record).flexible = 0;
            list_cons((yyval.pat_record).items, (yyvsp[0].record_item), NULL);
         }
#line 2529 "_build/parser.c"
    break;

  case 109: /* patitems: DOTDOTDOT  */
#line 427 "src/parser.y"
                     { 
            (yyval.pat_record).flexible = 1;
            (yyval.pat_record).items = NULL;
         }
#line 2538 "_build/parser.c"
    break;

  case 110: /* patitem: field EQUALOP pat  */
#line 432 "src/parser.y"
                            { tlua_record_item((yyval.record_item), (yyloc)); (yyval.record_item)->field = (yyvsp[-2].field); (yyval.record_item)->val = (yyvsp[0].pat); }
#line 2544 "_build/parser.c"
    break;

  case 132: /* const: REAL  */
#line 481 "src/parser.y"
               { tlua_const((yyval.const_), REAL, (yyloc)); (yyval.const_)->val.real = (yyvsp[0].real); }
#line 2550 "_build/parser.c"
    break;

  case 133: /* const: WORD  */
#line 482 "src/parser.y"
               { tlua_const((yyval.const_), WORD, (yyloc)); (yyval.const_)->val.word = (yyvsp[0].word); }
#line 2556 "_build/parser.c"
    break;

  case 134: /* const: INT  */
#line 483 "src/parser.y"
               { tlua_const((yyval.const_), INT, (yyloc)); (yyval.const_)->val.int_ = (yyvsp[0].integer).val; }
#line 2562 "_build/parser.c"
    break;

  case 135: /* const: STRING  */
#line 484 "src/parser.y"
               { tlua_const((yyval.const_), STRING, (yyloc)); (yyval.const_)->val.string.buf = (yyvsp[0].string).buf; (yyval.const_)->val.string.len = (yyvsp[0].string).len; }
#line 2568 "_build/parser.c"
    break;

  case 136: /* const: CHAR  */
#line 485 "src/parser.y"
               { tlua_const((yyval.const_), CHAR, (yyloc)); (yyval.const_)->val.char_ = (yyvsp[0].chr); }
#line 2574 "_build/parser.c"
    break;

  case 137: /* shortAlphanumId: SHORTALPHANUMID  */
#line 487 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2580 "_build/parser.c"
    break;

  case 138: /* shortSymId: SHORTSYMID  */
#line 488 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2586 "_build/parser.c"
    break;

  case 139: /* longAlphanumId: LONGALPHANUMID  */
#line 489 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2592 "_build/parser.c"
    break;

  case 140: /* longSymId: LONGSYMID  */
#line 490 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2598 "_build/parser.c"
    break;

  case 143: /* vidNoEqual: ASTERISK  */
#line 494 "src/parser.y"
                      { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = "*"; }
#line 2604 "_build/parser.c"
    break;

  case 145: /* vid: EQUALOP  */
#line 497 "src/parser.y"
              { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = "="; }
#line 2610 "_build/parser.c"
    break;

  case 150: /* longvid: EQUALOP  */
#line 504 "src/parser.y"
                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = "="; }
#line 2616 "_build/parser.c"
    break;

  case 153: /* tyvar: TYVARID  */
#line 510 "src/parser.y"
                { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2622 "_build/parser.c"
    break;

  case 158: /* idField: shortAlphanumId  */
#line 518 "src/parser.y"
                          { tlua_field((yyval.field), ID); (yyval.field)->val.ident = (yyvsp[0].var)->name; }
#line 2628 "_build/parser.c"
    break;

  case 159: /* idField: shortSymId  */
#line 519 "src/parser.y"
                     { tlua_field((yyval.field), ID); (yyval.field)->val.ident = (yyvsp[0].var)->name; }
#line 2634 "_build/parser.c"
    break;

  case 160: /* idField: ASTERISK  */
#line 520 "src/parser.y"
                   { tlua_field((yyval.field), ID); (yyval.field)->val.ident = "*"; }
#line 2640 "_build/parser.c"
    break;

  case 165: /* vids: vid  */
#line 534 "src/parser.y"
           { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 2646 "_build/parser.c"
    break;

  case 166: /* vids: vid vids  */
#line 535 "src/parser.y"
                { list_cons((yyval.var_list), (yyvsp[-1].var), (yyvsp[0].var_list)); }
#line 2652 "_build/parser.c"
    break;

  case 167: /* longstrids: longstrid  */
#line 540 "src/parser.y"
                       { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 2658 "_build/parser.c"
    break;

  case 168: /* longstrids: longstrid longstrids  */
#line 541 "src/parser.y"
                                  { list_cons((yyval.var_list), (yyvsp[-1].var), (yyvsp[0].var_list)); }
#line 2664 "_build/parser.c"
    break;


#line 2668 "_build/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == T_TLUA_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, lexstate, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, lexstate);
          yychar = T_TLUA_YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, lexstate);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, lexstate, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != T_TLUA_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, lexstate);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, lexstate);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 543 "src/parser.y"


void tlua_yyerror(struct region *lloc, void *scanner, tlua_lexstate *lexstate, const char *msg)
{
    UNUSED(lloc);
    UNUSED(scanner);
    UNUSED(lexstate);
    fprintf(stderr, "Error: %s\n", msg);
}
