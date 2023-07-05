#include <iostream>
#include <iomanip>

int main()
{
    float celsius;

    std::cin >> celsius;

    float fahrenheit = (celsius * static_cast<double>(9) / 5) + 32;

    std::cout << std::fixed << std::setprecision(2) << fahrenheit << std::endl;

    return 0;
}