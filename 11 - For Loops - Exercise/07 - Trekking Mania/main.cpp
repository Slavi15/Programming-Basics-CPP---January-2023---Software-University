#include <iostream>
#include <iomanip>

int main()
{
    int groups;

    std::cin >> groups;

    float musala = 0, monblan = 0, kilimanjaro = 0, k2 = 0, everest = 0, people = 0;

    for (int i = 0; i < groups; i++)
    {
        int peopleInGroup;

        std::cin >> peopleInGroup;

        people += peopleInGroup;

        if (peopleInGroup <= 5)
        {
            musala += peopleInGroup;
        }
        else if (peopleInGroup >= 6 && peopleInGroup <= 12)
        {
            monblan += peopleInGroup;
        }
        else if (peopleInGroup >= 13 && peopleInGroup <= 25)
        {
            kilimanjaro += peopleInGroup;
        }
        else if (peopleInGroup >= 26 && peopleInGroup <= 40)
        {
            k2 += peopleInGroup;
        }
        else
        {
            everest += peopleInGroup;
        }
    }

    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    p1 = (musala / people) * 100;
    p2 = (monblan / people) * 100;
    p3 = (kilimanjaro / people) * 100;
    p4 = (k2 / people) * 100;
    p5 = (everest / people) * 100;

    std::cout << std::fixed << std::setprecision(2) << p1 << "%\n" << p2 << "%\n" << p3 << "%\n" << p4 << "%\n" << p5 << "%" << std::endl;

    return 0;
}