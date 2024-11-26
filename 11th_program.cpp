// auto keyword for letting the compiler deduce the type for us

#include <iostream>

int main()
{

    auto var1 {12};
    auto var2 {3.0};
    auto var3 {4.5f};
    auto var4 {'e'};

    // int modifier suffixes
    auto var5 {123u}; // unsigned int
    auto var6 {123ul}; // unsigned long
    auto var7 {123ll}; // long long

    std::cout << "Var 1 occupies " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "Var 2 occupies " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "Var 3 occupies " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "Var 4 occupies " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "Var 5 occupies " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "Var 6 occupies " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "Var 7 occupies " << sizeof(var7) << " bytes" << std::endl;
    return 0;
}