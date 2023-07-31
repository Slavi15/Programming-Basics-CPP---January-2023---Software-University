#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;

    int current = 1;
    bool isBigger = false;

    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            if (current > n)
            {
                isBigger = true;
                break;
            }

            std::cout << current << ' ';
            current++;
        }

        if (isBigger) break;

        std::cout << std::endl;
    }

    return 0;
}