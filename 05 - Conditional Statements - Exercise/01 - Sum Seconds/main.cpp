#include <iostream>

int main()
{
    int secondsOne, secondsTwo, secondsThree;

    std::cin >> secondsOne >> secondsTwo >> secondsThree;

    int seconds = secondsOne + secondsTwo + secondsThree;
    int minutes = seconds / 60;

    seconds -= (minutes * 60);

    seconds < 10 ? std::cout << minutes << ":0" << seconds << std::endl : std::cout << minutes << ':' << seconds << std::endl;

    return 0;
}