#include <iostream>
#include <string>

int main()
{
    std::string animal;

    std::getline(std::cin, animal);

    if (animal == "dog")
    {
        std::cout << "mammal" << std::endl;
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
    {
        std::cout << "reptile" << std::endl;
    }
    else
    {
        std::cout << "unknown" << std::endl;
    }

    return 0;
}