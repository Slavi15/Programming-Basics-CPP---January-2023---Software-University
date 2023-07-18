#include <iostream>

int main()
{
    int initial, num;

    std::cin >> initial >> num;

    int sum = num;

    while (sum < initial)
    {
        std::cin >> num;

        sum += num;
    }

    std::cout << sum << std::endl;

    return 0;
}