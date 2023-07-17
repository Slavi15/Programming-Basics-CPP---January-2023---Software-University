#include <iostream>
#include <iomanip>

int main()
{
    int students;

    std::cin >> students;

    float fail = 0, medium = 0, good = 0, top = 0, allScores = 0;

    for (int i = 0; i < students; i++)
    {
        float mark;

        std::cin >> mark;

        allScores += mark;

        if (mark < 3)
        {
            fail += 1;
        }
        else if (mark >= 3 && mark < 4)
        {
            medium += 1;
        }
        else if (mark >= 4 && mark < 5)
        {
            good += 1;
        }
        else
        {
            top += 1;
        }
    }

    float p1 = (top / students) * 100;
    float p2 = (good / students) * 100;
    float p3 = (medium / students) * 100;
    float p4 = (fail / students) * 100;
    float average = allScores / students;

    std::cout << std::fixed << std::setprecision(2) << "Top students: " << p1 << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Between 4.00 and 4.99: " << p2 << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Between 3.00 and 3.99: " << p3 << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Fail: " << p4 << "%" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Average: " << average << std::endl;

    return 0;
}