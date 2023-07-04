#include <iostream>

int main()
{
    int annualTax;

    std::cin >> annualTax;

    float sneakersPrice = annualTax - (annualTax * 0.4);
    float kitPrice = sneakersPrice - (sneakersPrice * 0.2);
    float basketBallPrice = kitPrice * 0.25;
    float accessoryPrice = basketBallPrice * 0.2;

    float expenses = annualTax + sneakersPrice + kitPrice + basketBallPrice + accessoryPrice;

    std::cout << expenses << std::endl;

    return 0;
}