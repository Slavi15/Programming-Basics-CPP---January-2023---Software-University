#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

int main()
{
    int budget, fishersCount;
    std::string season;

    std::cin >> budget >> season >> fishersCount;

    float price;

    if (season == "Spring")
    {
        price += 3000;
    }
    else if (season == "Summer" || season == "Autumn")
    {
        price += 4200;
    }
    else if (season == "Winter")
    {
        price += 2600;
    }

    if (fishersCount <= 6)
    {
        price -= (price * 0.1);
    }
    else if (fishersCount >= 7 && fishersCount <= 11)
    {
        price -= (price * 0.15);
    }
    else if (fishersCount >= 12)
    {
        price -= (price * 0.25);
    }

    if (fishersCount % 2 == 0 && season != "Autumn")
    {
        price -= (price * 0.05);
    }

    float leftMoney = abs(budget - price);
    if (budget >= price)
    {
        std::cout << std::fixed << std::setprecision(2) << "Yes! You have " << leftMoney << " leva left." << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "Not enough money! You need " << leftMoney << " leva." << std::endl;
    }

    return 0;
}