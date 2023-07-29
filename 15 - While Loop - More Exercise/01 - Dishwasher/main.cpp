#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int bottles;

    std::cin >> bottles;

    int ml = bottles * 750;

    int index = 0, dishes = 0, pots = 0;

    while (true)
    {
        std::string input;

        std::cin >> input;

        index++;

        if (input != "End")
        {
            if (index % 3 != 0)
            {
                ml -= (std::stoi(input) * 5);
                
                dishes += std::stoi(input);
            }
            else
            {
                ml -= (std::stoi(input) * 15);

                pots += std::stoi(input);
            }

            if (ml < 0)
            {
                std::cout << "Not enough detergent, " << abs(ml) << " ml. more necessary!" << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "Detergent was enough!\n" << dishes << " dishes and " << pots << " pots were washed.\nLeftover detergent " << ml << " ml." << std::endl;
            break;
        }
    }
}