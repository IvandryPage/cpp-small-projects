#include <iostream>

int main()
{
    bool red_light {true};
    bool green_light {false};

    if(red_light)
        std::cout << "STOP!" << std::endl;
    else
        std::cout << "Go Through!" << std::endl;

    if(green_light)
        std::cout << "Move!" << std::endl;
    else
        std::cout << "Stop moving or die!" << std::endl;

    // std::boolalpha forces to display true or false instead of 1 or 0
    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    return 0;
}