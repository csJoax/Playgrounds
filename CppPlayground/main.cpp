#include <iostream>
#include <string>

using string = std::string;

int main(int argc, char const *argv[])
{
    // C++11特性：原始字符串字面量。 raw string literal
    // 简介：忽略字符串中的转义字符
    // 可参看： https://blog.csdn.net/yapian8/article/details/46529689
    {
        std::cout << "(Hello World\t)" << std::endl;
        std::cout << R"(Hello World\t)" << std::endl; //原始字符串字面量

        // 注意：必须要有括号，否则报错
        // std::cout << R"Hello World\t" << std::endl; // 找不到终止原始字符串分隔符的括号

        // 可以自行定义终止字符串，这时我们可以任性添加括号，如：
        std::cout << R"stop((Hello) () (World))stop" << std::endl;
        std::cout << R"-((Hello) () (World))-" << std::endl;

        // 但必须成对，否则报错
        // string orig_str = R"aa(Hello World)stop"; // 找不到原始字符串的结束分隔符
    }

    // 你猜 sizeof(void) 的结果是什么？
    {
        std::cout << sizeof(void) << std::endl;
    }

    // swap
    {
        { //std::swap
            int a = 10, b = 20;
            std::cout << "a=" << a << ", b=" << b << std::endl;
            std::swap(a, b);
            std::cout << "std::swap: "
                      << "a=" << a << ", b=" << b << std::endl;
        }

        { //no temp var
            int a = 10, b = 20;
            std::cout << "a=" << a << ", b=" << b << std::endl;

            a ^= b;
            b ^= a;
            a ^= b;

            std::cout << "swap: "
                      << "a=" << a << ", b=" << b << std::endl;
        };
    }
    return 0;
}
