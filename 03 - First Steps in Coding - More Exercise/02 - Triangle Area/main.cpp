#include <iostream>
#include <iomanip>

int main()
{
    float a, h;

    std::cin >> a >> h;

    float area = a * h / 2;

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}