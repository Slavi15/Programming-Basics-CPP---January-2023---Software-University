#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string text;

        std::getline(std::cin, text);

        if (text != "Stop")
        {
            std::cout << text << std::endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}