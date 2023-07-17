#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

int main()
{
    std::string artist;
    float academyPoints;
    int n;

    std::getline(std::cin, artist);
    std::cin >> academyPoints >> n;
    std::cin.ignore();

    float score;

    for (int i = 0; i < n; i++)
    {
        std::string assessor;
        float pts;

        std::getline(std::cin, assessor);
        std::cin >> pts;
        std::cin.ignore();

        score = (assessor.length() * pts) / 2;

        academyPoints += score;

        if (academyPoints > 1250.5) break;
    }

    if (academyPoints > 1250.5)
    {
        std::cout << std::fixed << std::setprecision(1) << "Congratulations, " << artist << " got a nominee for leading role with " << academyPoints << "!" << std::endl;
    }
    else
    {
        float diff = abs(1250.5 - academyPoints);

        std::cout << std::fixed << std::setprecision(1) << "Sorry, " << artist << " you need " << diff << " more!" << std::endl;
    }

    return 0;
}