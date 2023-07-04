#include <iostream>

int main()
{
    int length;
    int width;

    std::cin >> length;
    std::cin >> width;

    int area = length * width;

    std::cout << area << std::endl;

    return 0;
}