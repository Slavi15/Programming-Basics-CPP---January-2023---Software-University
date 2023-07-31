#include <iostream>
#include <string>

int main()
{
    int n;

    std::cin >> n;

    for (int i = 1111; i <= 9999; i++)
    {
        std::string str = std::to_string(i);

        int count = 0;

        for (char& ch : str)
        {
            int number = ch - '0';

            if (n % number == 0)
                count++;
        }

        if (count == 4)
            std::cout << i << ' ';
    }

    return 0;
}