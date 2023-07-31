#include <iostream>
#include <sstream>
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
    int startFirst, finalFirst, startDiff, finalDiff;

    std::cin >> startFirst >> finalFirst >> startDiff >> finalDiff;

    for (int i = startFirst; i <= (startFirst + startDiff); i++)
    {
        for (int j = finalFirst; j <= (finalFirst + finalDiff); j++)
        {
            if (isPrime(i) == 1 && isPrime(j) == 1)
            {
                std::ostringstream stream;

                stream << i << j;

                std::string text = stream.str();

                std::cout << text << std::endl;
            }
        }
    }

    return 0;
}