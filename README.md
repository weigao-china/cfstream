# cfstream（The latest version is V1.0.0）
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
今天太晚了，懒得写，明天继续写qaq
