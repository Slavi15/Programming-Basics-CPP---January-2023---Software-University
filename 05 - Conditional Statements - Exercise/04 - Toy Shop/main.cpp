#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float excursionCost;
    int puzzlesCount, dollsCount, teddyBearsCount, minionsCount, trucksCount;

    std::cin >> excursionCost >> puzzlesCount >> dollsCount >> teddyBearsCount >> minionsCount >> trucksCount;

    const float puzzlePrice = 2.6;
    const int dollPrice = 3;
    const float teddyBearPrice = 4.1;
    const float minionPrice = 8.2;
    const int truckPrice = 2;

    float money = (puzzlesCount * puzzlePrice) + (dollsCount * dollPrice) + (teddyBearsCount * teddyBearPrice) + (minionsCount * minionPrice) + (trucksCount * truckPrice);
    int toysCount = puzzlesCount + teddyBearsCount + minionsCount + dollsCount + trucksCount;

    if (toysCount >= 50)
        money -= (money * 0.25);

    money -= (money * 0.1);

    float leftMoney = abs(excursionCost - money);

    money >= excursionCost ?
        std::cout << std::fixed << std::setprecision(2) << "Yes! " << leftMoney << " lv left." :
        std::cout << std::fixed << std::setprecision(2) << "Not enough money! " << leftMoney << " lv needed.";

    return 0;
}