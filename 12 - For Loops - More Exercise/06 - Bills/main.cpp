#include <iostream>
#include <iomanip>

int main()
{
    int months;

    std::cin >> months;

    float electricity = 0, water = 0, internet = 0, others = 0, expenses = 0;

    for (int i = 0; i < months; i++)
    {
        float price;

        std::cin >> price;

        electricity += price;
        water += 20;
        internet += 15;

        float sum = price + 35;

        others += (sum + (sum * 0.2));

        expenses += ((2 * sum) + (sum * 0.2));
    }

    float average = expenses / months;

    std::cout << std::fixed << std::setprecision(2) << 
        "Electricity: " << electricity << 
        " lv\nWater: " << water << 
        " lv\nInternet: " << internet << 
        " lv\nOther: " << others << 
        " lv\nAverage: " << average << " lv" << std::endl;

    return 0;
}