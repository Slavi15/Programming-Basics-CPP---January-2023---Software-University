#include <iostream>
#include <iomanip>

int main()
{
    int n;

    std::cin >> n;

    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        int number;

        std::cin >> number;

        sum += number;
    }

    std::cout << std::fixed << std::setprecision(2) << sum / n << std::endl;

    return 0;
}