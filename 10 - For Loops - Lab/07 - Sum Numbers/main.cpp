#include <iostream>

int main()
{
    unsigned int n;

    std::cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        signed int number;

        std::cin >> number;

        sum += number;
    }

    std::cout << sum << std::endl;

    return 0;
}