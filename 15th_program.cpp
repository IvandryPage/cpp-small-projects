// Output Formatting

#include <iostream>
#include <iomanip>
#include <ios>
#define COL_WIDTH 20

int main()
{
    std::cout << "=== OUTPUT FORMATTING ===" << std::endl;
    std::cout << "\n\n";

    std::cout << "This is flush?!" << std::endl << std::flush ;

    std::cout << "Formatted Table : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(COL_WIDTH) << "first_name";
    std::cout << std::setw(COL_WIDTH) << "last_name";
    std::cout << std::setw(COL_WIDTH) << "age";
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "positive number: " << 35 << std::endl;
    std::cout << "positive number: " << -35 << std::endl;
    
    std::cout << std::noshowpos;
    std::cout << "positive number: " << 35 << std::endl;
    std::cout << "positive number: " << -35 << std::endl;

    std::cout << std::uppercase;
    std::cout << std::dec << 498 << std::endl;
    std::cout << std::hex << 498 << std::endl;
    std::cout << std::oct << 498 << std::endl;

    std::cout << std::showbase;
    std::cout << std::nouppercase;
    std::cout << std::dec << 498 << std::endl;
    std::cout << std::hex << 498 << std::endl;
    std::cout << std::oct << 498 << std::endl;
    
    double c {1.34e-10};

    std::cout << c << std::endl;
    std::cout << std::fixed;
    std::cout << c << std::endl;

    std::cout.unsetf(std::ios::scientific | std::ios::fixed);

    std::cout << std::showpoint; // menampilkan angka dibelakang koma walaupun .0
    return 0;
}