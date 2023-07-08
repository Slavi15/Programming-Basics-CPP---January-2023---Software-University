#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string season;
    float km;

    std::cin >> season >> km;

    const int months = 4;
    float income;

    if (season == "Spring" || season == "Autumn")
    {
        income = (km <= 5000) ? months * km * 0.75 : (km > 5000 && km <= 10000) ? income = months * km * 0.95 : months * km * 1.45;
    }
    else if (season == "Summer")
    {
        income = (km <= 5000) ? months * km * 0.9 : (km > 5000 && km <= 10000) ? income = months * km * 1.1 : months * km * 1.45;
    }
    else if (season == "Winter")
    {
        income = (km <= 5000) ? months * km * 1.05 : (km > 5000 && km <= 10000) ? income = months * km * 1.25 : months * km * 1.45;
    }

    income -= (income * 0.1);

    std::cout << std::fixed << std::setprecision(2) << income << std::endl;

    return 0;
}