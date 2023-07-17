#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

int main()
{
    int n;

    std::cin >> n;

    std::vector<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int number;

        std::cin >> number;

        numbers.push_back(number);
    }

    auto max = *std::max_element(numbers.begin(), numbers.end());

    numbers.erase(std::find(numbers.begin(), numbers.end(), max));

    int sum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    if (sum == max)
    {
        std::cout << "Yes\nSum = " << sum << std::endl;
    }
    else
    {
        int diff = abs(sum - max);
        std::cout << "No\nDiff = " << diff << std::endl;
    }

    return 0;
}