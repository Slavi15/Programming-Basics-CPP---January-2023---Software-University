#include <iostream>

int main()
{
    int dogFood;
    int catFood;

    std::cin >> dogFood;
    std::cin >> catFood;

    float total = (dogFood * 2.5) + (catFood * 4);

    std::cout << total << " lv." << std::endl;

    return 0;
}