#include <iostream>

int getValue()
{
    std::cout << "gib me integer!: ";
    int valueGiven{};
    std::cin >> valueGiven;

    return valueGiven;
}

int main()
{
    int x{ getValue() };
    int y{ getValue() };

    std::cout << x << " plus " << y << " is " << x+y << '\n';

    return 0;
}