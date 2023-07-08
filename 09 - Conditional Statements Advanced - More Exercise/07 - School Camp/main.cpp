#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string season, group;
    int students, nights;

    std::cin >> season >> group >> students >> nights;

    std::string sport;
    float price;

    if (season == "Winter")
    {
        if (group == "boys")
        {
            price = nights * students * 9.6;
            sport = "Judo";
        }
        else if (group == "girls")
        {
            price = nights * students * 9.6;
            sport = "Gymnastics";
        }
        else if (group == "mixed")
        {
            price = nights * students * 10;
            sport = "Ski";
        }
    }
    else if (season == "Spring")
    {
        if (group == "boys")
        {
            price = nights * students * 7.2;
            sport = "Tennis";
        }
        else if (group == "girls")
        {
            price = nights * students * 7.2;
            sport = "Athletics";
        }
        else if (group == "mixed")
        {
            price = nights * students * 9.5;
            sport = "Cycling";
        }
    }
    else if (season == "Summer")
    {
        if (group == "boys")
        {
            price = nights * students * 15;
            sport = "Football";
        }
        else if (group == "girls")
        {
            price = nights * students * 15;
            sport = "Volleyball";
        }
        else if (group == "mixed")
        {
            price = nights * students * 20;
            sport = "Swimming";
        }
    }

    if (students >= 50)
    {
        price -= (price * 0.5);
    }
    else if (students >= 20 && students < 50)
    {
        price -= (price * 0.15);
    }
    else if (students >= 10 && students < 20)
    {
        price -= (price * 0.05);
    }

    std::cout << std::fixed << std::setprecision(2) << sport << " " << price << " lv." << std::endl;

    return 0;
}