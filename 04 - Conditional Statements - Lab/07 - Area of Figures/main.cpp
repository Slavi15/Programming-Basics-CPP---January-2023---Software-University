#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

int main()
{
    std::string figure;

    std::getline(std::cin, figure);

    float area;

    if (figure == "square")
    {
        float a;

        std::cin >> a;

        area = pow(a, 2);
    }
    else if (figure == "rectangle")
    {
        float a, b;

        std::cin >> a >> b;

        area = a * b;
    }
    else if (figure == "circle")
    {
        float r;

        std::cin >> r;

        area = M_PI * pow(r, 2);
    }
    else if (figure == "triangle")
    {
        float a, h;

        std::cin >> a >> h;

        area = a * h / 2;
    }

    std::cout << std::fixed << std::setprecision(3) << area << std::endl;

    return 0;
}