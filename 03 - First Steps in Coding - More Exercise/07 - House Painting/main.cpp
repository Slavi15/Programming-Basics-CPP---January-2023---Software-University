#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    float x, y, h;

    std::cin >> x >> y >> h;

    float frontArea = pow(x, 2) - (1.2 * 2);
    float backArea = pow(x, 2);
    float sideAreas = ((x * y) - pow(1.5, 2)) * 2;
    float roofArea = (x * y * 2) + (x * h);

    float greenArea = frontArea + backArea + sideAreas;

    float greenLitres = greenArea / 3.4;
    float redLitres = roofArea / 4.3;

    std::cout << std::fixed << std::setprecision(2) << greenLitres << "\n" << redLitres << std::endl;

    return 0;
}