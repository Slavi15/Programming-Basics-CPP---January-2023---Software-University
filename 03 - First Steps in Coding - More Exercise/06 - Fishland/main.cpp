#include <iostream>
#include <iomanip>

int main()
{
    float mackerelPrice, spratPrice, bonitoKG, horseMackerelKG;
    int musselsKG;

    std::cin >> mackerelPrice >> spratPrice >> bonitoKG >> horseMackerelKG >> musselsKG;

    float bonitoPrice = mackerelPrice + (mackerelPrice * 0.6);
    float horseMackerelPrice = spratPrice + (spratPrice * 0.8);
    float musselsPrice = 7.5;

    float money = (bonitoKG * bonitoPrice) + (horseMackerelKG * horseMackerelPrice) + (musselsKG * musselsPrice);

    std::cout << std::fixed << std::setprecision(2) << money << std::endl;

    return 0;
}