#include <iostream>

int main()
{
    for (int i = 0; i <= 1000; i++)
    {
        if (i % 10 == 7)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}