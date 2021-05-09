
#include <tlua/config.h>
#include <tlua/alloc.h>

#define CHUNKSIZE 4096
#define ALIGNMENT 4
#define ALIGNMASK (ALIGNMENT - 1)
#define ALIGN(p)  ((char *)(((intptr_t)(p) + ALIGNMASK) & ~ALIGNMASK))

struct chunk {
    char *limit;
    struct chunk *prev;
    char contents[4];
};

/* Creation/Destruction */
TLUA_API void tlua_alloc_init(tlua_alloc *alloc, lua_State *L)
{
    assert(alloc != NULL);
    assert(L != NULL);
    alloc->L = L;
    alloc->allocfn = lua_getallocf(L, &alloc->ud);
    alloc->chunk = tlua_rawalloc(alloc, CHUNKSIZE);
    alloc->chunk->prev = NULL;
    alloc->chunk->limit = (char *)alloc->chunk + CHUNKSIZE;
    alloc->chunk_limit = alloc->chunk->limit;
    alloc->next_free = ALIGN(alloc->chunk->contents);
}

TLUA_API void tlua_alloc_destroy(tlua_alloc *alloc)
{
    struct chunk *tmp;
    assert(alloc != NULL);
    while (alloc->chunk) {
        tmp = alloc->chunk->prev;
        tlua_rawfree(alloc, alloc->chunk, (char *)alloc->chunk - alloc->chunk->limit);
        alloc->chunk = tmp;
    }
#ifndef NDEBUG
    memset(alloc, 0x0, sizeof *alloc);
#endif
}

TLUA_API void *tlua_rawalloc(tlua_alloc *alloc, size_t size)
{
    void *p;
    assert(alloc != NULL);
    p = alloc->allocfn(alloc->ud, NULL, 0, size);
    if (p == NULL) {
        tlua_error(alloc, "Out of memory!");
        return NULL;
    }
    return p;
}

TLUA_API void *tlua_rawrealloc(tlua_alloc *alloc, void *p, size_t osize, size_t size)
{
    void *q;
    assert(alloc != NULL);
    q = alloc->allocfn(alloc->ud, p, osize, size);
    if (q == NULL) {
        if (osize >= size) {
            return p;
        } else {
            tlua_error(alloc, "Out of memory!");
            return NULL;
        }
    } else {
        return q;
    }
}

TLUA_API void tlua_rawfree(tlua_alloc *alloc, void *p, size_t osize)
{
    void *q;
    assert(alloc != NULL);
    q = alloc->allocfn(alloc->ud, p, osize, 0);
    assert(q == NULL);
}

TLUA_API void *tlua_malloc(tlua_alloc *alloc, size_t size)
{
    size_t *p;
    size_t real_size;
    assert(alloc != NULL);
    real_size = size + sizeof(size_t);
    p = tlua_rawalloc(alloc, real_size);
    *p = real_size;
    return p + 1;
}

TLUA_API void *tlua_realloc(tlua_alloc *alloc, void *p, size_t size)
{
    size_t osize;
    size_t real_size;
    size_t *real_ptr;
    assert(alloc != NULL);
    if (p == NULL)
        return tlua_malloc(alloc, size);
    real_ptr = (size_t *)p - 1;
    osize = *real_ptr;
    real_size = size + sizeof(size_t);
    real_ptr = tlua_rawrealloc(alloc, real_ptr, osize, real_size);
    *real_ptr = real_size;
    return real_ptr + 1;
}

TLUA_API void tlua_free(tlua_alloc *alloc, void *p)
{
    size_t osize;
    size_t *real_ptr;
    assert(alloc != NULL);
    if (p == NULL)
        return;
    real_ptr = (size_t *)p - 1;
    osize = *real_ptr;
    tlua_rawfree(alloc, real_ptr, osize);
}

/* Block allocation */
static void newchunk(tlua_alloc *alloc, size_t size)
{
    struct chunk *old, *new;
    size_t new_size;

    assert(alloc != NULL);
    assert(size > 0);

    new_size = size + ALIGNMASK + 100;
    if (new_size < CHUNKSIZE)
        new_size = CHUNKSIZE;

    old = alloc->chunk;
    new = tlua_rawalloc(alloc, new_size);
    new->prev = old;
    new->limit = (char *)new + new_size;
    if (alloc->next_free == ALIGN(old->contents)) {
        new->prev = old->prev;
        tlua_rawfree(alloc, old, (char *)old - old->limit);
    }

    alloc->chunk = new;
    alloc->chunk_limit = alloc->chunk->limit;
    alloc->next_free = ALIGN(new->contents);
}

TLUA_API void *tlua_balloc(tlua_alloc *alloc, size_t size)
{
    void *p;
    assert(alloc != NULL);
    assert(size > 0);
    if (alloc->chunk_limit - alloc->next_free < (ptrdiff_t)size) {
        newchunk(alloc, size);
    }
    p = alloc->next_free;
    alloc->next_free += size;
    return p;
}

TLUA_API void tlua_bfree(tlua_alloc *alloc, void *p)
{
    struct chunk *lp, *tmp;

    assert(alloc != NULL);
    if (p == NULL)
        return;

    lp = alloc->chunk;
    while (lp != NULL && ((void *)lp >= p || (void *)lp->limit < p)) {
        tmp = lp->prev;
        tlua_rawfree(alloc, lp, (char *)lp - lp->limit);
        lp = tmp;
    }
    if (lp == NULL) {
        tlua_error(alloc, "Attempt to free non-block allocated pointer %p", p);
        return;
    }
    alloc->next_free = p;
    alloc->chunk_limit = lp->limit;
    alloc->chunk = lp;
}

/* Copied from Lua sourcecode for luaL_error() */
TLUA_API void tlua_error(tlua_alloc *alloc, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    luaL_where(alloc->L, 1);
    lua_pushvfstring(alloc->L, fmt, ap);
    va_end(ap);
    lua_concat(alloc->L, 2);
    lua_error(alloc->L);
}
