#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string fuelType, cardOwnership;
    float fuelQuantity;

    std::getline(std::cin, fuelType);
    std::cin >> fuelQuantity;
    std::cin.ignore();
    std::getline(std::cin, cardOwnership);

    float gasolinePrice = 2.22;
    float dieselPrice = 2.33;
    float gasPrice = 0.93;

    float price;
    if (fuelType == "Gasoline")
    {
        if (cardOwnership == "Yes")
        {
            gasolinePrice -= 0.18;
            price += gasolinePrice * fuelQuantity;
        }
        else
        {
            price += gasolinePrice * fuelQuantity;
        }
    }
    else if (fuelType == "Diesel")
    {
        if (cardOwnership == "Yes")
        {
            dieselPrice -= 0.12;
            price += dieselPrice * fuelQuantity;
        }
        else
        {
            price += dieselPrice * fuelQuantity;
        }
    }
    else if (fuelType == "Gas")
    {
        if (cardOwnership == "Yes")
        {
            gasPrice -= 0.08;
            price += gasPrice * fuelQuantity;
        }
        else
        {
            price += gasPrice * fuelQuantity;
        }
    }

    if (fuelQuantity >= 20 && fuelQuantity <= 25)
    {
        price -= (price * 0.08);
    }
    else if (fuelQuantity > 25)
    {
        price -= (price * 0.1);
    }

    std::cout << std::fixed << std::setprecision(2) << price << " lv." << std::endl;

    return 0;
}