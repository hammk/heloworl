#include <iostream>

using namespace std;   //'oh so this app uses items in this library?' - compiler

void myNcf(int x)
{
    cout << 2 * x;     //look ma, no 'std::'!
}

int main()
{
    return 0;
}