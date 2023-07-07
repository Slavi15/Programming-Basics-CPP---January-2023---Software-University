#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string town;
    float sells;

    std::cin >> town >> sells;

    float commission = 0;

    if (town == "Sofia")
    {
        if (sells >= 0 && sells <= 500)
        {
            commission = sells * 0.05;
        }
        else if (sells > 500 && sells <= 1000)
        {
            commission = sells * 0.07;
        }
        else if (sells > 1000 && sells <= 10000)
        {
            commission = sells * 0.08;
        }
        else if (sells > 10000)
        {
            commission = sells * 0.12;
        }
        else
        {
            std::cout << "error" << std::endl;
        }
    }
    else if (town == "Varna")
    {
        if (sells >= 0 && sells <= 500)
        {
            commission = sells * 0.045;
        }
        else if (sells > 500 && sells <= 1000)
        {
            commission = sells * 0.075;
        }
        else if (sells > 1000 && sells <= 10000)
        {
            commission = sells * 0.1;
        }
        else if (sells > 10000)
        {
            commission = sells * 0.13;
        }
        else
        {
            std::cout << "error" << std::endl;
        }
    }
    else if (town == "Plovdiv")
    {
        if (sells >= 0 && sells <= 500)
        {
            commission = sells * 0.055;
        }
        else if (sells > 500 && sells <= 1000)
        {
            commission = sells * 0.08;
        }
        else if (sells > 1000 && sells <= 10000)
        {
            commission = sells * 0.12;
        }
        else if (sells > 10000)
        {
            commission = sells * 0.145;
        }
        else
        {
            std::cout << "error" << std::endl;
        }
    }
    else
    {
        std::cout << "error" << std::endl;
    }

    if (commission != 0)
        std::cout << std::fixed << std::setprecision(2) << commission << std::endl;

    return 0;
}