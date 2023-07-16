#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    int n;

    std::cin >> n;

    std::vector<int> numbers;

    for (int i = 0; i < n * 2; i++)
    {
        int num;

        std::cin >> num;

        numbers.push_back(num);
    }

    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
    {
        left += numbers[i];
    }

    for (int i = n; i < n * 2; i++)
    {
        right += numbers[i];
    }

    if (left == right)
    {
        std::cout << "Yes, sum = " << left << std::endl;
    }
    else
    {
        int diff = abs(left - right);
        std::cout << "No, diff = " << diff << std::endl;
    }

    return 0;
}