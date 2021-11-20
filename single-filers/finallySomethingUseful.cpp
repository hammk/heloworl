#include <iostream>

int main()
{
    int numberToMultiply{ };
    
    std::cout << "type a number here. no decimals allowed: ";
    std::cin >> numberToMultiply;

    std::cout << "\nwhizz whoosh that number is now " << numberToMultiply * 2 << "\n";
    std::cout << "and that number will then become " << numberToMultiply * 3 << "!!! \n";

    return 0;
}