#include <iostream>

int main()
{
    int pages, pagesPerHour, daysCount;

    std::cin >> pages >> pagesPerHour >> daysCount;

    int oneBookTime = pages / pagesPerHour;
    int hoursPerDay = oneBookTime / daysCount;

    std::cout << hoursPerDay << std::endl;

    return 0;
}