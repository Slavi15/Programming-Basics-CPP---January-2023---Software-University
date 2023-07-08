#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    float budget;
    std::string season;

    std::cin >> budget >> season;

    std::string destination, holiday;

    float expenses;

    if (budget <= 100)
    {
        destination = "Bulgaria";

        if (season == "summer")
        {
            expenses = budget * 0.3;
            holiday = "Camp";
        }
        else if (season == "winter")
        {
            expenses = budget * 0.7;
            holiday = "Hotel";
        }
    }
    else if (budget > 100 && budget <= 1000)
    {
        destination = "Balkans";

        if (season == "summer")
        {
            expenses = budget * 0.4;
            holiday = "Camp";
        }
        else if (season == "winter")
        {
            expenses = budget * 0.8;
            holiday = "Hotel";
        }
    }
    else if (budget > 1000)
    {
        destination = "Europe";
        expenses = budget * 0.9;
        holiday = "Hotel";
    }

    std::cout << "Somewhere in " << destination << std::endl;
    std::cout << std::fixed << std::setprecision(2) << holiday << " - " << expenses << std::endl;

    return 0;
}