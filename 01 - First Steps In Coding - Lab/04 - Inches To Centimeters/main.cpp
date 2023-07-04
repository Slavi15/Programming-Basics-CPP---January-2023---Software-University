#include <iostream>

int main()
{
    float inches;
    std::cin >> inches;

    float centimeters = inches * 2.54;

    std::cout << centimeters << std::endl;

    return 0;
}