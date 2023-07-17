#include <iostream>
#include <iomanip>

int main()
{
    int moves;

    std::cin >> moves;

    float p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0, p5Count = 0, p6Count = 0, points = 0;

    for (int i = 0; i < moves; i++)
    {
        int number;

        std::cin >> number;

        if (number >= 0 && number <= 9)
        {
            points += (0.2 * number);
            p1Count += 1;
        }
        else if (number >= 10 && number <= 19)
        {
            points += (0.3 * number);
            p2Count += 1;
        }
        else if (number >= 20 && number <= 29)
        {
            points += (0.4 * number);
            p3Count += 1;
        }
        else if (number >= 30 && number <= 39)
        {
            points += 50;
            p4Count += 1;
        }
        else if (number >= 40 && number <= 50)
        {
            points += 100;
            p5Count += 1;
        }
        else
        {
            points /= 2;
            p6Count += 1;
        }
    }

    float p1 = (p1Count / moves) * 100;
    float p2 = (p2Count / moves) * 100;
    float p3 = (p3Count / moves) * 100;
    float p4 = (p4Count / moves) * 100;
    float p5 = (p5Count / moves) * 100;
    float p6 = (p6Count / moves) * 100;

    std::cout << std::fixed << std::setprecision(2) << points << 
        "\nFrom 0 to 9: " << p1 << 
        "%\nFrom 10 to 19: " << p2 << 
        "%\nFrom 20 to 29: " << p3 << 
        "%\nFrom 30 to 39: " << p4 << 
        "%\nFrom 40 to 50: " << p5 << 
        "%\nInvalid numbers: " << p6 << "%" << std::endl;

    return 0; 
}