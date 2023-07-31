#include <iostream>

int main()
{
    int men, women, maximum;

    std::cin >> men >> women >> maximum;

    int combinations = 0;

    for (int i = 1; i <= men; i++)
    {
        for (int j = 1; j <= women; j++)
        {
            if (combinations < maximum)
            {
                combinations++;

                std::cout << '(' << i << " <-> " << j << ") ";
            }
        }
    }

    return 0;
}