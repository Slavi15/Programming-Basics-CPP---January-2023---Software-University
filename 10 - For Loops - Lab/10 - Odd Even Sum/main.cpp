#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    int n;

    std::cin >> n;

    std::vector<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int num;

        std::cin >> num;


        numbers.push_back(num);
    }

    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenSum += numbers[i];
        }
        else
        {
            oddSum += numbers[i];
        }
    }

    if (evenSum == oddSum)
    {
        std::cout << "Yes\nSum = " << evenSum << std::endl;
    }
    else
    {
        int diff = abs(evenSum - oddSum);
        std::cout << "No\nDiff = " << diff << std::endl;
    }

    return 0;
}