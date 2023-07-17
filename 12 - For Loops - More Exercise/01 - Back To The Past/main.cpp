#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float money;
    int year;

    std::cin >> money >> year;

    int age = 17;

    for (int i = 1800; i <= year; i++)
    {
        age += 1;

        if (i % 2 == 0)
        {
            money -= 12000;
        }
        else
        {
            money -= (12000 + (age * 50)); 
        }
    }

    if (money >= 0)
    {
        std::cout << std::fixed << std::setprecision(2) << "Yes! He will live a carefree life and will have " << money << " dollars left." << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "He will need " << abs(money) << " dollars to survive." << std::endl;
    }

    return 0;
}