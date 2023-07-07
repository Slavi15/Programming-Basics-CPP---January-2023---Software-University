#include <iostream>

int main()
{
    signed int num;

    std::cin >> num;

    if (num >= -100 && num <= 100 && num != 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}