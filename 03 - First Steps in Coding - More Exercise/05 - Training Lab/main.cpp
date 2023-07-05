#include <iostream>
#include <math.h>

int main()
{
    float w, h;

    std::cin >> w >> h;

    float heightWithoutCorridor = (h * 100) - 100;

    int rowPlaces = heightWithoutCorridor / 70;
    int columnPlaces = (w * 100) / 120;

    int places = (rowPlaces * columnPlaces) - 3;

    std::cout << places << std::endl;

    return 0;
}