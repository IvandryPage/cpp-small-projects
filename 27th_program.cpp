#include <iostream>

// REFERENCES

int main()
{
    double double_value {4.55};
    // references
    double &ref_double_value {double_value};

    std::cout << "REFERENCES" << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;

    ref_double_value = 1000;

    std::cout << "double_value now: " << double_value << std::endl;    
}