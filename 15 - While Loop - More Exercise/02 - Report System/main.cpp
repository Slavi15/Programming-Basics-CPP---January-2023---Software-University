#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int expectedMoney;

    std::cin >> expectedMoney;

    int index = 0;

    float csMoney = 0, ccMoney = 0;
    int csPeople = 0, ccPeople = 0;

    while (true)
    {
        std::string input;

        std::cin >> input;

        index++;

        if (input != "End")
        {
            if (index % 2 == 0) // && std::stoi(input) < 100
            {
                if (std::stoi(input) < 10)
                {
                    std::cout << "Error in transaction!" << std::endl;
                }
                else
                {
                    std::cout << "Product sold!" << std::endl;

                    ccMoney += std::stoi(input);
                    ccPeople += 1;
                }
            }
            else //  && std::stoi(input) > 100
            {
                if (std::stoi(input) > 100)
                {
                    std::cout << "Error in transaction!" << std::endl;
                }
                else
                {
                    std::cout << "Product sold!" << std::endl;

                    csMoney += std::stoi(input);
                    csPeople += 1;
                }
            }

            if ((csMoney + ccMoney) >= expectedMoney)
            {
                std::cout << std::fixed << std::setprecision(2) << "Average CS: " << (csMoney / csPeople) << "\nAverage CC: " << (ccMoney / ccPeople) << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "Failed to collect required money for charity." << std::endl;
            break;
        }
    }
}