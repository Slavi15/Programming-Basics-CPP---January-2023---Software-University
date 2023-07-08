#include <iostream>
#include <iomanip>

int main()
{
    int N1, N2;
    char mathOperator;

    std::cin >> N1 >> N2 >> mathOperator;

    std::string isEven;
    float result;

    if (N2 != 0)
    {
        if (mathOperator == '+')
        {
            result = N1 + N2;
        }
        else if (mathOperator == '-')
        {
            result = N1 - N2;
        }
        else if (mathOperator == '*')
        {
            result = N1 * N2;
        }
        else if (mathOperator == '/')
        {
            result = static_cast<double>(N1) / static_cast<double>(N2);
        }
        else if (mathOperator == '%')
        {
            result = N1 % N2;
        }

        if (mathOperator == '+' || mathOperator == '-' || mathOperator == '*')
        {
            std::string isEven = (static_cast<int>(result) % 2 == 0) ? "even" : "odd";

            std::cout << N1 << " " << mathOperator << " " << N2 << " = " << result << " - " << isEven << std::endl;
        }
        else if (mathOperator == '/')
        {
            std::cout << std::fixed << std::setprecision(2) << N1 << " " << mathOperator << " " << N2 << " = " << result << std::endl;
        }
        else if (mathOperator == '%')
        {
            std::cout << N1 << " " << mathOperator << " " << N2 << " = " << result << std::endl;
        }
    }
    else
    {
        std::cout << "Cannot divide " << N1 << " by zero" << std::endl;
    }

    return 0;
}