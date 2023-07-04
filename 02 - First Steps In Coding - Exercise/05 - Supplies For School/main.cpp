#include <iostream>

int main()
{
    int penPacketsCount, markerPacketsCount, cleaningLitres;
    float discountPercent;

    std::cin >> penPacketsCount >> markerPacketsCount >> cleaningLitres >> discountPercent;

    float penPacketPrice = 5.8;
    float markerPacketPrice = 7.2;
    float cleaningLitresPrice = 1.2;

    float total = (penPacketsCount * penPacketPrice) + (markerPacketsCount * markerPacketPrice) + (cleaningLitres * cleaningLitresPrice);
    float discount = discountPercent / 100;
    float totalWithDiscount = total - (total * discount);

    std::cout << totalWithDiscount << std::endl;

    return 0;
}