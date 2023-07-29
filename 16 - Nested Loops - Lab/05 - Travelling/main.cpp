#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string country;
        int minimalBudget;

        std::cin >> country;

        if (country == "End")
            break;

        std::cin >> minimalBudget;

        int sum = 0;

        while (true)
        {
            int spentMoney;

            std::cin >> spentMoney;

            sum += spentMoney;

            if (sum >= minimalBudget)
            {
                std::cout << "Going to " << country << '!' << std::endl;
                break;
            }
        }
    }

    return 0;
}