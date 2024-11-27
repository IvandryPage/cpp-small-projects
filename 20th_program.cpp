#include <iostream>

int main()
{
    const size_t ITERATION {10};
    for(size_t i{}; i < ITERATION; i++)
        std::cout << i << " : I love C++\n";

    std::cout << "=========================" << std::endl;
    for(unsigned int i {}; i < ITERATION; i++)
        std::cout << i << " : I love C++\n";

    std::cout << "=========================" << std::endl;
    unsigned int i{0};

    while (i < ITERATION)
    {
        std::cout << "I Love C++" << std::endl;
        ++i;
    }
    std::cout << "=========================" << std::endl;
    std::cout << "size of size_t : " << sizeof(size_t) << std::endl;
    std::cout << "Loop done!" << std::endl;
    return 0;
}