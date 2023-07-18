#include <iostream>
#include <string>

int main()
{
    std::string username, password;

    std::cin >> username >> password;

    while (true)
    {
        std::string guess;

        std::cin >> guess;

        if (guess == password)
        {
            std::cout << "Welcome " << username << "!" << std::endl;
            break;
        }
    }

    return 0;
}