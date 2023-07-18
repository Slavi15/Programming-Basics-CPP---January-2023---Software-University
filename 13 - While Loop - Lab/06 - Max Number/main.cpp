#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    std::string input;

    std::cin >> input;

    std::vector<int> numbers;

    while (input != "Stop")
    {
        int number = std::stoi(input);

        numbers.push_back(number);

        std::cin >> input;
    }

    std::vector<int>::iterator max = std::max_element(numbers.begin(), numbers.end());

    std::cout << *max << std::endl;

    return 0;   
}