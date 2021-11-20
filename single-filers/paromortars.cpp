#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int mltpy(int a, int b)
{
    return a * b;
}

int main()
{
    std::cout << add(4,5) << '\n';
    std::cout << add(1 + 2, 3 * 4) << '\n';

    int a{5};
    std::cout << add(a,a) << '\n';

    std::cout << add(1, mltpy(2,3)) << '\n';
    std::cout << add(1, add(2,3)) << '\n';

    mltpy(a, 3);

    return 0;
}