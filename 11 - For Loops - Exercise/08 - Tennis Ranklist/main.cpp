#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

int main()
{
    int competitions, points;

    std::cin >> competitions >> points;

    float wins = 0, earnedPoints = 0;

    for (int i = 0; i < competitions; i++)
    {
        std::string level;

        std::cin >> level;

        if (level == "W")
        {
            earnedPoints += 2000;
            wins += 1;
        }
        else if (level == "F")
        {
            earnedPoints += 1200;
        }
        else if (level == "SF")
        {
            earnedPoints += 720;
        }
    }

    points += earnedPoints;

    float averagePoints = earnedPoints / competitions;

    float winPercentage = (wins / competitions) * 100;

    std::cout << "Final points: " << points << std::endl;
    std::cout << "Average points: " << floor(averagePoints) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << winPercentage << "%" << std::endl;

    return 0;
}