/* vim: set ft=c: */
#ifndef TLUA_AST_H
#define TLUA_AST_H

#include <lua.h>
#include "tlua/region.h"

typedef struct tlua_string tlua_string;
typedef struct tlua_const tlua_const;
typedef struct tlua_exp tlua_exp;
typedef struct tlua_match tlua_match;

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

typedef struct {
    struct region loc;
    char *name;
} tlua_var;

typedef struct {
    enum { FIELD_NUM, FIELD_ID } tag;
    union {
        char *ident;
        unsigned num;
    } val;
} tlua_field;

typedef struct tlua_list {
    void *car;
    struct tlua_list *cdr;
} tlua_list;

typedef struct {
    tlua_field *field;
    tlua_exp *exp;
} tlua_record;

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
        struct { tlua_exp *left, *right; } binary;
        struct { tlua_exp *exp; tlua_match *match; } case_;
        tlua_const *const_;
        tlua_match *fn;
        struct { tlua_exp *exp; tlua_match *match; } handle;
        struct { tlua_list *decs; tlua_exp *body; } let;
        tlua_field *sel;
        tlua_list *exps;
        tlua_list *record;
        tlua_var *var;
        struct { tlua_exp *cond, *body; } while_;
    } val;
};

#endif
