#include <iostream>

int main()
{
    int oneLev, twoLeva, fiveLeva, money;

    std::cin >> oneLev >> twoLeva >> fiveLeva >> money;

    for (int i = 0; i <= oneLev; i++)
    {
        for (int j = 0; j <= twoLeva; j++)
        {
            for (int k = 0; k <= fiveLeva; k++)
            {
                if ((i * 1) + (j * 2) + (k * 5) == money)
                    std::cout << i << " * 1 lv. + " << j << " * 2 lv. + " << k << " * 5 lv. = " << money << " lv." << std::endl;
            }
        }
    }

    return 0;
}