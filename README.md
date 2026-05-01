# cfstream（The latest version is V1.1.0）
This is a C++ header file that provides easy access to file streams and file operations.｜这是一个适用于C++的头文件，可以帮你更简单的的调用文件流与文件操作  
Currently only supports Windows and C++. Support for Linux，macOS and C may be added in the future.|目前仅支持Windows与C++，后续可能会支持Linux、macOS与C

# Usage Tutorial｜使用教程  

You need to first download `cfs.h` from the release and move it to your project path or the compiler's include path.｜你需要先从release中下载cfs.h并将它移动到项目路径或编译器包含路径

You should include the `cfs.h` header file in your code.｜在你的代码中需要包含 `cfs.h` 头文件

These are two example｜这是两种包含的例子  
1.`#include "cfs.h"` **Recommended**｜**推荐的**  
2.`#include <cfs.h>` **You need to move the header file to the compiler's include path beforehand.**｜**需要提前将头文件移动到编译器包含路经**  

**Note: Please do not include this header file multiple times or repeatedly. Even though we have added include guards (macro definitions) to the header file, we cannot guarantee what unknown errors might occur.**｜**注意：请不要多次或重复包含此头文件，即便我们已经对头文件进行了宏定义检测，但无法确定会发生什么未知错误**

All functionality in the header file is defined within the `cfs` namespace.|在头文件中的所有功能都定义在 `cfs` 命名空间内  

When accessing related functions, you need to specify the cfs namespace.｜在访问相关函数等时你需要指定cfs命名空间

For example|例如  
```cpp
#include <bits/stdc++.h> //just for g++
#include "cfs.h"

int main()
{
    cfs::cppfs("test.in","test.out");
    int n;
    cfs::cin >> n;
    cfs::cout << n << std::endl;
    cfs::closecppfs();
    return 0;
}
```
You can import the relevant functions using the `using` keyword.(Please first ensure that your project does not need to use stdio.)｜你可以通过 `using` 关键字导入相关函数（请先确保你的项目不需要使用stdio）  

For example|例如  
```cpp
#include <bits/stdc++.h> //just for g++
#include "cfs.h"
using cfs::cppfs;
using cfs::closecppfs;
using std::endl;
using cfs::cin;
using cfs::cout;

int main()
{
    cppfs("test.in","test.out");
    int n;
    cin >> n;
    cout << n << endl;
    closecppfs();
    return 0;
}
```
------------
# Function Introduction｜功能介绍

**0. Get version number｜获取版本号  
After version `1.1.0`, you can get the version number via the `cfs::getversion()` function. The format is `xx.xx.xx` and it is of type `const char*`.｜在版本 `1.1.0` 之后，你可以通过 `cfs::getversion()` 函数获取版本号，格式为 `xx.xx.xx` 为 `const char*` 类型  

Usage Example｜使用示例  
```cpp
#include <bits/stdc++.h> //just for g++
#include "cfs.h"

int main()
{
    const char* v = cfs::getversion();
    std::cout << v << std::endl;
    return 0;
}
```
This will output the current version number.｜这将输出当前版本号  

**1. C-style file stream｜C式文件流**  

This can easily redirect the input and output streams to file streams, allowing you to directly use `std::cin` and `std::cout`|这可以一键重载输入输出流到文件流，你可以直接使用 `std::cin` 与 `std::cout`  

format: `cfs::cfs(input_filename, output_filename)` ｜格式：`cfs::cfs(输入文件名,输出文件名)`  

And its paired close function, `cfs::closecfs()`, can redirect the input and output streams back to the console.|以及与其搭配的关闭函数 `cfs::closecfs()` 可以重新将输入输出流定向回控制台  
 
For example|例如  
```cpp
#include <bits/stdc++.h> //just for g++
#include "cfs.h"

int main()
{
    cfs::cfs("test.in","test.out");
    int n;
    std::cin >> n;
    std::cout << n << std::endl;
    cfs::closecfs();
    return 0;
}
```
The above code will read the first number from the file `test.in` and output it to `test.out`｜以上代码将会读入文件 `test.in` 中的首个数字并输出在 `test.out` 中  

**2. C++-style file stream｜C++式文件流**  

This defines dedicated file stream functions `cfs::cin` and `cfs::cout`. You can use `cfs::cin` and `cfs::cout` for file stream input/output while retaining `std::cin` and `std::cout` for standard input/output.|这定义了专门的文件流函数 `cfs::cin` 与 `cfs::cout` 你可以使用 `cfs::cin` 与 `cfs::cout` 实现文件流输入输出，并保留 `std::cin` 与 `std::cout` 进行标准输入输出  

format: `cfs::cppfs(input_filename, output_filename)` ｜格式：`cfs::cppfs(输入文件名,输出文件名)`  

And its paired close function, `cfs::closecppfs()`, can close `cfs::cin` and `cfs::cout`. After closing, you will not be able to use the related operations until you reopen the file stream; otherwise, unknown errors may occur.|以及与其搭配的关闭函数 `cfs::closecppfs()` 可以关闭 `cfs::cin` 与 `cfs::cout` 关闭后，你将无法使用相关操作直到重新打开文件流，否则可能发生未知错误  

In versions above `1.1.0`, we have made security optimizations to the `cfs::cppfs()` function. If you have not closed a previously opened C++-style file stream, an error will be reported with the message: `"Error-from-cfs Already open cppfs,please close first!"`｜在 `1.1.0` 以上版本，我们对 `cfs::cppfs()` 函数进行了安全性优化，如果你之前未关闭打开状态的C++式文件操作流，将会报错，内容为 `“Error-from-cfs Already open cppfs,please close first!”`

For example|例如  
```cpp
#include <bits/stdc++.h> //just for g++
#include "cfs.h"

int main()
{
    cfs::cppfs("test.in","test.out");
    int n;
    cfs::cin >> n;
    cfs::cout << n << std::endl;
    std::cout << n-1 << std::endl;
    cfs::closecppfs();
    return 0;
}
```  
The above code will read the first number `n` from the file `test.in` and output it to `test.out`, while also outputting `n-1` to the terminal console.｜以上代码将会读入文件 `test.in` 中的首个数字 `n` 并输出在 `test.out` 中，同时还会输出 `n-1` 在终端控制台中  

------------
# Support Us｜支持我们  
This is Weigao's first project. If there are any shortcomings, bugs, suggestions, or even just small errors in this README (including formatting, spelling, code, etc.), please feel free to submit issues. We will carefully review each one and accept reasonable feedback. If you find this project helpful, please give us a star🌟 – that would be our greatest support and encouragement. Thank you, qaq 🙏|
这是weigao的首个项目，有不足之处、bug、任何建议甚至只是本readme的小错误（包括格式、拼写、代码等）都可以去提issues，我们将逐条认真观看并接受合理的意见，如果你觉得本项目对你有帮助，请给我们一个star🌟吧，这将是对我们最大的支持与帮助，谢谢qaq🙏
