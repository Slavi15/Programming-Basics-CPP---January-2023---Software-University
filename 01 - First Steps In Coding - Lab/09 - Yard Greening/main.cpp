#include <iostream>

int main()
{
    float squareMeters;

    std::cin >> squareMeters;

    float price = squareMeters * 7.61;
    float discount = price * 0.18;
    float priceWithDiscount = price - discount;

    std::cout << "The final price is: " << priceWithDiscount << " lv." << std::endl;
    std::cout << "The discount is: " << discount << " lv." << std::endl;

    return 0;
}