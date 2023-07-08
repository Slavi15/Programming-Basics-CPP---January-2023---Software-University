#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string projection;
    int r, c;

    std::cin >> projection >> r >> c;

    const int premierePrice = 12;
    const float normalPrice = 7.5;
    const int discountPrice = 5;

    float income;

    if (projection == "Premiere")
    {
        income = r * c * premierePrice;
    }
    else if (projection == "Normal")
    {
        income = r * c * normalPrice;
    }
    else if (projection == "Discount")
    {
        income = r * c * discountPrice;
    }

    std::cout << std::fixed << std::setprecision(2) << income << " leva" << std::endl;

    return 0;
}