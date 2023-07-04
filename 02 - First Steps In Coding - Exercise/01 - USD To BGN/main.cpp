#include <iostream>
#include <iomanip>

int main()
{
    float usd;
    std::cin >> usd;

    float bgn = usd * 1.79549;

    std::cout << std::fixed << std::setprecision(2) << bgn << std::endl;

    return 0;
}