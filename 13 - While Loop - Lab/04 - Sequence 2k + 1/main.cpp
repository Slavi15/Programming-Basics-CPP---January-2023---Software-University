#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int number = 1;

    while (number <= n)
    {
        std::cout << number << std::endl;
        
        number = (number * 2) + 1;
    }

    return 0;
}