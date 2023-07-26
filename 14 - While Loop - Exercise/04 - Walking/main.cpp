#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int steps = 0;

    while (true)
    {
        std::string input;

        std::getline(std::cin, input);

        if (input != "Going home")
        {
            steps += std::stoi(input);

            if (steps >= 10000)
            {
                std::cout << "Goal reached! Good job!" << std::endl;
                break;
            }
        }
        else
        {
            int finalSteps;

            std::cin >> finalSteps;

            steps += finalSteps;

            if (steps >= 10000)
            {
                std::cout << "Goal reached! Good job!" << std::endl;
                break;
            }
            else
            {
                int diff = abs(steps - 10000);

                std::cout << diff << " more steps to reach goal." << std::endl;
                break;
            }
        }
    }
}