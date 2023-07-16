#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    for (int index = 1; index <= number; index += 3)
    {
        std::cout << index << std::endl;
    }

    return 0;
}