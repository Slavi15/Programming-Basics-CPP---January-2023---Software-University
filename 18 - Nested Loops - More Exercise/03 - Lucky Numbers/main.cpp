#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                for (int l = 1; l <= 9; l++)
                {
                    if ((i + j) == (k + l) && n % (i + j) == 0)
                        std::cout << i << j << k << l << ' ';
                }
            }
        }
    }

    return 0;
}