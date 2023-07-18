#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string name;

    std::cin >> name;

    float allMarks = 0;
    int passed = 1;
    int fails = 0;

    while (passed < 13)
    {
        float mark;

        std::cin >> mark;

        allMarks += mark;

        if (mark >= 4)
        {
            passed += 1;
        }
        else
        {
            fails += 1;
        }

        if (fails > 1)
        {
            std::cout << name << " has been excluded at " << passed << " grade" << std::endl;
            break;
        }
        else if (passed == 13 && fails <= 1)
        {
            float average = allMarks / 12;

            std::cout << std::fixed << std::setprecision(2) << name << " graduated. Average grade: " << average << std::endl;

            break;
        }
    }

    return 0;
}