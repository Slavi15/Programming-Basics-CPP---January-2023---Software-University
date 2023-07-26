#include <iostream>
#include <math.h>

int main()
{
    float money;

    std::cin >> money;

    int count = 0;

    while (true)
    {
        if (money >= 2)
        {
            money -= 2;
        }
        else if (money >= 1)
        {
            money -= 1;
        }
        else if (money >= 0.5)
        {
            money -= 0.5;
        }
        else if (money >= 0.2)
        {
            money -= 0.2;
        }
        else if (money >= 0.1)
        {
            money -= 0.1;
        }
        else if (money >= 0.05)
        {
            money -= 0.05;
        }
        else if (money >= 0.02)
        {
            money -= 0.02;
        }
        else if (money >= 0.01)
        {
            money -= 0.01;
        }

        count += 1;

        if (money == 0)
        {
            std::cout << count << std::endl;
            break;
        }
    }
}