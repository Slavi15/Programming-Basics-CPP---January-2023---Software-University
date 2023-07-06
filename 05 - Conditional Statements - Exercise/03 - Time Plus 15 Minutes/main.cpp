#include <iostream>

int main()
{
    int hour, minutes;

    std::cin >> hour >> minutes;

    int addedMinutes = minutes + 15;
    int hoursToAdd = addedMinutes / 60;

    if (hoursToAdd != 0)
    {
        addedMinutes -= (hoursToAdd * 60);
        int allHours = hour + hoursToAdd;

        if (allHours > 23)
        {
            addedMinutes < 10 ? 
                std::cout << allHours - 24 << ":0" << addedMinutes << std::endl : 
                std::cout << allHours - 24 << ":" << addedMinutes << std::endl;
        }
        else
        {
            addedMinutes < 10 ? 
                std::cout << allHours << ":0" << addedMinutes << std::endl : 
                std::cout << allHours << ":" << addedMinutes << std::endl;
        }
    }
    else 
    {
        addedMinutes < 10 ? 
                std::cout << hour << ":0" << addedMinutes << std::endl : 
                std::cout << hour << ":" << addedMinutes << std::endl;
    }

    return 0;
}