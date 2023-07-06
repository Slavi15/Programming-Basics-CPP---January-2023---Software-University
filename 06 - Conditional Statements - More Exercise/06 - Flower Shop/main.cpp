#include <iostream>
#include <math.h>

int main()
{
    int magnoliaCount, hyacinthCount, rosesCount, cactiCount;
    float presentPrice;

    std::cin >> magnoliaCount >> hyacinthCount >> rosesCount >> cactiCount >> presentPrice;

    const float magnoliaPrice = 3.25;
    const float hyacinthPrice = 4;
    const float rosesPrice = 3.5;
    const float cactiPrice = 8;

    float income = (magnoliaCount * magnoliaPrice) + (hyacinthCount * hyacinthPrice) + (rosesCount * rosesPrice) + (cactiCount * cactiPrice);
    income -= (income * 0.05);

    float leftMoney = abs(income - presentPrice);

    if (income >= presentPrice)
    {
        std::cout << "She is left with " << floor(leftMoney) << " leva." << std::endl;
    }
    else
    {
        std::cout << "She will have to borrow " << ceil(leftMoney) << " leva." << std::endl;
    }

    return 0;
}