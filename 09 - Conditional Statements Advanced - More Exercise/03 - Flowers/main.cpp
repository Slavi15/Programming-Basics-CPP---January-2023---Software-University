#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

int main()
{
    int chrysantemumCount, rosesCount, tulipsCount;
    std::string season;
    char isHoliday;

    std::cin >> chrysantemumCount >> rosesCount >> tulipsCount >> season >> isHoliday;

    int flowers = chrysantemumCount + rosesCount + tulipsCount;

    float money;

    if (season == "Spring" || season == "Summer")
    {
        if (isHoliday == 'Y')
        {
            money = (chrysantemumCount * (2 + 2 * 0.15)) + (rosesCount * (4.1 + 4.1 * 0.15)) + (tulipsCount * (2.5 + 2.5 * 0.15));
        }
        else
        {
            money = (chrysantemumCount * 2) + (rosesCount * 4.1) + (tulipsCount * 2.5);
        }

        if (tulipsCount > 7 && season == "Spring")
            money -= (money * 0.05);
    }
    else if (season == "Autumn" || season == "Winter")
    {
        if (isHoliday == 'Y')
        {
            money = (chrysantemumCount * (3.75 + 3.75 * 0.15)) + (rosesCount * (4.5 + 4.5 * 0.15)) + (tulipsCount * (4.15 + 4.15 * 0.15));
        }
        else
        {
            money = (chrysantemumCount * 3.75) + (rosesCount * 4.5) + (tulipsCount * 4.15);
        }

        if (rosesCount >= 10 && season == "Winter")
            money -= (money * 0.1);
    }

    if (flowers > 20)
        money -= (money * 0.2);

    money += 2;

    std::cout << std::fixed << std::setprecision(2) << money << std::endl;

    return 0;
}