#include <iostream>
#include <iomanip>

int main()
{
    float b1, b2, h;

    std::cin >> b1 >> b2 >> h;

    float area = ((b1 + b2) * h) / 2;

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}