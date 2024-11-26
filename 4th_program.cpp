// Learning about statements

#include <iostream>

int addNumbers(int x, int y)
{
    return x + y;
}

int main()
{
    /*
        each statement must ends with ;
    */
    int first_number = 12;
    int second_number = 9;

    // different way to assign value to int
    // the benefit is it would cause an error if the "narrowing" or "losing the accuracy of an numeric value"
    // for example : if I put 3.14 in the curly braces, it would cause an error
    int third_number {20};
    
    int sum = addNumbers(first_number, second_number);
    std::cout << "The sum of two numbers is : " << sum << std::endl;
    std::cout << "Different way to assign value : " << third_number << std::endl;
    return 0;
}