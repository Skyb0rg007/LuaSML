/* vim: set ft=c: */
#ifndef TLUA_REGION_H
#define TLUA_REGION_H

struct sourcepos {
    int line, column;
};

#define SOURCEPOS_BOGUS     {-1,-1}
#define SOURCEPOS_FMT       "%d.%d"
#define SOURCEPOS_FMTARG(a) (a)->line, (a)->column

#define sourcepos_compare(a, b)                                               \
    ((a)->line == (b)->line ?                                                 \
     (b)->column - (a)->column :                                              \
     (b)->line - (a)->line)

#define sourcepos_equals(a, b)                                                \
    ((a)->line == (b)->line && (a)->column == (b)->column)

#define sourcepos_isbogus(a)                                                  \
    ((a)->line < 0)

struct region {
    struct sourcepos left, right;
};

#define REGION_BOGUS     {{-1,-1},{-1,-1}}
#define REGION_FMT       SOURCEPOS_FMT "-" SOURCEPOS_FMT
#define REGION_FMTARG(a) SOURCEPOS_FMTARG(&(a)->left), SOURCEPOS_FMTARG(&(a)->right)

#define region_compare(a, b)                                                  \
    (sourcepos_isbogus(a) ? (sourcepos_isbogus(b) ? 0 : -1) :                 \
     sourcepos_isbogus(b) ? 1 : sourcepos_compare((a)->left, (b)->left))

#define region_equals(a, b)                                                   \
    (sourcepos_equals(&(a)->left, &(b)->left) &&                              \
     sourcepos_equals(&(a)->right, &(b)->right))

#define region_isbogus(a)                                                     \
    ((a)->left.line < 0)

#define region_extend_right(a, p)                                             \
    (region_isbogus(a) ? (void)0 : (void)((a)->right = *p))

#define region_append(a, b)                                                   \
    (region_isbogus(a) ? (void)(*a = *b) :                                    \
        region_isbogus(b) ? 0 :                                               \
        (void)((a)->right = (b)->right))

#endif
