#include <iostream>

int main()
{
    int start, final, magicNumber;

    std::cin >> start >> final >> magicNumber;

    int index = 0, match = 0;

    for (int i = start; i <= final; i++)
    {
        for (int j = start; j <= final; j++)
        {
            index++;

            if ((i + j) == magicNumber)
            {
                std::cout << "Combination N:" << index << " (" << i << " + " << j << " = " << magicNumber << ')' << std::endl;

                match++;

                return 0;
            }
        }
    }

    if (match == 0)
        std::cout << index << " combinations - neither equals " << magicNumber << std::endl;

    return 0;
}