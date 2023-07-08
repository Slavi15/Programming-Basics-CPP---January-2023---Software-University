#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    float budget;
    std::string season;

    std::cin >> budget >> season;

    std::string carClass, carType;
    float carPrice;

    if (budget <= 100)
    {
        carClass = "Economy class";

        if (season == "Summer")
        {
            carType = "Cabrio";
            carPrice = budget * 0.35;
        }
        else if (season == "Winter")
        {
            carType = "Jeep";
            carPrice = budget * 0.65;
        }
    }
    else if (budget > 100 && budget <= 500)
    {
        carClass = "Compact class";

        if (season == "Summer")
        {
            carType = "Cabrio";
            carPrice = budget * 0.45;
        }
        else if (season == "Winter")
        {
            carType = "Jeep";
            carPrice = budget * 0.8;
        }
    }
    else if (budget > 500)
    {
        carClass = "Luxury class";
        carType = "Jeep";
        carPrice = budget * 0.9;
    }

    std::cout << std::fixed << std::setprecision(2) << carClass << "\n" << carType << " - " << carPrice << std::endl;

    return 0;
}