/* vim: set ft=c: */
/* Use this file for all C header includes
 * Allows for easy configuration
 */
#ifndef TLUA_CONFIG_H
#define TLUA_CONFIG_H

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Requires C99 */
#include <stdbool.h>
#include <stdint.h>

/* Lua headers */
#include <lua.h>
#include <lauxlib.h>

/* Visibility */
#if defined(_WIN32)
#  define TLUA_API
#  define TLUA_LOAD_API __declspec(dllexport)
#elif defined(__GNUC__)
#  define TLUA_API      __attribute__((__visibility__("hidden")))
#  define TLUA_LOAD_API __attribute__((__visibility__("default")))
#else
#  error "Not sure how to specify function visibility"
#endif

#define UNUSED(x) ((void)(x))

#endif
