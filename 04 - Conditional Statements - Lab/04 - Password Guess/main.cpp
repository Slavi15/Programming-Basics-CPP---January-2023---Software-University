#include <iostream>
#include <string>

int main()
{
    std::string password;

    std::getline(std::cin, password);

    password == "s3cr3t!P@ssw0rd" ? std::cout << "Welcome" << std::endl : std::cout << "Wrong password!" << std::endl;

    return 0;
}