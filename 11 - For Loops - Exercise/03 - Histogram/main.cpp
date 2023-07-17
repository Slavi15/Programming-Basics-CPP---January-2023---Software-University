#include <iostream>
#include <iomanip>

int main()
{
    unsigned int n;

    std::cin >> n;

    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        unsigned int number;

        std::cin >> number;

        count += 1;

        if (number < 200)
        {
            p1 += 1;
        }
        else if (number >= 200 && number < 400)
        {
            p2 += 1;
        }
        else if (number >= 400 && number < 600)
        {
            p3 += 1;
        }
        else if (number >= 600 && number < 800)
        {
            p4 += 1;
        }
        else
        {
            p5 += 1;
        }
    }

    float percentOne, percentTwo, percentThree, percentFour, percentFive;

    percentOne = (p1 / count) * 100;
    percentTwo = (p2 / count) * 100;
    percentThree = (p3 / count) * 100;
    percentFour = (p4 / count) * 100;
    percentFive = (p5 / count) * 100;

    std::cout << std::fixed << std::setprecision(2) << percentOne << "%\n" << percentTwo << "%\n" << percentThree << "%\n" << percentFour << "%\n" << percentFive << "%" << std::endl;

    return 0;
}