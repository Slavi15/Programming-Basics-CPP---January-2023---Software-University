#include <iostream>
#include <string>
#include <math.h>

int main()
{
    std::string series;
    int episodeLength, breakLength;

    std::getline(std::cin, series);
    std::cin >> episodeLength >> breakLength;

    float leftFreeTime = static_cast<double>(breakLength) - (static_cast<double>(breakLength) / 8) - (static_cast<double>(breakLength) / 4);

    float leftTime = abs(leftFreeTime - episodeLength);
    if (leftFreeTime >= episodeLength)
    {
        std::cout << "You have enough time to watch " << series << " and left with " << ceil(leftTime) << " minutes free time.";
    }
    else
    {
        std::cout << "You don't have enough time to watch " << series << ", you need " << ceil(leftTime) << " more minutes.";
    }

    return 0;
}