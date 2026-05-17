/*
 * @repository cfstream
 * @file cfs.h
 * @language C
 * @author weigao (https://github.com/weigao-china)
 * @version 1.2.0
 * @date 2026-05-17
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

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

static const char* versionnumber = "1.2.0";

static const char* cfs_getversion(void) {
    return versionnumber;
}

static void cfs(const char* input, const char* output) {
    if (input != NULL) {
        freopen(input, "r", stdin);
    }
    if (output != NULL) {
        freopen(output, "w", stdout);
    }
}

static void closecfs(void) {
    freopen("CON", "r", stdin);
    freopen("CON", "w", stdout);
}

#ifdef __cplusplus
}
#endif

#endif /* CFS_H_C */