#include <iostream>
#include <string>

int main()
{
    float neededMoney, money;

    std::cin >> neededMoney >> money;

    int spendCount = 0, daysCount = 0;

    while (true)
    {
        std::string command;
        float sum;

        std::cin >> command >> sum;

        daysCount += 1;

        if (command == "spend")
        {
            money -= sum;

            if (money < 0) money = 0;

            spendCount += 1;
        }
        else if (command == "save")
        {
            money += sum;

            spendCount = 0;
        }

        if (spendCount == 5)
        {
            std::cout << "You can't save the money.\n" << daysCount << std::endl;
            return 0;
        }
        else if (money >= neededMoney)
        {
            std::cout << "You saved the money for " << daysCount << " days." << std::endl;
            return 0;
        }
    }
}