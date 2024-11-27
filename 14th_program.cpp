#include <iostream>

int main()
{
    std::cout << "======== Comparing Operator ========" << std::endl;
    int num1 {1}, num2 {2};
    std::cout << "Number 1 : " << num1 << std::endl;
    std::cout << "Number 2 : " << num2 << std::endl;

    std::cout << '\n';
    std::cout << std::boolalpha;
    std::cout << "number 1 < number 2 : " << (num1 < num2) << std::endl;
    std::cout << "number 1 <= number 2 : " << (num1 <= num2) << std::endl;
    std::cout << "number 1 > number 2 : " << (num1 > num2) << std::endl;
    std::cout << "number 1 >= number 2 : " << (num1 >= num2) << std::endl;
    std::cout << "number 1 == number 2 : " << (num1 == num2) << std::endl;
    std::cout << "number 1 != number 2 : " << (num1 != num2) << std::endl;


    // &&, ||, !, Logical Operator
    return 0;
}