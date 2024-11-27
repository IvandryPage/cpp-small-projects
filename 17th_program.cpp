// math library

#include <iostream>
#include <cmath>

int main()
{
    double savings { -5000 };

    float weight { 7.7f };

    std::cout << std::floor(weight) << std::endl;
    std::cout << std::ceil(weight) << std::endl;
    std::cout << std::abs(savings) << std::endl;
    std::cout << "e ^ 10 = " << std::exp(10) << std::endl;
    std::cout << "log (10) = " << std::log(1) << std::endl;
    std::cout << "9 ^ 2 = " << std::pow(9, 2) << std::endl;
    std::cout << "sin(0) = " << std::sin(0) << std::endl;
    std::cout << "cos(0) = " << std::cos(0) << std::endl;
    std::cout << "arccos(0) = " << std::acos(0) << std::endl;
    return 0;
}