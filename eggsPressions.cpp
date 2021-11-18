#include <iostream>

int main()
{
    std::cout << 2 + 3 << ' in base four im fine \n';

    int x{ 7 };
    int y{ x - 2};
    std::cout << y << '\n';

    int z{ 0 };
    std::cout << z << '\n';
    z = x; 
    std::cout << z << '\n';
    
    return 0;
}
