#include <iostream>

const int PEN {10};
const int MARKER {20};
const int ERASER {30};
const int RECTANGLE {40};
const int CIRCLE {50};
const int ELLIPSE {60};

int main()
{
    int number1 {55};
    int number2 {60};
    bool result (number1 < number2);
    std::cout << std::boolalpha << "result : " << result << std::endl;

    if(result)
        std::cout << number1 << " is less than " << number2 << std::endl;
    else
        std::cout << number1 << " is more than " << number2 << std::endl;

    bool green {true};
    bool police_stop {false};

    if(green)
    {
        if(!police_stop)
            std::cout << "Go!" << std::endl;
    }

    int tool {ERASER};

    switch (tool)
    {
        case PEN:
            std::cout << "Active tool is pen" << std::endl;
            break;
        case MARKER:
            std::cout << "Active tool is marker" << std::endl;
            break;
        case ERASER:
            std::cout << "Active tool is eraser" << std::endl;
            break;
        case RECTANGLE:
            std::cout << "Active tool is rectangle" << std::endl;
            break;
        case CIRCLE:
            std::cout << "Active tool is circle" << std::endl;
            break;
        case ELLIPSE:
            std::cout << "Active tool is ellipse" << std::endl;
            break;
        default:
            std::cout << "Tool not found!" << std::endl;
            break;
    }

    int max {
        (number1 > number2) ? number1 : number2
    };

    std::cout << "Max between num1 num2: " << max << std::endl;
    return 0;
}