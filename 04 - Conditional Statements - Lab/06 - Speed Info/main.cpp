#include <iostream>

int main()
{
    float velocity;

    std::cin >> velocity;

    if (velocity <= 10)
    {
        std::cout << "slow" << std::endl;
    }
    else if (velocity > 10 && velocity <= 50)
    {
        std::cout << "average" << std::endl;
    }
    else if (velocity > 50 && velocity <= 150)
    {
        std::cout << "fast" << std::endl;
    }
    else if (velocity > 150 && velocity <= 1000)
    {
        std::cout << "ultra fast" << std::endl;
    }
    else
    {
        std::cout << "extremely fast" << std::endl;
    }
}