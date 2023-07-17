#include <iostream>
#include <iomanip>

int main()
{
    int n;

    std::cin >> n;

    const int microbusPrice = 200, truckPrice = 175, trainPrice = 120;

    float allTonnage = 0, microTonnage = 0, truckTonnage = 0, trainTonnage = 0;

    for (int i = 0; i < n; i++)
    {
        int weight;

        std::cin >> weight;

        if (weight <= 3)
        {
            allTonnage += weight;
            microTonnage += weight;
        }
        else if (weight >= 4 && weight <= 11)
        {
            allTonnage += weight;
            truckTonnage += weight;
        }
        else
        {
            allTonnage += weight;
            trainTonnage += weight;
        }
    }

    float averagePrice = ((microTonnage * microbusPrice) + (truckTonnage * truckPrice) + (trainTonnage * trainPrice)) / allTonnage;
    float p1 = (microTonnage / allTonnage) * 100;
    float p2 = (truckTonnage / allTonnage) * 100;
    float p3 = (trainTonnage / allTonnage) * 100;

    std::cout << std::fixed << std::setprecision(2) << averagePrice << "\n" << p1 << "%\n" << p2 << "%\n" << p3 << "%" << std::endl;

    return 0;
}