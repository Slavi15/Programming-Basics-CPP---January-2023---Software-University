#include <iostream>
#include <string>

int main()
{
    std::string architectName;
    int projects;

    std::getline(std::cin, architectName);
    std::cin >> projects;

    int hours = projects * 3;

    std::cout << "The architect " << architectName << " will need " <<
                hours << " hours to complete " << projects << " project/s." << std::endl;

    return 0;
}