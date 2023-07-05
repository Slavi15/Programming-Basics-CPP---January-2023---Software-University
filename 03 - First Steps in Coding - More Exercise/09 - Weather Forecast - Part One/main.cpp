#include <iostream>
#include <string>

int main()
{
    std::string weather;

    std::cin >> weather;

    if (weather == "sunny")
    {
        std::cout << "It's warm outside!" << std::endl;
    }
    else
    {
        std::cout << "It's cold outside!" << std::endl;
    }

    return 0;
}