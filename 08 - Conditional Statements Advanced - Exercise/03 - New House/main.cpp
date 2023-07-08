#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

int main()
{
    std::string flowerType;
    int flowersCount, budget;

    std::cin >> flowerType >> flowersCount >> budget;

    const float rosesPrice = 5;
    const float dahliasPrice = 3.8;
    const float tulipsPrice = 2.8;
    float narcissusPrice = 3;
    float gladiolusPrice = 2.5;

    float price;

    if (flowerType == "Roses")
    {
        price = rosesPrice * flowersCount;

        if (flowersCount > 80)
            price -= (price * 0.1);
    }
    else if (flowerType == "Dahlias")
    {
        price = dahliasPrice * flowersCount;

        if (flowersCount > 90)
            price -= (price * 0.15);
    }
    else if (flowerType == "Tulips")
    {
        price = tulipsPrice * flowersCount;

        if (flowersCount > 80)
            price -= (price * 0.15);
    }
    else if (flowerType == "Narcissus")
    {
        if (flowersCount < 120)
            narcissusPrice += (narcissusPrice * 0.15);

        price = narcissusPrice * flowersCount;
    }
    else if (flowerType == "Gladiolus")
    {
        if (flowersCount < 80)
            gladiolusPrice += (gladiolusPrice * 0.2);

        price = gladiolusPrice * flowersCount;
    }

    float leftMoney = abs(price - budget);
    if (budget >= price)
    {
        std::cout << std::fixed << std::setprecision(2) << "Hey, you have a great garden with " << flowersCount << " " << flowerType << " and " << leftMoney << " leva left." << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << "Not enough money, you need " << leftMoney << " leva more." << std::endl;
    }

    return 0;
}