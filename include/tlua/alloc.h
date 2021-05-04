/* vim: set ft=c: */
/* Simplified obstacks integrated with Lua memory management
 * Note that these macros often duplicate its arguments
 */
#ifndef TLUA_ALLOC_H
#define TLUA_ALLOC_H

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <lua.h>

struct alloc_chunk {
    char *limit;
    struct alloc_chunk *prev;
    char contents[4];
};

struct alloc {
    lua_Alloc allocfn;
    void *ud;
    struct alloc_chunk *chunk;
    char *object_base, *next_free, *chunk_limit;
};

void alloc_init(struct alloc *a, lua_Alloc allocfn, void *ud);
void alloc_destroy(struct alloc *a);

/* Allocate using Lua's malloc/free */
#define rawalloc(a, sz)           ((a)->allocfn((a)->ud, NULL, 0, sz))
#define rawfree(a, p, sz)         ((a)->allocfn((a)->ud, p, sz, 0))
#define rawrealloc(a, p, osz, sz) ((a)->allocfn((a)->ud, p, osz, sz))

/* The rest of these routines and macros implement a bump allocator */
void alloc_newchunk(struct alloc *a, size_t sz);
void *alloc_finish(struct alloc *a);
void alloc_free(struct alloc *a, void *p);

#define alloc_room(a)                                                         \
    (size_t)((a)->chunk_limit - (a)->next_free)

#define alloc_make_room(a, sz)                                                \
    (alloc_room(a) < (sz) ? alloc_newchunk(a, sz) : (void)0)

#define alloc_blank_fast(a, sz)                                               \
    (void)((a)->next_free += (sz))

#define alloc_blank(a, sz)                                                    \
    (void)(alloc_make_room(a, sz), (a)->next_free += (sz))

#define alloc_grow(a, p, sz)                                                  \
    (void)(alloc_make_room(a, sz),                                            \
            memcpy((a)->next_free, p, sz),                                    \
            (a)->next_free += (sz))

#define alloc(a, sz)                                                          \
    (alloc_blank(a, sz), alloc_finish(a))

#define alloc_copy(a, p, sz)                                                  \
    (alloc_grow(a, p, sz), alloc_finish(a))

#define alloc_free(a, p)                                                      \
    ((void *)(a)->chunk < (p) && (p) < (void *)(a)->chunk_limit ?             \
        (a)->next_free = (a)->object_base = (char *)(p) :                     \
        (alloc_free)(a, p))

#endif
