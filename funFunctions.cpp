#include <iostream>

int userValue()
{
    int chosenNum{};
    std::cout << "\n \noh and also can you give me a number? \n";
    std::cin >> chosenNum;

    return chosenNum;
}

void yoDood()
{
    int num { userValue() };
    std::cout << "yo dooooooood im in YoDood() \n";
    userValue();
    std::cout << "\nso that would mean " << num << " is " << num / 2 << " doubled? crazy \n";
}

int main()
{
    int mainNum { userValue() };
    std::cout << "back in main() right now, not cool; \n";
    std::cout << "now back in main() smh \n";
    std::cout << "atleast i still know that number you put in is " << mainNum / 5 << '\n';

    return 0;
}