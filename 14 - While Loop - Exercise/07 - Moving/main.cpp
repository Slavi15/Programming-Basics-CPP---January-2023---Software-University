#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int width, length, height;

    std::cin >> width >> length >> height;

    int space = width * length * height;

    while (true)
    {
        std::string input;

        std::cin >> input;

        if (input != "Done")
        {
            space -= std::stoi(input);

            if (space < 0)
            {
                std::cout << "No more free space! You need " << abs(space) << " Cubic meters more." << std::endl;
                break;
            }
        }
        else
        {
            std::cout << space << " Cubic meters left." << std::endl;
            break;
        }
    }
}