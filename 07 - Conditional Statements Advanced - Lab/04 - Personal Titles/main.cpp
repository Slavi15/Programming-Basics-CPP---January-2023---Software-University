#include <iostream>

int main()
{
    float age;
    char sex;

    std::cin >> age >> sex;

    if (sex == 'm')
    {
        if (age >= 16)
        {
            std::cout << "Mr." << std::endl;
        }
        else
        {
            std::cout << "Master" << std::endl;
        }
    }
    else if (sex == 'f')
    {
        if (age >= 16)
        {
            std::cout << "Ms." << std::endl;
        }
        else
        {
            std::cout << "Miss" << std::endl;
        }
    }

    return 0;
}