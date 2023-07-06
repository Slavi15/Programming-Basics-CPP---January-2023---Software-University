#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float budget;
    int gpuCount, cpuCount, ramCount;

    std::cin >> budget >> gpuCount >> cpuCount >> ramCount;

    int gpuPrice = 250;
    int gpu = gpuPrice * gpuCount;

    float cpuPrice = gpu * 0.35;
    float ramPrice = gpu * 0.1;

    float money = gpu + (cpuPrice * cpuCount) + (ramPrice * ramCount);

    if (gpuCount > cpuCount)
        money -= (money * 0.15);

    float leftMoney = abs(money - budget);
    if (budget >= money)
    {
        std::cout << std::fixed << std::setprecision(2) << "You have " << leftMoney << " leva left!";
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "Not enough money! You need " << leftMoney << " leva more!";
    }

    return 0;
}