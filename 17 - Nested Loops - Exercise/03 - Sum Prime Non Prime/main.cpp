#include <iostream>
#include <math.h>
#include <string>

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
    int sumPrimes = 0, sumNonPrimes = 0;

    while (true)
    {
        std::string input;

        std::cin >> input;

        if (input != "stop")
        {
            int number = std::stoi(input);

            if (number < 0)
            {
                std::cout << "Number is negative." << std::endl;
            }
            else if (isPrime(number) == 1)
            {
                sumPrimes += number;
            }
            else if (isPrime(number) == 0)
            {
                sumNonPrimes += number;
            }
        }
        else
        {
            break;
        }
    }

    std::cout << "Sum of all prime numbers is: " << sumPrimes << std::endl;
    std::cout << "Sum of all non prime numbers is: " << sumNonPrimes << std::endl;

    return 0;
}