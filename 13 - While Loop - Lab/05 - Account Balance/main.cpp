#include <iostream>
#include <iomanip>

int main()
{
    float allMoney = 0;

    std::string input;

    std::cin >> input;

    while (input != "NoMoreMoney")
    {
        float num = std::stof(input);

        if (num > 0)
        {
            allMoney += num;

            std::cout << std::fixed << std::setprecision(2) << "Increase: " << num << std::endl;
        }
        else
        {
            std::cout << "Invalid operation!" << std::endl;
            break;
        }

        std::cin >> input;
    }

    std::cout << std::fixed << std::setprecision(2) << "Total: " << allMoney << std::endl;

    return 0;
}