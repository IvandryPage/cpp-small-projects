// assignments 
#include <iostream>

int main()
{
    int var1 {12};
    std::cout << "value of var1: " << var1 << std::endl;

    var1 = 20;
    std::cout << "value of var1: " << var1 << std::endl;

    auto var2 {333u};
    std::cout << "value of auto var2: " << var2 << std::endl;

    var2 = -22; // dangerous assignments to an auto variable
    std::cout << "valeu of auto var2: " << var2 << std::endl;
    return 0;
}