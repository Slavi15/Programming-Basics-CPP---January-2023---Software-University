#include <iostream>
#include <math.h>

int main()
{
    int n;

    std::cin >> n;

    // #1
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << pow(2, i) << std::endl;
        }
    }

    // #2
    // for (int i = 0; i <= n; i += 2)
    // {
    //     std::cout << pow(2, i) << std::endl;
    // }

    return 0;
}