#include <iostream>

int main()
{
    int number;
    float bonusPoints;

    std::cin >> number;

    if (number <= 100)
    {
        bonusPoints += 5;
    }
    else if (number > 100 && number <= 1000)
    {
        bonusPoints += (number * 0.2);
    }
    else if (number > 1000)
    {
        bonusPoints += (number * 0.1);
    }

    if (number % 2 == 0)
    {
        bonusPoints += 1;
    }
    else if (number % 10 == 5)
    {
        bonusPoints += 2;
    }

    std::cout << bonusPoints << "\n" << static_cast<double>(number) + bonusPoints << std::endl;

    return 0;
}