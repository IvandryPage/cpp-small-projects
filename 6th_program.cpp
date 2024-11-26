//variables and data types

#include <iostream> // c++ standard library

// entry points
int main()
{
    int random_garbage_value; // WARNING. not recommended because machine doesn't get enough information about the value
    int better_var {};
    int my_int {4}; // 4 bytes or more
    double my_double {3.14}; // more precise than float,
    float my_float {3.14};
    char my_char {'A'};
    bool my_bool {true};
    auto my_auto {my_char}; // automaticallly defines the appropriate data types
    std::string my_string {"Steve"};

    // all of the values are equals to 15
    int number [4] {
        15, //Decimal Systems
        017, //Octal System
        0x0f, //Hexadecimal
        0b00001111 //Binary Systems
    };

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Number " << i << " : " << number[i] << std::endl;
    }

    // int narrowing_conversion {2.9}; // Error of Warning
    int apple_count(5.35); // functional variable of initialization;
    int count = 2.9; //assingment initialization
    //preferable using the curly braces

    std::cout << "apple : " << apple_count << std::endl;
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof my_bool: " << sizeof(my_bool) << std::endl;
    return 0;
}