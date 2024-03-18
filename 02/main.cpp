#include <iostream>
#include "leaver.h"
using namespace std;

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    Leaver leaver;

    std::cout << leaver.leave(name);

    return 0;
}
