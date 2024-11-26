#include <iostream>

int main()
{
    double number { 5.6 };
    double number2 {};
    double number3 {};
    //infinity
    double result { number / number2 };
    double result2 { number2 / number3 };

    std::cout << "positif infinity: " << result << std::endl;
    std::cout << "negative infinity can be achieved by dividing a negative floating number with 0" << std::endl;
    std::cout << "NaN: " << result2;
    return 0;
}