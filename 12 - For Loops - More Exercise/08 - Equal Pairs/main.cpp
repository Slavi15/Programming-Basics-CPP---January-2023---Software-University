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
        int numOne, numTwo;

        std::cin >> numOne >> numTwo;

        int sum = numOne + numTwo;

        numbers.push_back(sum);
    }

    std::vector<int> differences;

    for (int i = 0; i < numbers.size(); i++)
    {
        int result = abs(numbers[i] - numbers[i + 1]);

        if (i != (numbers.size() - 1))
            differences.push_back(result);
    }

    const auto [min, max] = std::minmax_element(begin(numbers), end(numbers));
    int diff = *max - *min;

    std::vector<int>::iterator maxdiff = std::max_element(differences.begin(), differences.end());

    diff == 0 ? 
        std::cout << "Yes, value=" << numbers[0] << std::endl : 
        std::cout << "No, maxdiff=" << *maxdiff << std::endl;

    return 0;
}