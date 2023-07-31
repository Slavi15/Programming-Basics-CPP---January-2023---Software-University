#include <iostream>

int main()
{
    char lastSector;

    int rows, placesOdd;

    std::cin >> lastSector >> rows >> placesOdd;

    int allPlaces = 0;

    for (int i = 'A'; i <= lastSector; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j % 2 != 0)
            {
                for (int k = 'a'; k < 'a' + placesOdd; k++)
                {
                    char first = i, third = k;

                    std::cout << first << j << third << std::endl;

                    allPlaces++;
                }
            }
            else
            {
                for (int k = 'a'; k < 'a' + (placesOdd + 2); k++)
                {
                    char first = i, third = k;

                    std::cout << first << j << third << std::endl;

                    allPlaces++;
                }
            }
        }
        rows++;
    }

    std::cout << allPlaces << std::endl;

    return 0;
}