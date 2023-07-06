#include <iostream>
#include <math.h>

int main()
{
    int x, z, w;
    float y;

    std::cin >> x >> y >> z >> w;

    float grapesTerrain = x * 0.4;
    float grapesKG = grapesTerrain * y;
    float harvest = grapesKG / 2.5;

    float leftWine = abs(harvest - z);

    if (harvest >= z)
    {
        float workerWine = leftWine / w;
        std::cout << "Good harvest this year! Total wine: " << floor(harvest) << " liters." << std::endl;
        std::cout << ceil(leftWine) << " liters left -> " << ceil(workerWine) << " liters per person." << std::endl;
    }
    else
    {
        std::cout << "It will be a tough winter! More " << floor(leftWine) << " liters wine needed." << std::endl;
    }

    return 0;
}