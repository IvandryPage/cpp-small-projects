#include <iostream>

int main()
{
    //Compile time error if ; is removed
    std::cout << "Hello World!" << std::endl;

    //Run time error because of division by zero
    int value = 7/0;

    //Warning because of division of zero -- would cause unexpected behaviour
    14/0;
    return 0;
}