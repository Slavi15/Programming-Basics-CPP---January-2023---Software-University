#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string month;
    int nights;

    std::cin >> month >> nights;

    float apartmentExpenses;
    float studioExpenses;

    if (month == "May" || month == "October")
    {
        if (nights > 7 && nights <= 14)
        {
            studioExpenses = nights * (50 * 0.95);
            apartmentExpenses = nights * 65;
        }
        else if (nights > 14)
        {
            studioExpenses = nights * (50 * 0.7);
            apartmentExpenses = nights * (65 * 0.9);
        }
        else
        {
            studioExpenses = nights * 50;
            apartmentExpenses = nights * 65;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (nights > 14)
        {
            studioExpenses = nights * (75.2 * 0.8);
            apartmentExpenses = nights * (68.7 * 0.9);
        }
        else
        {
            studioExpenses = nights * 75.2;
            apartmentExpenses = nights * 68.7;
        }
    }
    else if (month == "July" || month == "August")
    {
        if (nights > 14)
        {
            apartmentExpenses = nights * (77 * 0.9);
            studioExpenses = nights * 76;
        }
        else
        {
            studioExpenses = nights * 76;
            apartmentExpenses = nights * 77;
        }
    }

    std::cout << std::fixed << std::setprecision(2) << "Apartment: " << apartmentExpenses << " lv.\nStudio: " << studioExpenses << " lv." << std::endl;

    return 0;
}