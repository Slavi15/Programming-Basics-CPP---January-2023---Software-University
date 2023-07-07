#include <iostream>

int main()
{
    signed int number;

    std::cin >> number;

    if ((number < 100 || number > 200) && number != 0)
        std::cout << "invalid" << std::endl;

    return 0;
}