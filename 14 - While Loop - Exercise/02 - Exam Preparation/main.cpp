#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int badMarks;

    std::cin >> badMarks;
    std::cin.ignore();

    int badCount = 0, marksCount = 0;

    float marksSum = 0;

    std::string lastProblem;

    while (true)
    {
        if (badCount >= badMarks)
        {
            std::cout << "You need a break, " << badCount << " poor grades." << std::endl;
            break;
        }

        std::string task;
        int mark;

        std::getline(std::cin, task);

        if (task == "Enough")
        {
            float average = marksSum / marksCount;

            std::cout << std::fixed << std::setprecision(2) <<
                "Average score: " << average <<
                "\nNumber of problems: " << marksCount <<
                "\nLast problem: " << lastProblem << std::endl;
            
            break;
        }

        std::cin >> mark;
        std::cin.ignore();

        lastProblem = task;
        marksSum += mark;
        marksCount += 1;

        if (mark <= 4)
        {
            badCount += 1;
        }
    }

    return 0;
}