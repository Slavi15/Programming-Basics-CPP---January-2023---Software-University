#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int capacity, fans;

    std::cin >> capacity >> fans;

    float aFans = 0, bFans = 0, cFans = 0, dFans = 0;

    for (int i = 0; i < fans; i++)
    {
        std::string sector;

        std::cin >> sector;

        if (sector == "A")
        {
            aFans += 1;
        }
        else if (sector == "B")
        {
            bFans += 1;
        }
        else if (sector == "V")
        {
            cFans += 1;
        }
        else if (sector == "G")
        {
            dFans += 1;
        }
    }

    float p1 = (aFans / fans) * 100;
    float p2 = (bFans / fans) * 100;
    float p3 = (cFans / fans) * 100;
    float p4 = (dFans / fans) * 100;
    float percentage = (static_cast<double>(fans) / capacity) * 100;

    std::cout << std::fixed << std::setprecision(2) <<
        p1 << "%\n" <<
        p2 << "%\n" <<
        p3 << "%\n" <<
        p4 << "%\n" <<
        percentage << "%" << std::endl;

    return 0;
}