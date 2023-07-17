#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    int age, toyPrice;
    float washingMachinePrice;

    std::cin >> age >> washingMachinePrice >> toyPrice;

    int initial = 10;

    float money;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money += initial - 1;

            initial += 10;
        }
        else
        {
            money += toyPrice;
        }
    }

    float leftMoney = abs(money - washingMachinePrice);

    if (money >= washingMachinePrice)
    {
        std::cout << std::fixed << std::setprecision(2) << "Yes! " << leftMoney << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "No! " << leftMoney << std::endl;
    }

    return 0;
}