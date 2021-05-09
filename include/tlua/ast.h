/* vim: set ft=c: */
/* Allocation macros use the following form:
 * tlua_<type>(<result ptr>, <tag name>, <location>);
 * They use `allocator` as the pointer to the tlua_alloc struct, so
 * make sure a value with that name and type is in scope when using them.
 */
#ifndef TLUA_AST_H
#define TLUA_AST_H

#include <tlua/config.h>
#include <tlua/region.h>
#include <tlua/alloc.h>
#include <tlua/list.h>

typedef struct tlua_const tlua_const;
typedef struct tlua_con tlua_con;
typedef struct tlua_datatype_rhs tlua_datatype_rhs;
typedef struct tlua_datatype tlua_datatype;
typedef struct tlua_datbind tlua_datbind;
typedef struct tlua_dec tlua_dec;
typedef struct tlua_exp tlua_exp;
typedef struct tlua_field tlua_field;
typedef struct tlua_fixity tlua_fixity;
typedef struct tlua_match tlua_match;
typedef struct tlua_pat tlua_pat;
typedef struct tlua_record_item tlua_record_item;
typedef struct tlua_rule tlua_rule;
typedef struct tlua_string tlua_string;
typedef struct tlua_typbind tlua_typbind;
typedef struct tlua_type tlua_type;
typedef struct tlua_var tlua_var;
typedef struct tlua_modidbind tlua_modidbind;
typedef struct tlua_funbind tlua_funbind;
typedef struct tlua_valbind tlua_valbind;
typedef struct tlua_rvalbind tlua_rvalbind;
typedef struct tlua_eb tlua_eb;

define_list(datatype, tlua_datatype *);
define_list(dec, tlua_dec *);
define_list(exp, tlua_exp *);
define_list(pat, tlua_pat *);
define_list(record_item, tlua_record_item *);
define_list(rule, tlua_rule *);
define_list(typbind, tlua_typbind *);
define_list(var, tlua_var *);
define_list(type, tlua_type *);
define_list(funbind, tlua_funbind *);
define_list(funbinds, list(funbind) *);
define_list(eb, tlua_eb *);
define_list(con, tlua_con *);
define_list(valbind, tlua_valbind *);
define_list(rvalbind, tlua_rvalbind *);

/*** Atoms ***/

struct tlua_var {
    struct region loc;
    char *name; /* null-terminated */
};

struct tlua_const {
    struct region loc;
    enum {
        CONST_INT,
        CONST_WORD,
        CONST_STRING,
        CONST_CHAR,
        CONST_REAL,
        CONST_BOOL
    } tag;
    union {
        lua_Integer int_;
        lua_Unsigned word;
        struct tlua_string {
            char *buf;
            int len;
        } string;
        unsigned char char_;
        double real;
        int bool_;
    } val;
};

struct tlua_type {
    struct region loc;
    enum {
        TYPE_CON,
        TYPE_RECORD,
        TYPE_VAR
    } tag;
    union {
        struct { tlua_var *tycon; list(type) *args; } con;
        list(record_item) *record;
        tlua_var *var;
    } val;
};

struct tlua_typbind {
    list(var) *tyvars;
    tlua_var *tycon;
    tlua_type *def;
};

struct tlua_datbind {
    list(typbind) *withtypes;
    list(datatype) *datatypes;
};

struct tlua_datatype {
    list(var) *tyvars;
    tlua_var *tycon;
    list(con) *cons;
};

struct tlua_datatype_rhs {
    struct region loc;
    enum { DATATYPE_RHS_DATBIND, DATATYPE_RHS_REPL } tag;
    union {
        tlua_datbind *datbind;
        struct {
            tlua_var *lhs, *rhs;
        } repl;
    } val;
};

struct tlua_modidbind {
    enum {
        MODIDBIND_FCT,
        MODIDBIND_SIG,
        MODIDBIND_STR
    } tag;
    tlua_var *lhs, *rhs;
};

/*** Records ***/

struct tlua_field {
    enum { FIELD_NUM, FIELD_ID } tag;
    union {
        char *ident;
        unsigned num;
    } val;
};

struct tlua_record_item {
    struct region loc;
    tlua_field *field;
    void *val;
};

/*** Core ***/

struct tlua_fixity {
    enum { FIXITY_INFIX, FIXITY_INFIXR, FIXITY_NONFIX } tag;
    int precedence; /* -1 if not present */
};

typedef enum {
    FIXOP_NONE,
    FIXOP_OP
} tlua_fixop;

struct tlua_pat {
    struct region loc;
    enum {
        PAT_APP,
        PAT_CONST,
        PAT_CONSTRAINT,
        PAT_FLATAPP,
        PAT_LAYERED,
        PAT_LIST,
        PAT_OR,
        PAT_RECORD,
        PAT_TUPLE,
        PAT_VAR,
        PAT_VECTOR,
        PAT_WILD
    } tag;
    union {
        struct { tlua_var *con; struct tlua_pat *arg; } app;
        tlua_const *const_;
        struct {
            struct tlua_pat *pat;
            tlua_type *type;
        } constraint;
        list(pat) *flatapp;
        struct {
            struct tlua_pat *pat;
            tlua_type *constraint;
            tlua_var *var;
            tlua_fixop fixop;
        } layered;
        list(pat) *list;
        list(pat) *or_;
        struct tlua_pat_record {
            int flexible;
            list(record_item) *items;
        } record;
        list(pat) *tuple;
        struct {
            tlua_fixop fixop;
            tlua_var *name;
        } var;
        list(pat) *vector;
    } val;
};

struct tlua_rule {
    tlua_pat *pat;
    tlua_exp *exp;
};

struct tlua_match {
    struct region loc;
    list(rule) *rules;
};

struct tlua_exp {
    struct region loc;
    enum {
        EXP_ANDALSO,
        EXP_CASE,
        EXP_CONST,
        EXP_CONSTRAINT,
        EXP_FLATAPP,
        EXP_FN,
        EXP_HANDLE,
        EXP_IF,
        EXP_LET,
        EXP_LIST,
        EXP_ORELSE,
        EXP_RAISE,
        EXP_RECORD,
        EXP_SELECTOR,
        EXP_SEQ,
        EXP_VAR,
        EXP_VECTOR,
        EXP_WHILE
    } tag;
    union {
        struct { tlua_exp *left, *right; } andalso;
        struct { tlua_exp *exp; tlua_match *match; } case_;
        tlua_const *const_;
        struct { tlua_exp *exp; tlua_type *type; } constraint;
        list(exp) *flatapp;
        tlua_match *fn;
        struct { tlua_exp *exp; tlua_match *match; } handle;
        struct { tlua_exp *cond, *true_, *false_; } if_;
        struct { list(dec) *decs; tlua_exp *body; } let;
        list(exp) *list;
        struct { tlua_exp *left, *right; } orelse;
        tlua_exp *raise;
        list(record_item) *record;
        tlua_field *sel;
        list(exp) *seq;
        tlua_var *var;
        list(exp) *vector;
        struct { tlua_exp *cond, *body; } while_;
    } val;
};

struct tlua_con {
    tlua_var *con;
    tlua_type *type;
};

struct tlua_dec {
    struct region loc;
    enum {
        DEC_DATATYPE,
        DEC_DO,
        DEC_EXCEPTION,
        DEC_FIX,
        DEC_FUN,
        DEC_LOCAL,
        DEC_OPEN,
        DEC_SEQ,
        DEC_TYPE,
        DEC_VAL
    } tag;
    union {
        tlua_datatype_rhs *datatype;
        list(typbind) *type;
        tlua_exp *do_;
        list(eb) *exception;
        struct {
            tlua_fixity fixity;
            list(var) *ops;
        } fixity;
        struct {
            list(var) *tyvars;
            list(funbinds) *fbs;
        } fun;
        struct {
            list(dec) *d1, *d2;
        } local;
        list(var) *open;
        list(dec) *seq;
        struct tlua_exp_val {
            list(var) *tyvars;
            list(valbind) *vbs;
            list(rvalbind) *rvbs;
        } val;
    } val;
};

struct tlua_funbind {
    tlua_exp *body;
    list(pat) *pats;
    tlua_type *result_type;
};

struct tlua_valbind {
    tlua_pat *pat;
    tlua_exp *exp;
};

struct tlua_rvalbind {
    tlua_pat *pat;
    tlua_match *match;
};

struct tlua_eb {
    enum {
        EB_DEF,
        EB_GEN
    } tag;
    tlua_var *con;
    union {
        tlua_var *def;
        tlua_type *gen;
    } val;
};

/* Printing */

TLUA_API void tlua_print_const(const tlua_const *, FILE *);
TLUA_API void tlua_print_type(const tlua_type *, FILE *);
TLUA_API void tlua_print_field(const tlua_field *, FILE *);
TLUA_API void tlua_print_fixity(const tlua_fixity *, FILE *);
TLUA_API void tlua_print_var(const tlua_var *, FILE *);
TLUA_API void tlua_print_match(const tlua_match *, FILE *);
TLUA_API void tlua_print_exp(const tlua_exp *, FILE *);
TLUA_API void tlua_print_pat(const tlua_pat *, FILE *);

/* Allocation */

#define tlua_const(p, _tag, _loc) do {                 \
    (p) = tlua_balloc(allocator, sizeof(tlua_const));  \
    (p)->loc = (_loc);                                 \
    (p)->tag = CONST_##_tag;                           \
} while (0)

#define tlua_type(p, _tag, _loc) do {                  \
    (p) = tlua_balloc(allocator, sizeof(tlua_type));   \
    (p)->loc = (_loc);                                 \
    (p)->tag = TYPE_##_tag;                            \
} while (0)

#define tlua_field(p, _tag) do {                       \
    (p) = tlua_balloc(allocator, sizeof(tlua_field));  \
    (p)->tag = FIELD_##_tag;                           \
} while (0)

#define tlua_match(p, _loc) do {                       \
    (p) = tlua_balloc(allocator, sizeof(tlua_match));  \
    (p)->loc = (_loc);                                 \
} while (0)

#define tlua_rule(p) do {                              \
    (p) = tlua_balloc(allocator, sizeof(tlua_rule));   \
} while (0)

#define tlua_exp(p, _tag, _loc) do {                   \
    (p) = tlua_balloc(allocator, sizeof(tlua_exp));    \
    (p)->tag = EXP_##_tag;                             \
    (p)->loc = (_loc);                                 \
} while (0)

#define tlua_dec(p, _tag, _loc) do {                   \
    (p) = tlua_balloc(allocator, sizeof(tlua_dec));    \
    (p)->tag = DEC_##_tag;                             \
    (p)->loc = (_loc);                                 \
} while (0)

#define tlua_fixity(p, _tag) do {                      \
    (p) = tlua_balloc(allocator, sizeof(tlua_fixity)); \
    (p)->tag = FIXITY_##_tag;                          \
} while (0)

#define tlua_var(p, _loc) do {                         \
    (p) = tlua_balloc(allocator, sizeof(tlua_var));    \
    (p)->loc = (_loc);                                 \
} while (0)

#define tlua_pat(p, _tag, _loc) do {                   \
    (p) = tlua_balloc(allocator, sizeof(tlua_pat));    \
    (p)->tag = PAT_##_tag;                             \
    (p)->loc = (_loc);                                 \
} while (0)

#define tlua_datatype_rhs(p, _tag, _loc) do {                \
    (p) = tlua_balloc(allocator, sizeof(tlua_datatype_rhs)); \
    (p)->tag = DATATYPE_RHS_##_tag;                          \
    (p)->loc = (_loc);                                       \
} while (0)

#define tlua_record_item(p, _loc) do {                 \
    (p) = tlua_balloc(allocator, sizeof(tlua_pat));    \
    (p)->loc = (_loc);                                 \
} while (0)

#define tlua_eb(p, _tag) do {                          \
    (p) = tlua_balloc(allocator, sizeof(tlua_eb));     \
    (p)->tag = EB_##_tag;                              \
} while (0)

#define tlua_con(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_con));    \
} while (0)

#define tlua_typbind(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_typbind));    \
} while (0)

#define tlua_funbind(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_funbind));    \
} while (0)

#define tlua_valbind(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_valbind));    \
} while (0)

#define tlua_rvalbind(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_rvalbind));    \
} while (0)

#define tlua_datbind(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_datbind));    \
} while (0)

#define tlua_datatype(p) do {                               \
    (p) = tlua_balloc(allocator, sizeof(tlua_datatype));    \
} while (0)

#endif
