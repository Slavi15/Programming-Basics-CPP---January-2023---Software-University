#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int width, length;

    std::cin >> width >> length;

    int pieces = width * length;

    while (true)
    {
        std::string input;

        std::cin >> input;

        if (input != "STOP")
        {
            pieces -= std::stoi(input);

            if (pieces < 0)
            {
                std::cout << "No more cake left! You need " << abs(pieces) << " pieces more." << std::endl;
                break;
            }
        }
        else
        {
            std::cout << pieces << " pieces are left." << std::endl;
            break;
        }
    }
}