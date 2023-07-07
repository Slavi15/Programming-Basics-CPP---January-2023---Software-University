#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string fruit, day;
    float qty;

    std::cin >> fruit >> day >> qty;

    float price = 0;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            price += qty * 2.5;
        }
        else if (fruit == "apple")
        {
            price += qty * 1.2;
        }
        else if (fruit == "orange")
        {
            price += qty * 0.85;
        }
        else if (fruit == "grapefruit")
        {
            price += qty * 1.45;
        }
        else if (fruit == "kiwi")
        {
            price += qty * 2.7;
        }
        else if (fruit == "pineapple")
        {
            price += qty * 5.5;
        }
        else if (fruit == "grapes")
        {
            price += qty * 3.85;
        }
        else
        {
            std::cout << "error" << std::endl;
        }
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            price += qty * 2.7;
        }
        else if (fruit == "apple")
        {
            price += qty * 1.25;
        }
        else if (fruit == "orange")
        {
            price += qty * 0.9;
        }
        else if (fruit == "grapefruit")
        {
            price += qty * 1.6;
        }
        else if (fruit == "kiwi")
        {
            price += qty * 3;
        }
        else if (fruit == "pineapple")
        {
            price += qty * 5.6;
        }
        else if (fruit == "grapes")
        {
            price += qty * 4.2;
        }
        else
        {
            std::cout << "error" << std::endl;
        }
    }
    else
    {
        std::cout << "error" << std::endl;
    }

    if (price != 0)
        std::cout << std::fixed << std::setprecision(2) << price << std::endl;

    return 0;
}