#include <iostream>

int main()
{
    float depositSum;
    int depositTerm;
    float apr;

    std::cin >> depositSum >> depositTerm >> apr;

    float sum = depositSum + depositTerm * ((depositSum * (apr / 100)) / 12);

    std::cout << sum << std::endl;

    return 0;
}