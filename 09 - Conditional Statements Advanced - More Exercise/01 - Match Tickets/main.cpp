#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

int main()
{
    float budget;
    std::string category;
    int people;

    std::cin >> budget >> category >> people;

    const float VIPPrice = 499.99;
    const float normalPrice = 249.99;

    float transportExpenses;
    float ticketsExpenses;

    if (people >= 1 && people <= 4)
    {
        transportExpenses = budget * 0.75;
    }
    else if (people >= 5 && people <= 9)
    {
        transportExpenses = budget * 0.6;
    }
    else if (people >= 10 && people <= 24)
    {
        transportExpenses = budget * 0.5;
    }
    else if (people >= 25 && people <= 49)
    {
        transportExpenses = budget * 0.4;
    }
    else
    {
        transportExpenses = budget * 0.25;
    }

    if (category == "VIP")
    {
        ticketsExpenses = people * VIPPrice;
    }
    else if (category == "Normal")
    {
        ticketsExpenses = people * normalPrice;
    }

    float leftMoney = abs(budget - (transportExpenses + ticketsExpenses));

    if (budget >= (transportExpenses + ticketsExpenses))
    {
        std::cout << std::fixed << std::setprecision(2) << "Yes! You have " << leftMoney << " leva left." << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "Not enough money! You need " << leftMoney << " leva." << std::endl;
    }

    return 0;
}