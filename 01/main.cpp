#include <iostream>
#include "greeter.h"

int main() {
    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);

    std::cout << Greeter::greet(name) << std::endl;

    return 0;
}
