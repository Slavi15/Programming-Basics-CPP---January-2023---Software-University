#include <iostream>
#include <iomanip>

int main()
{
    float vegetableKGPrice, fruitKGPrice;
    int vegetableKG, fruitKG;

    std::cin >> vegetableKGPrice >> fruitKGPrice >> vegetableKG >> fruitKG;

    float income = (vegetableKGPrice * vegetableKG) + (fruitKGPrice * fruitKG);
    float incomeEuro = income / 1.94;

    std::cout << std::fixed << std::setprecision(2) << incomeEuro << std::endl;

    return 0;
}