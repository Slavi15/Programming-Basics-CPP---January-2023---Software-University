#include <iostream>
#include <string>

int main()
{
    std::string firstName;
    std::string lastName;
    int age;
    std::string town;

    std::getline(std::cin, firstName);
    std::getline(std::cin, lastName);

    std::cin >> age;
    std::cin.ignore();
    
    std::getline(std::cin, town);

    std::cout << "You are " << firstName << " " << lastName 
                << ", a " << age << "-years old person from " << town << "." << std::endl;

    return 0;
}