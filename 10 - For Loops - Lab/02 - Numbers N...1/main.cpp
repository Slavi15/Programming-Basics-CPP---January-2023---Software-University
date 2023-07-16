#include <iostream>

int main()
{
    int num;

    std::cin >> num;

    for (int index = num; index >= 1; index--)
    {
        std::cout << index << std::endl;
    }

    return 0;
}