#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float radius;

    std::cin >> radius;

    float area = M_PI * pow(radius, 2);
    float perimeter = M_PI * radius * 2;

    std::cout << std::fixed << std::setprecision(2) << area << "\n" << perimeter << std::endl;

    return 0;
}