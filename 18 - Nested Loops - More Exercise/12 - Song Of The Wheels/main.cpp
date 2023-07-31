#include <iostream>
#include <string>
#include <sstream>

int main()
{
    int value;

    std::cin >> value;

    int count = 0;

    std::string password;

    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= 9; b++)
        {
            for (int c = 1; c <= 9; c++)
            {
                for (int d = 1; d <= 9; d++)
                {
                    if (a < b && c > d && ((a * b) + (c * d) == value))
                    {
                        count++;

                        std::cout << a << b << c << d << ' ';

                        if (count == 4)
                        {
                            std::ostringstream stream;

                            stream << a << b << c << d;

                            password = stream.str();
                        }
                    }
                }
            }
        }
    }

    !password.empty() ? std::cout << "\nPassword: " << password << std::endl : std::cout << "\nNo!" << std::endl;

    return 0;
}