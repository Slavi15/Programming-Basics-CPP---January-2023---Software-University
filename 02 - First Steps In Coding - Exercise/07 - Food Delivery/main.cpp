#include <iostream>

int main()
{
    int chickenMenuCount, fishMenuCount, vegetarianMenuCount;

    std::cin >> chickenMenuCount >> fishMenuCount >> vegetarianMenuCount;

    float chickenMenuPrice = 10.35;
    float fishMenuPrice = 12.4;
    float vegetarianMenuPrice = 8.15;

    float menuPrice = (chickenMenuCount * chickenMenuPrice) + (fishMenuCount * fishMenuPrice) + (vegetarianMenuCount * vegetarianMenuPrice);
    float menuPriceWithDessert = menuPrice + (menuPrice * 0.2) + 2.5;

    std::cout << menuPriceWithDessert  << std::endl;

    return 0;
}