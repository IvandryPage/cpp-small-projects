// character and text

#include <iostream>

int main()
{
    char my_char { 65 }; // ASCII Encoding
    char value { 'A' }; // Literal character

    std::cout << "my_char: " << my_char << std::endl;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl; // transform character to int
    
    
    return 0;
}