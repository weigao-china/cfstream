# cfstream

`cfstream` is a lightweight C/C++ header-only library designed to make file input/output operations and redirection easier.

It is suitable for scenarios where you need to quickly switch between standard I/O and file I/O, such as printing debug information, saving and reading data through files, handling large amounts of input, Informatics Olympiad (OI) local testing and so on.

[中文 README](README.zh-CN.md)

## Features

- Header-only, no extra source files required
- Supports both C and C++
- Cross-platform support for Windows, macOS, and Linux
- Redirects input and output with a single function call
- Provides independent `cfs::cin` and `cfs::cout` in the C++ version
- Provides namespace encapsulation in the C++ version for safer usage

## File Selection

| File | Language |
|---|---|
| `cfs.hpp` | C++ |
| `cfs.h` | C |

## Quick Start

### C++

```cpp
#include "cfs.hpp"

int main() {
    cfs::cppfs("test.in", "test.out");

    int n;
    cfs::cin >> n;
    cfs::cout << n << '\n';

    cfs::closecppfs();
    return 0;
}
```

### C

```c
#include "cfs.h"

int main(void) {
    cfs("test.in", "test.out");

    int n;
    scanf("%d", &n);
    printf("%d\n", n);

    closecfs();
    return 0;
}
```

## Documentation

This README only provides a brief project overview and a quick start guide. **For detailed usage, examples, and release notes, please check the project [Wiki](https://github.com/weigao-china/cfstream/wiki).**

## License

This project is licensed under the MIT License. Individuals and teams may use, modify, and distribute this project, but the original copyright notice **must be preserved**.

## Support ~~Us~~ Me

weigao is only a junior high school student, and this is also weigao's first project. If you find any shortcomings, bugs, suggestions, or even small mistakes in the README or Wiki, including formatting, spelling, or code issues, feel free to open an issue.

We, well, actually just me, will carefully read each issue and accept reasonable feedback.

If this project helps you, please give it a star 🌟. That would be the greatest support and encouragement for this project.

Thank you, QaQ 🙏
