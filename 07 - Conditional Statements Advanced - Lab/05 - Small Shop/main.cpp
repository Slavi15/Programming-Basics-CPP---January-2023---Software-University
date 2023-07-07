#include <iostream>
#include <string>

int main()
{
    std::string product, town;
    float qty;

    std::cin >> product >> town >> qty;

    float price;

    if (town == "Sofia")
    {
        if (product == "coffee")
        {
            price += 0.5 * qty;
        }
        else if (product == "water")
        {
            price += 0.8 * qty;
        }
        else if (product == "beer")
        {
            price += 1.2 * qty;
        }
        else if (product == "sweets")
        {
            price += 1.45 * qty;
        }
        else if (product == "peanuts")
        {
            price += 1.6 * qty;
        }
    }
    else if (town == "Plovdiv")
    {
        if (product == "coffee")
        {
            price += 0.4 * qty;
        }
        else if (product == "water")
        {
            price += 0.7 * qty;
        }
        else if (product == "beer")
        {
            price += 1.15 * qty;
        }
        else if (product == "sweets")
        {
            price += 1.3 * qty;
        }
        else if (product == "peanuts")
        {
            price += 1.5 * qty;
        }
    }
    else if (town == "Varna")
    {
        if (product == "coffee")
        {
            price += 0.45 * qty;
        }
        else if (product == "water")
        {
            price += 0.7 * qty;
        }
        else if (product == "beer")
        {
            price += 1.1 * qty;
        }
        else if (product == "sweets")
        {
            price += 1.35 * qty;
        }
        else if (product == "peanuts")
        {
            price += 1.55 * qty;
        }
    }

    std::cout << price << std::endl;

    return 0;
}