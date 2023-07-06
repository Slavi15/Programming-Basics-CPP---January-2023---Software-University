#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int n;
    std::string word;

    std::cin >> n;
    std::cin.ignore();
    std::getline(std::cin, word);

    float expense;
    if (n < 20)
    {
        expense += 0.7;
        if (word == "day")
        {
            expense += (n * 0.79);
        }
        else if (word == "night")
        {
            expense += (n * 0.9);
        }
    }
    else if (n >= 20 && n < 100)
    {
        expense += (n * 0.09);
    }
    else if (n >= 100)
    {
        expense += (n * 0.06);
    }

    std::cout << std::fixed << std::setprecision(2) << expense << std::endl;

    return 0;
}