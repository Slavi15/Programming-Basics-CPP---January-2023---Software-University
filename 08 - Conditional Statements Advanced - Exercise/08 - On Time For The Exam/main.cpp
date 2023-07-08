#include <iostream>
#include <math.h>

int main()
{
    int hourExam, minutesExam, arrivalHour, arrivalMinutes;

    std::cin >> hourExam >> minutesExam >> arrivalHour >> arrivalMinutes;

    int allMinutesExam = (hourExam * 60) + minutesExam;
    int allMinutesArrival = (arrivalHour * 60) + arrivalMinutes;

    int allMinutesDiff = abs(allMinutesExam - allMinutesArrival);
    int diff = abs(arrivalMinutes - minutesExam);

    if (hourExam == arrivalHour)
    {
        if (diff >= 0 && diff <= 30 && arrivalMinutes <= minutesExam)
        {
            if (diff == 0)
            {
                std::cout << "On time" << std::endl;
            }
            else
            {
                std::cout << "On time" << std::endl;
                std::cout << diff << " minutes before the start" << std::endl;
            }
        }
        else if (diff > 30 && arrivalMinutes <= minutesExam)
        {
            std::cout << "Early" << std::endl;
            if (diff < 60)
            {
                std::cout << diff << " minutes before the start" << std::endl;
            }
            else
            {
                int hours = diff / 60;
                int minutes = minutes - (hours * 60);

                if (minutes < 10)
                {
                    std::cout << hours << ":0" << minutes << " hours before the start" << std::endl;
                }
                else
                {
                    std::cout << hours << ":" << minutes << " hours before the start" << std::endl;
                }
            }
        }
        else if (arrivalMinutes > minutesExam)
        {
            std::cout << "Late" << std::endl;

            if (diff < 60)
            {
                std::cout << diff << " minutes after the start" << std::endl;
            }
        }
    }
    else
    {
        if (arrivalHour < hourExam)
        {
            if (allMinutesDiff <= 30)
            {
                std::cout << "On time" << std::endl;
                std::cout << allMinutesDiff << " minutes before the start" << std::endl;
            }
            else if (allMinutesDiff > 30 && allMinutesDiff < 60)
            {
                std::cout << "Early" << std::endl;
                std::cout << allMinutesDiff << " minutes before the start" << std::endl;
            }
            else
            {
                int hours = allMinutesDiff / 60;
                int minutes = allMinutesDiff - (hours * 60);

                std::cout << "Early" << std::endl;

                if (minutes < 10)
                {
                    std::cout << hours << ":0" << minutes << " hours before the start" << std::endl;
                }
                else
                {
                    std::cout << hours << ":" << minutes << " hours before the start" << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Late" << std::endl;

            if (allMinutesDiff < 60)
            {
                std::cout << allMinutesDiff << " minutes after the start" << std::endl;
            }
            else
            {
                int hours = allMinutesDiff / 60;
                int minutes = allMinutesDiff - (hours * 60);

                if (minutes < 10)
                {
                    std::cout << hours << ":0" << minutes << " hours after the start" << std::endl;
                }
                else
                {
                    std::cout << hours << ":" << minutes << " hours after the start" << std::endl;
                }
            }
        }
    }

    return 0;
}