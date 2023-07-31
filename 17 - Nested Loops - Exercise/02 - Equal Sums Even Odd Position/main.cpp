#include <iostream>
#include <string>

int main()
{
    int start, final;

    std::cin >> start >> final;

    for (int i = start; i <= final; i++)
    {
        int evenSum = 0, oddSum = 0;

        std::string str = std::to_string(i);

        for (int i = 0; i < str.size(); i++)
        {
            if (i % 2 == 0)
            {
                evenSum += str[i];
            }
            else if (i % 2 != 0)
            {
                oddSum += str[i];
            }
        }

        if (evenSum == oddSum)
            std::cout << i << ' ';
    }

    return 0;
}