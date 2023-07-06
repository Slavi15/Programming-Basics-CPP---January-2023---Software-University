#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float recordSeconds, distanceMetres, timeOneMeter;

    std::cin >> recordSeconds >> distanceMetres >> timeOneMeter;

    float seconds = distanceMetres * timeOneMeter;
    float delay = floor(distanceMetres / 15) * 12.5;
    float totalSeconds = seconds + delay;

    if (totalSeconds >= recordSeconds)
    {
        float leftTime = abs(totalSeconds - recordSeconds);
        std::cout << std::fixed << std::setprecision(2) << "No, he failed! He was " << leftTime << " seconds slower.";
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "Yes, he succeeded! The new world record is " << totalSeconds << " seconds.";
    }

    return 0;
}