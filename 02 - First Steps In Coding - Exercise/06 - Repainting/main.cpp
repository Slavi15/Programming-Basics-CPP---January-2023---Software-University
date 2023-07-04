#include <iostream>

int main()
{
    int nylonQuantity, paintQuantity, diluentQuantity, hours;

    std::cin >> nylonQuantity >> paintQuantity >> diluentQuantity >> hours;

    float nylonPrice = 1.5;
    float paintPrice = 14.5;
    int diluentPrice = 5;

    float materialsPrice = ((nylonQuantity + 2) * nylonPrice) + ((paintQuantity + (paintQuantity * 0.1)) * paintPrice) + (diluentQuantity * diluentPrice) + 0.4;
    float workersMoney = materialsPrice * 0.3;

    float money = materialsPrice + (workersMoney * hours);

    std::cout << money << std::endl;

    return 0;
}