#include <iostream>

int main()
{
    int days;

    std::cin >> days;

    int weekDays = 365 - days;

    int weekPlayTime = weekDays * 63;
    int chillPlayTime = days * 127;

    int playTime = weekPlayTime + chillPlayTime;

    int difference = abs(playTime - 30000);
    int diffHours = difference / 60;
    int diffMinutes = difference - (diffHours * 60);

    if (playTime > 30000)
    {
        std::cout << "Tom will run away\n" << diffHours << " hours and " << diffMinutes << " minutes more for play";
    }
    else
    {
        std::cout << "Tom sleeps well\n" << diffHours << " hours and " << diffMinutes << " minutes less for play";
    }

    return 0;
}