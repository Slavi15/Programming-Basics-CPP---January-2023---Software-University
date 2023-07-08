#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    float budget;
    std::string season;

    std::cin >> budget >> season;

    float money;
    std::string location, accommodation;

    if (budget <= 1000)
    {
        accommodation = "Camp";

        if (season == "Summer")
        {
            location = "Alaska";
            money = budget * 0.65;
        }
        else if (season == "Winter")
        {
            location = "Morocco";
            money = budget * 0.45;
        }
    }
    else if (budget > 1000 && budget <= 3000)
    {
        accommodation = "Hut";

        if (season == "Summer")
        {
            location = "Alaska";
            money = budget * 0.8;
        }
        else if (season == "Winter")
        {
            location = "Morocco";
            money = budget * 0.6;
        }
    }
    else if (budget > 3000)
    {
        accommodation = "Hotel";
        location = (season == "Summer") ? "Alaska" : "Morocco";
        money = budget * 0.9;
    }

    std::cout << std::fixed << std::setprecision(2) << location << " - " << accommodation << " - " << money << std::endl;

    return 0;
}