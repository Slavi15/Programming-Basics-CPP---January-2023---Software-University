#include <iostream>
#include <math.h>

auto isPrime(int num)
{
    for (int i = 2, s = std::sqrt(num); i <= s; i++)
    {
        if (num % i == 0) return false;
    }
    return num > 1;
}

int main()
{
    int first, second, third;

    std::cin >> first >> second >> third;

    for (int i = 1; i <= first; i++)
    {
        for (int j = 1; j <= second; j++)
        {
            for (int k = 1; k <= third; k++)
            {
                if (i % 2 == 0 && k % 2 == 0 && isPrime(j) == 1)
                {
                    std::cout << i << ' ' << j << ' ' << k << std::endl;
                }
            }
        }
    }

    return 0;
}