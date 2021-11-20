#include <iostream>     // because std::cout also what kind of name is that

int main()
{
    int x{ 3 };         //three
    int numOfMCN{ };    //how many would you like is gthe question

    std::cout << "is this the same program. well, no because i ahve a number here: " << x << "." << std::endl;
    std::cout << "multiple lines are cool" << std::endl << std::endl << std::endl << std::endl << "McNuggets" << std::endl;
    std::cout << "how many Chicken McNuggets would you like: ";
    std::cin >> numOfMCN;

    std::cout << "so you want " << numOfMCN << "? well you get nothing then. :troll:" << std::endl;

    return 0;
}