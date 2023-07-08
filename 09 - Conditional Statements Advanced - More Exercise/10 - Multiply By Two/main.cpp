#include <iostream>
#include <iomanip>

int main()
{
    while (true)
    {
        float number;

        std::cin >> number;

        if (number >= 0)
        {
            float result = number * 2;

            std::cout << std::fixed << std::setprecision(2) << "Result: " << result << std::endl;
        }
        else
        {
            std::cout << "Negative number!" << std::endl;
            break;
        }
    }

    return 0;
}