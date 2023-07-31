#include <iostream>

int main()
{
    int n, l;

    std::cin >> n >> l;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 'a'; k < ('a' + l); k++)
            {
                for (int m = 'a'; m < ('a' + l); m++)
                {
                    for (int p = 1; p <= n; p++)
                    {
                        if (p > i && p > j)
                            std::cout << i << j << char(k) << char(m) << p << ' ';
                    }
                }
            }
        }
    }

    return 0;
}