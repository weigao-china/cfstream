# cfstream

`cfstream` 是一个轻量级的 C/C++ 头文件库，用于更方便地进行文件输入输出操作以及重定向。

它适合需要快速切换标准输入输出和文件输入输出的场景，例如输出调试信息、通过文件保存并读取信息、大量读入数据、算法竞赛、本地测试等。

[English README](README.md)

## 特性

- 仅需包含头文件，无需编译额外源文件
- 同时支持 C 和 C++
- 跨平台，支持三大主流操作系统 Windows 、macOS 、Linux
- 支持一键重定向输入输出
- C++ 版本提供独立的 `cfs::cin` 和 `cfs::cout`
- C++ 版本提供命名空间封装，安全可靠

## 文件选择

| 文件 | 语言 |
|---|---|
| `cfs.hpp` | C++ |
| `cfs.h` | C |

## 快速开始

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

## 文档

本 README 只提供项目概览和快速开始。**详细用法、示例和版本更新记录请查看项目 Wiki。**

## 开源协议

本项目使用 MIT License。任何个人与团队均可以使用、修改、发布，但请**必须保留原项目的版权说明**

## 支持~~我们~~我

weigao只是一个初中生，这也是weigao的首个项目，有不足之处、bug、任何建议甚至只是readme和wiki的小错误（包括格式、拼写、代码等）都可以去提issues，我们（其实只有我）将逐条认真观看并接受合理的意见，如果你觉得本项目对你有帮助，请给我们一个star🌟吧，这将是对我们最大的支持与帮助，谢谢QaQ🙏
