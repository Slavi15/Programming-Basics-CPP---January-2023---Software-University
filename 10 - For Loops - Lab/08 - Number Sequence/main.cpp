#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    unsigned int n;

    std::cin >> n;

    std::vector<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int num;

        std::cin >> num;

        numbers.push_back(num);
    }

    const auto [min, max] = std::minmax_element(begin(numbers), end(numbers));

    std::cout << "Max number: " << *max << "\n" << "Min number: " << *min << std::endl;

    return 0;
}