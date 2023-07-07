#include <iostream>
#include <string>

int main()
{
    std::string day;

    std::getline(std::cin, day);

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        std::cout << "Working day" << std::endl;
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        std::cout << "Weekend" << std::endl;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }

    return 0;
}