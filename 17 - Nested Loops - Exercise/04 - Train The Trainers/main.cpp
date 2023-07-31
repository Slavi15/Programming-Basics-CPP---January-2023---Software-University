#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int n;

    std::cin >> n;
    std::cin.ignore();

    float allMarks = 0, allCount = 0;

    while (true)
    {
        std::string text;

        std::getline(std::cin, text);

        if (text == "Finish")
        {
            std::cout << std::fixed << std::setprecision(2) << "Student's final assessment is " << allMarks / allCount << '.' << std::endl;

            return 0;
        }

        float presentationMarks = 0;

        for (int j = 0; j < n; j++)
        {
            float mark;

            std::cin >> mark;

            allMarks += mark;
            allCount++;

            presentationMarks += mark;
        }

        std::cin.ignore();

        std::cout << std::fixed << std::setprecision(2) << text << " - " << presentationMarks / n << '.' << std::endl;
    }
}