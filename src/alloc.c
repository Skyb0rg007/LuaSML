
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "tlua/alloc.h"

#define ALLOC_CHUNKSIZE 4096
#define ALLOC_MASK 3
#define ALLOC_ALIGN(p) ((char *)(((intptr_t)(p) + ALLOC_MASK) & ~ALLOC_MASK))

void alloc_init(struct alloc *a, lua_Alloc allocfn, void *ud)
{
    assert(a != NULL);
    /* a->chunk = malloc(ALLOC_CHUNKSIZE); */
    a->chunk = allocfn(ud, NULL, 0, ALLOC_CHUNKSIZE);
    if (!a->chunk)
        abort();
    a->chunk->prev = NULL;
    a->chunk_limit = a->chunk->limit = (char *)a->chunk + ALLOC_CHUNKSIZE;
    a->next_free = a->object_base = ALLOC_ALIGN(a->chunk->contents);
    a->allocfn = allocfn;
    a->ud = ud;
}

void alloc_destroy(struct alloc *a)
{
    struct alloc_chunk *tmp;

    assert(a != NULL);
    while (a->chunk)
    {
        tmp = a->chunk->prev;
        /* free(a->chunk); */
        a->allocfn(a->ud, a->chunk, (char *)a->chunk - a->chunk->limit, 0);
        a->chunk = tmp;
    }
}

void (alloc_free)(struct alloc *a, void *p) {
    struct alloc_chunk *lp, *plp;

    assert(a != NULL);
    if (p == NULL)
        return;

    lp = a->chunk;
    while (lp != NULL && ((void *)lp >= p || (void *)lp->limit < p))
    {
        plp = lp->prev;
        /* free(lp); */
        a->allocfn(a->ud, lp, (char *)lp - lp->limit, 0);
        lp = plp;
    }
    if (lp == NULL)
        abort();
    a->object_base = a->next_free = p;
    a->chunk_limit = lp->limit;
    a->chunk = lp;
}

void alloc_newchunk(struct alloc *a, size_t sz)
{
    struct alloc_chunk *old, *new;
    size_t object_size, sum1, sum2, new_size;
    char *object_base;

    assert(a != NULL);
    assert(sz > 0);
    object_size = a->next_free - a->object_base;
    sum1 = object_size + sz;
    sum2 = sum1 + ALLOC_MASK;
    new_size = sum2 + (object_size >> 3) + 100;
    if (new_size < sum2)
        new_size = sum2;
    if (new_size < ALLOC_CHUNKSIZE)
        new_size = ALLOC_CHUNKSIZE;

    if (object_size > sum1)
        abort();
    if (sum1 > sum2)
        abort();

    /* new = malloc(new_size); */
    new = a->allocfn(a->ud, NULL, 0, new_size);
    if (new == NULL)
        abort();

    a->chunk = new;
    new->prev = old;
    new->limit = a->chunk_limit = (char *)new + new_size;

    object_base = ALLOC_ALIGN(new->contents);
    memcpy(object_base, a->object_base, object_size);
    if (a->object_base == ALLOC_ALIGN(old->contents)) {
        new->prev = old->prev;
        /* free(old); */
        a->allocfn(a->ud, old, (char *)old - old->limit, 0);
    }

    a->object_base = object_base;
    a->next_free = a->object_base + object_size;
}

void *alloc_finish(struct alloc *a) {
    void *p;

    assert(a != NULL);
    a->next_free = ALLOC_ALIGN(a->next_free);
    if (a->next_free > a->chunk_limit)
        a->next_free = a->chunk_limit;
    p = a->object_base;
    a->object_base = a->next_free;
    return p;
}
