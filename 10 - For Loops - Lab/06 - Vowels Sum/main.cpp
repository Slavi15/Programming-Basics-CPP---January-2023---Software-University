#include <iostream>
#include <string>

int main()
{
    std::string text;

    std::getline(std::cin, text);

    int sum = 0;

    for (char& letter : text)
    {
        if (letter == 'a')
        {
            sum += 1;
        }
        else if (letter == 'e')
        {
            sum += 2;
        }
        else if (letter == 'i')
        {
            sum += 3;
        }
        else if (letter == 'o')
        {
            sum += 4;
        }
        else if (letter == 'u')
        {
            sum += 5;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}