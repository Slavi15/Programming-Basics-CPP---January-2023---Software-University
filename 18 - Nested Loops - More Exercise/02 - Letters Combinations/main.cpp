#include <iostream>

int main()
{
    char start, final, exception;

    std::cin >> start >> final >> exception;

    int startNumber = int(start), finalNumber = int(final), exceptionNumber = int(exception);

    int count = 0;

    for (int i = startNumber; i <= finalNumber; i++)
    {
        for (int j = startNumber; j <= finalNumber; j++)
        {
            for (int k = startNumber; k <= finalNumber; k++)
            {
                if (i != exceptionNumber && j != exceptionNumber && k != exceptionNumber)
                {
                    char chOne = i, chTwo = j, chThree = k;

                    std::cout << chOne << chTwo << chThree << ' ';

                    count++;
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}