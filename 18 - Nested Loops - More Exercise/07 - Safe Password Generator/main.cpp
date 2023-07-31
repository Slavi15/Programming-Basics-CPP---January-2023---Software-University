#include <iostream>

int main()
{
    int a, b, maximum;

    std::cin >> a >> b >> maximum;

    int combinations = 0;

    for (int i = 35; i <= 55; i++)
    {
        for (int j = 64; j <= 96; j++)
        {
            for (int k = 1; k <= a; k++)
            {
                for (int l = 1; l <= b; l++)
                {
                    if (combinations < maximum)
                    {
                        combinations++;

                        std::cout << char(i) << char(j) << k << l << char(j) << char(i) << '|';

                        if (k == a && l == b) return 0;

                        i++;
                        j++;

                        if (i > 55) i = 35;
                        if (j > 96) j = 64;
                    }
                }
            }
        }
    }

    return 0;
}