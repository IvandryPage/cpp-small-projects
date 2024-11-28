// array
#include <iostream>

int main()
{
    int scores[10] {12, 5, 10, 20, 30, 40, 90, 100, 55, 10}; // har garbage value

    std::cout << "Data of the array: " << std::endl;
    for (auto &score : scores)
        std::cout << "score : " << score << '\n';

    std::cout << "===================" << std::endl;
    for(size_t i{0}; i < std::size(scores); i++)
        std::cout << "score[" << i << "] :" << scores[i] << std::endl;

    char nama[9] {"Ivandry"};
    char message[] {'H', 'e', 'l', 'l', 'o','\0'};
    std::cout << nama << std::endl; // not safe if character array is not null terminated
}