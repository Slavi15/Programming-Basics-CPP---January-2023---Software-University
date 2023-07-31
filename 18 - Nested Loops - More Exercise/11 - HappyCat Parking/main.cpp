#include <iostream>
#include <iomanip>

int main()
{
    int days, hours;

    std::cin >> days >> hours;

    float total = 0;

    for (int i = 1; i <= days; i++)
    {
        float money = 0;

        for (int j = 1; j <= hours; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                money += 2.5;
            }
            else if (i % 2 != 0 && j % 2 == 0)
            {
                money += 1.25;
            }
            else
            {
                money += 1;
            }
        }

        total += money;

        std::cout << std::fixed << std::setprecision(2) << "Day: " << i << " - " << money << " leva" << std::endl;
    }

    std::cout << std::fixed << std::setprecision(2) << "Total: " << total << " leva" << std::endl;

    return 0;
}