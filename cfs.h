/*
 * @file cfs.h
 * @author weigao (https://github.com/weigao-china)
 * @version 1.0
 * @date 2026-04-27
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

#ifndef CFS_H
#define CFS_H

#include <fstream>
#include <cstdio>
#include <iostream>

namespace cfs {
    static std::ifstream cin;
    static std::ofstream cout;

    void cfs(const char* input, const char* output) {
        std::freopen(input, "r", stdin);
        std::freopen(output, "w", stdout);
    }

    void cppfs(const char* input, const char* output) {
        cin.open(input);
        cout.open(output);
    }

    void closecfs() {
        std::freopen("CON", "r", stdin);
        std::freopen("CON", "w", stdout);
    }

    void closecppfs(){
        if (cin.is_open()) cin.close();
        if (cout.is_open()) cout.close();
    }
}

#endif // CFS_H
