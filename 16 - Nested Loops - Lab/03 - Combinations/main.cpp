#include <iostream>

int main()
{
    int n, combs = 0;

    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if ((i + j + k) == n)
                {
                    combs++;
                }
            }
        }
    }

    std::cout << combs << std::endl;

    return 0;
}