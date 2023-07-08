#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int days;
    std::string roomType, score;

    std::cin >> days;
    std::cin.ignore();
    std::getline(std::cin, roomType);
    std::getline(std::cin, score);

    int nights = days - 1;

    float expenses;

    if (roomType == "room for one person")
    {
        expenses = nights * 18;
    }
    else if (roomType == "apartment")
    {
        expenses = nights * 25;

        if (days < 10)
        {
            expenses -= (expenses * 0.3);
        }
        else if (days >= 10 && days <= 15)
        {
            expenses -= (expenses * 0.35);
        }
        else if (days > 15)
        {
            expenses -= (expenses * 0.5);
        }
    }
    else if (roomType == "president apartment")
    {
        expenses = nights * 35;

        if (days < 10)
        {
            expenses -= (expenses * 0.1);
        }
        else if (days >= 10 && days <= 15)
        {
            expenses -= (expenses * 0.15);
        }
        else if (days > 15)
        {
            expenses -= (expenses * 0.2);
        }
    }

    if (score == "positive")
    {
        expenses += (expenses * 0.25);
    }
    else if (score == "negative")
    {
        expenses -= (expenses * 0.1);
    }

    std::cout << std::fixed << std::setprecision(2) << expenses << std::endl;

    return 0;
}