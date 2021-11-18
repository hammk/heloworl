#include <iostream>

int main()
{
    int x;                 // new variable called x
    x = 36;

    std::cout << x + "\n"; // x before being changed

    x = 999;

    std::cout << x + "\n"; // x after being changed

    return 0;

}