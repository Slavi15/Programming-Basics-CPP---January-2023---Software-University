#include <iostream>
#include <string>

int main()
{
    float degrees;

    std::cin >> degrees;

    if (degrees >= 5 && degrees <= 11.9)
    {
        std::cout << "Cold" << std::endl;
    }
    else if (degrees >= 12 && degrees <= 14.9)
    {
        std::cout << "Cool" << std::endl;
    }
    else if (degrees >= 15 && degrees <= 20)
    {
        std::cout << "Mild" << std::endl;
    }
    else if (degrees >= 20.1 && degrees <= 25.9)
    {
        std::cout << "Warm" << std::endl;
    }
    else if (degrees >= 26 && degrees <= 35)
    {
        std::cout << "Hot" << std::endl;
    }
    else
    {
        std::cout << "unknown" << std::endl;
    }
}