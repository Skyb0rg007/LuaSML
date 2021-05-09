/* vim: set ft=c: */
/* All the memory management used throughout the tlua source code.
 * The `alloc` struct implements:
 * - stdlib-style malloc/realloc/free
 * - lua-style malloc/realloc/free
 * - obstack-style bump allocator
 *
 * The stdlib-style functions are used within flex and bison generated code.
 * The lua-style functions are used whenever a freeable memory buffer is used.
 * The bump allocator is used for allocating long-lasting memory.
 * AST nodes are allocated in that manner, and freed all at once at the end of compilation
 */
#ifndef TLUA_ALLOC_H
#define TLUA_ALLOC_H

#include <tlua/config.h>

typedef struct tlua_alloc tlua_alloc;

/* Creation/Destruction */
TLUA_API void tlua_alloc_init(tlua_alloc *alloc, lua_State *L);
TLUA_API void tlua_alloc_destroy(tlua_alloc *alloc);
/* General allocation/deallocation */
TLUA_API void *tlua_rawalloc(tlua_alloc *alloc, size_t size);
TLUA_API void *tlua_rawrealloc(tlua_alloc *alloc, void *p, size_t osize, size_t size);
TLUA_API void tlua_rawfree(tlua_alloc *alloc, void *p, size_t osize);
/* Helpers which keep track of allocation size */
TLUA_API void *tlua_malloc(tlua_alloc *alloc, size_t size);
TLUA_API void *tlua_realloc(tlua_alloc *alloc, void *p, size_t size);
TLUA_API void tlua_free(tlua_alloc *alloc, void *p);
/* Block allocation */
TLUA_API void *tlua_balloc(tlua_alloc *alloc, size_t size);
TLUA_API void tlua_bfree(tlua_alloc *alloc, void *p);
/* Helper for error generation */
TLUA_API void tlua_error(tlua_alloc *alloc, const char *fmt, ...);

struct tlua_alloc {
    lua_Alloc allocfn;
    void *ud;
    lua_State *L;
    struct chunk *chunk;
    char *chunk_limit;
    char *next_free;
};

#endif

