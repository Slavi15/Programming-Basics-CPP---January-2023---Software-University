#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float filmBudget, statClothesPrice;
    int statsCount;

    std::cin >> filmBudget >> statsCount >> statClothesPrice;

    float decorPrice = filmBudget * 0.1;

    if (statsCount > 150)
        statClothesPrice -= (statClothesPrice * 0.1);

    float stats = statsCount * statClothesPrice;

    float money = stats + decorPrice;
    float leftMoney = abs(filmBudget - money);

    if (money > filmBudget)
    {
        std::cout << std::fixed << std::setprecision(2) << "Not enough money!\nWingard needs " << leftMoney << " leva more.";
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "Action!\nWingard starts filming with " << leftMoney << " leva left.";
    }

    return 0;
}