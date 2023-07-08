#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int juniorBikers, seniorBikers;
    std::string path;

    std::cin >> juniorBikers >> seniorBikers >> path;

    float money;

    if (path == "trail")
    {
        money = (juniorBikers * 5.5) + (seniorBikers * 7);
    }
    else if (path == "cross-country")
    {
        if ((seniorBikers + juniorBikers) >= 50)
        {
            money = (juniorBikers * 6) + (seniorBikers * 7.125);
        }
        else
        {
           money = (juniorBikers * 8) + (seniorBikers * 9.5); 
        }
    }
    else if (path == "downhill")
    {
        money = (juniorBikers * 12.25) + (seniorBikers * 13.75); 
    }
    else if (path == "road")
    {
        money = (juniorBikers * 20) + (seniorBikers * 21.5); 
    }

    money -= (money * 0.05);

    std::cout << std::fixed << std::setprecision(2) << money << std::endl;

    return 0;
}