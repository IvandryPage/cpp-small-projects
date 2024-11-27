#include <iostream>
#include <limits> // introducing limits library

int main()
{
    std::cout << "Range short: " << std::endl;
    std::cout << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max();

    std::cout << "Range long long: " << std::endl;
    std::cout << std::numeric_limits<long long>::min() << " to " << std::numeric_limits<long long>::max();

    return 0;
}