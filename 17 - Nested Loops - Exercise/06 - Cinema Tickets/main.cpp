#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    float studentTickets = 0, standardTickets = 0, kidTickets = 0;

    int allTickets = 0;

    while (true)
    {
        std::string film;

        int capacity;

        std::getline(std::cin, film);

        if (film == "Finish")
        {
            std::cout << "Total tickets: " << allTickets << std::endl;
            std::cout << std::fixed << std::setprecision(2) << (studentTickets / allTickets) * 100 << "\% student tickets.\n"
                      << (standardTickets / allTickets) * 100 << "\% standard tickets.\n"
                      << (kidTickets / allTickets) * 100 << "\% kids tickets." << std::endl;

            return 0;
        }

        std::cin >> capacity;

        std::cin.ignore();

        float filmPlaces = 0;

        for (int i = 0; i < capacity; i++)
        {
            std::string ticket;

            std::cin >> ticket;

            if (ticket == "student")
            {
                studentTickets++;
                filmPlaces++;
                allTickets++;
            }
            else if (ticket == "standard")
            {
                standardTickets++;
                filmPlaces++;
                allTickets++;
            }
            else if (ticket == "kid")
            {
                kidTickets++;
                filmPlaces++;
                allTickets++;
            }

            if (ticket == "End" || i == (capacity - 1))
            {
                std::cout << std::fixed << std::setprecision(2) << film << " - " << (filmPlaces / capacity) * 100 << "\% full." << std::endl;
                std::cin.ignore();
                break;
            }
        }
    }
}