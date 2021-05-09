/* vim: set ft=c: */
/* Simple linked list
 * Macros use the variable `allocator` for allocations.
 */
#ifndef TLUA_LIST_H
#define TLUA_LIST_H

#include <tlua/config.h>
#include <tlua/alloc.h>

#define define_list(name, type)                 \
    struct tlua_list_##name {                   \
        type car; struct tlua_list_##name *cdr; \
    }

#define list(name) struct tlua_list_##name

#define list_push_front(list, x) do {                \
    void *__tmp = (list);                            \
    (list) = tlua_balloc(allocator, sizeof *(list)); \
    (list)->car = (x);                               \
    (list)->cdr = __tmp;                             \
} while (0)

#define list_cons(x, a, b) do {               \
    (x) = tlua_balloc(allocator, sizeof *(x)); \
    (x)->car = (a);                           \
    (x)->cdr = (b);                           \
} while (0)

#define list_car(x) ((x) ? (x)->car : NULL)

#define list_foreach(x, it, list)                 \
    for ((it) = (list), (x) = list_car(it);       \
            (it) != NULL;                         \
            (it) = (it)->cdr, (x) = list_car(it))

#endif /* ifndef TLUA_LIST_H */
