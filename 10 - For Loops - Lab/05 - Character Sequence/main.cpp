#include <iostream>
#include <string>

int main()
{
    std::string text;

    std::getline(std::cin, text);

    for (char& letter : text)
    {
        std::cout << letter << std::endl;
    }

    return 0;
}