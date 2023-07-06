#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

int main()
{
    std::string fuelType;
    int fuelLitres;

    std::getline(std::cin, fuelType);
    std::cin >> fuelLitres;

    if (fuelType == "Diesel" || fuelType == "Gasoline" || fuelType == "Gas")
    {
        std::transform(fuelType.begin(), fuelType.end(), fuelType.begin(), 
                    [](unsigned char c) {
                        return std::tolower(c);
                });

        if (fuelLitres < 25)
        {
            std::cout << "Fill your tank with " << fuelType << '!' << std::endl;
        }
        else if (fuelLitres >= 25)
        {
            std::cout << "You have enough " << fuelType << '.' << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid fuel!" << std::endl;
    }

    return 0;
}