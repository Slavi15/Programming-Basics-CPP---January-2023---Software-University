#include <iostream>

int main()
{
    int start, final, magicNumber;

    std::cin >> start >> final >> magicNumber;

    int combination = 0;

    for (int i = start; i <= final; i++)
    {
        for (int j = start; j <= final; j++)
        {
            combination++;

            if ((i + j) == magicNumber)
            {
                std::cout << "Combination N:" << combination << " (" << i << " + " << j << " = " << magicNumber << ')' << std::endl;
                return 0;
            }
        }
    }

    std::cout << combination << " combinations - neither equals " << magicNumber << std::endl;

    return 0;
}