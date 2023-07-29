#include <iostream>

int main()
{
    int floors, rooms;

    std::cin >> floors >> rooms;

    for (int i = floors; i > 0; i--)
    {
        for (int j = 0; j < rooms; j++)
        {
            if (i == floors)
            {
                std::cout << 'L' << i << j << ' ';
            }
            else if (i % 2 != 0)
            {
                std::cout << 'A' << i << j << ' ';
            }
            else if (i % 2 == 0)
            {
                std::cout << 'O' << i << j << ' ';
            }
        }
        std::cout << "\n";
    }

    return 0;
}