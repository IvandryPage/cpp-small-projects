// Operation on Data

#include <iostream>

int main()
{
    // Basic operations
    int number {31}, number2 {10};
    std::cout << number << " + " << number2 << " = " << number + number2 << std::endl;
    std::cout << number << " - " << number2 << " = " << number - number2 << std::endl;
    std::cout << number << " * " << number2 << " = " << number * number2 << std::endl;
    std::cout << number << " / " << number2 << " = " << number / number2 << std::endl;
    std::cout << number << " % " << number2 << " = " << number % number2 << std::endl;

    int increment_decrement {100};

    //postfix
    std::cout << "value : " << increment_decrement++ << std::endl;
    std::cout << "value : " << increment_decrement << std::endl;

    increment_decrement = 100;

    // prefix
    std::cout << "value : " << ++increment_decrement << std::endl;
    std::cout << "value : " << increment_decrement << std::endl;
    return 0;
}