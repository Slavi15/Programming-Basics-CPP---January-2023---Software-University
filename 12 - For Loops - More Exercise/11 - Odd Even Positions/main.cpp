#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

int main()
{
    int n;

    std::cin >> n;

    std::vector<float> odds, evens;

    float evenSum = 0, oddSum = 0;

    for (int i = 1; i <= n; i++)
    {
        float number;

        std::cin >> number;

        if (i % 2 == 0)
        {
            evens.push_back(number);
            evenSum += number;
        }
        else
        {
            odds.push_back(number);
            oddSum += number;
        }
    }

    const auto [minEven, maxEven] = std::minmax_element(evens.begin(), evens.end());
    const auto [minOdd, maxOdd] = std::minmax_element(odds.begin(), odds.end());

    if (evenSum != 0 && oddSum != 0)
    {
        std::cout << std::fixed << std::setprecision(2) <<
            "OddSum=" << oddSum << ",\n" <<
            "OddMin=" << static_cast<double>(*minOdd) << ",\n" <<
            "OddMax=" << static_cast<double>(*maxOdd) << ",\n" <<
            "EvenSum=" << evenSum << ",\n" <<
            "EvenMin=" << static_cast<double>(*minEven) << ",\n" <<
            "EvenMax=" << static_cast<double>(*maxEven) << std::endl;
    }
    else if (oddSum != 0 && evenSum == 0)
    {
        std::cout << std::fixed << std::setprecision(2) <<
            "OddSum=" << oddSum << ",\n" <<
            "OddMin=" << static_cast<double>(*minOdd) << ",\n" <<
            "OddMax=" << static_cast<double>(*maxOdd) << ",\n" <<
            "EvenSum=" << evenSum << ",\n" <<
            "EvenMin=" << "No" << ",\n" <<
            "EvenMax=" << "No" << std::endl;
    }
    else if (oddSum == 0 && evenSum != 0)
    {
        std::cout << std::fixed << std::setprecision(2) <<
            "OddSum=" << oddSum << ",\n" <<
            "OddMin=" << "No" << ",\n" <<
            "OddMax=" << "No" << ",\n" <<
            "EvenSum=" << evenSum << ",\n" <<
            "EvenMin=" << static_cast<double>(*minEven) << ",\n" <<
            "EvenMax=" << static_cast<double>(*maxEven) << std::endl;
    }
    else if (oddSum == 0 && evenSum == 0)
    {
        std::cout << std::fixed << std::setprecision(2) <<
            "OddSum=" << oddSum << ",\n" <<
            "OddMin=" << "No" << ",\n" <<
            "OddMax=" << "No" << ",\n" <<
            "EvenSum=" << evenSum << ",\n" <<
            "EvenMin=" << "No" << ",\n" <<
            "EvenMax=" << "No" << std::endl;
    }

    return 0;
}