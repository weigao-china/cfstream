/*
 * @repository cfstream
 * @file cfs.h
 * @language C
 * @author weigao (https://github.com/weigao-china)
 * @version 1.3.0
 * @date 2026-06-19
 *
 * @copyright 2026 weigao
 * @license MIT

MIT License

Copyright (c) 2026 weigao

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */

#ifndef CFS_H_C
#define CFS_H_C

#if !defined(__cplusplus) && (!defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L)
#error "cfs.h requires C99 or later."
#endif

#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64)
#define CFS_STDIN_DEVICE "CON"
#define CFS_STDOUT_DEVICE "CON"
#else
#define CFS_STDIN_DEVICE "/dev/tty"
#define CFS_STDOUT_DEVICE "/dev/tty"
#endif

#ifdef __cplusplus
extern "C" {
#endif

static const char* versionnumber = "1.3.0";

static inline const char* cfs_getversion(void) {
    return versionnumber;
}

static inline void cfs(const char* input, const char* output) {
    if (input != NULL) {
        freopen(input, "r", stdin);
    }
    if (output != NULL) {
        freopen(output, "w", stdout);
    }
}

static inline void closecfs(void) {
    freopen(CFS_STDIN_DEVICE, "r", stdin);
    freopen(CFS_STDOUT_DEVICE, "w", stdout);
}

#ifdef __cplusplus
}
#endif

#undef CFS_STDIN_DEVICE
#undef CFS_STDOUT_DEVICE

#endif /* CFS_H_C */