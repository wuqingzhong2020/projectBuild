1. 调试编译选择编辑器的时候一定要选择 源代码（eg.xx.cpp）不要选择 xx.json代码 
2. 为啥终端的编译器和使用快捷键编译的编译器不一样
3. 换个工程名调试编译就不行了
4. 如果替换cmakeTools工具中要指定的编译器（目前是vs的编译器想把它换成minGw）



5. 终端手动编译
    mkdir build
    cd build
    cmake -G "MinGW Makefiles" ..
    mingw32-make    

6. task.json 每条命令都是自己单独起的一个终端执行一条命令， 不是好几个命令在同一个终端连续执行
    解决方法：可以写一个脚本， 将所有要执行的操作，用一条命令执行

首先 Ctrl+Shift+P 调出快捷输入窗。

7 . - Building for: Visual Studio 17 2022    // 如何改换其他编译套件


