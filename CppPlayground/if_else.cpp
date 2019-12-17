#include <iostream>

int main(int argc, char const *argv[])
{
    // 不可重载的三元运算符（?:），可以怎样神奇地玩耍？
    // version 1
    auto func1 = [](const int &age) -> int {
        if (age < 10)
            return 10;
        else if (age < 20)
            return 20;
        else if (age < 30)
            return 30;
        else if (age < 40)
            return 40;
        else
            return 50;
    };
    std::cout << "function(with if-else): " << func1(14) << std::endl;


    // 三元运算符有时可以让代码十分精简
    // version 2
    auto func2 = [](const int &age) -> int {
        // 可惜有时码字码得整整齐齐，代码自动格式化会作妖
        return
            age < 10 ? 10 : 
            age < 20 ? 20 : 
            age < 30 ? 30 : 
            age < 40 ? 40 : 
                       50 ;
    };
    std::cout << "function(with ?:): " << func2(14) << std::endl;

    return 0;
}
