#include <iostream>
#include <string>

int main()
{
    int degrees;
    std::string text;

    std::cin >> degrees >> text;

    std::string outfit, shoes;

    if (text == "Morning")
    {
        if (degrees >= 10 && degrees <= 18)
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (degrees > 18 && degrees <= 24)
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (degrees > 24)
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    }
    else if (text == "Afternoon")
    {
        if (degrees >= 10 && degrees <= 18)
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (degrees > 18 && degrees <= 24)
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (degrees > 24)
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    }
    else if (text == "Evening")
    {
        outfit = "Shirt";
        shoes = "Moccasins";
    }

    std::cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << '.' << std::endl;

    return 0;
}