#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <locale>

int main()
{
    std::vector<char> letters, found;

    while (true)
    {
        char letter;

        std::cin >> letter;

        if (letter != 'E')
        {
            if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
            {
                if (letter != 'c' && letter != 'o' && letter != 'n')
                {
                    letters.push_back(letter);
                }
                else
                {
                    if (std::find(found.begin(), found.end(), letter) != found.end())
                    {
                        letters.push_back(letter);
                    }
                    else
                    {
                        found.push_back(letter);
                    }

                    if (found.size() == 3)
                    {
                        letters.push_back(' ');
                        found.clear();
                    }
                }
            }
        }
        else
        {
            auto result = std::find_if(letters.rbegin(), letters.rend(),
                                    [](char csrt) { return csrt == ' '; });

            std::string str(result, letters.rend());

            std::reverse(str.begin(), str.end());

            std::cout << str << std::endl;

            break;
        }
    }
}