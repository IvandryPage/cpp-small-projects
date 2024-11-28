//Pointer

#include <iostream>

int main()
{
    //pointer can only store the same datatype
    int *p_number {}; 
    //explicityly initialize to nullptr
    double *p_fractional_number {nullptr};

    int number1 {15};

    p_number = &number1;

    std::cout << "p_number : " << p_number << std::endl;

    int *p_int{nullptr};
    int int_vvar {56};
    p_int = &int_vvar;

    //deferencing a pointer
    std::cout << "p_int: " << *p_int << std::endl;
}