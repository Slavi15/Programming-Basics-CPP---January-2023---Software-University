#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

int main()
{
    float radians;

    std::cin >> radians;

    int degree = round(radians * (180 / M_PI));

    std::cout << degree << std::endl;

    return 0;
}