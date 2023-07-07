#include <iostream>
#include <string>

int main()
{
    std::string day;

    std::cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Friday")
    {
        std::cout << int(12) << std::endl;
    }
    else if (day == "Wednesday" || day == "Thursday")
    {
        std::cout << int(14) << std::endl;
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        std::cout << int(16) << std::endl;
    }

    return 0;
}