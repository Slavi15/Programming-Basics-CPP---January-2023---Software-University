#include <iostream>

int main()
{
    signed int numberOne, numberTwo;

    std::cin >> numberOne >> numberTwo;

    numberOne > numberTwo ? std::cout << numberOne << std::endl : 
        numberTwo > numberOne ? std::cout << numberTwo << std::endl : 
            std::cout << numberOne << std::endl;

    /*
    if (numberOne > numberTwo)
    {
        std::cout << numberOne << std::endl;
    }
    else if (numberTwo > numberOne)
    {
        std::cout << numberTwo << std::endl;
    }
    else
    {
        std::cout << numberOne << std::endl;
    }
    */

    return 0;
}