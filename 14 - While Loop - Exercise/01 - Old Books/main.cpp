#include <iostream>
#include <string>

int main()
{
    std::string book, input;

    int counter = 0;

    std::getline(std::cin, book);

    while (true)
    {
        std::getline(std::cin, input);

        if (input == "No More Books")
        {
            std::cout << "The book you search is not here!\nYou checked " << counter << " books." << std::endl;
            break;
        }
        else if (input == book)
        {
            std::cout << "You checked " << counter << " books and found it." << std::endl;
            break;
        }

        counter += 1;
    }

    return 0;
}