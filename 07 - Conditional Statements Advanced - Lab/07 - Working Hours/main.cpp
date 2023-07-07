#include <iostream>
#include <string>

int main()
{
    int hour;
    std::string day;

    std::cin >> hour >> day;

    if (hour >= 10 && hour <= 18)
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday")
        {
            std::cout << "open" << std::endl;
        }
        else
        {
            std::cout << "closed" << std::endl;
        }
    }
    else
    {
        std::cout << "closed" << std::endl;
    }

    return 0;
}