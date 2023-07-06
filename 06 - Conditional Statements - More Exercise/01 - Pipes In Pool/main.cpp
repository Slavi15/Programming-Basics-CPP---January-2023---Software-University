#include <iostream>
#include <iomanip>

int main()
{
    int v, p1, p2;
    float h;

    std::cin >> v >> p1 >> p2 >> h;

    float waterP1 = p1 * h;
    float waterP2 = p2 * h;
    float water = waterP1 + waterP2;

    float waterPercent = (water / v) * 100;
    float p1Percent = (waterP1 / water) * 100;
    float p2Percent = (waterP2 / water) * 100;

    if (water <= v)
    {
        std::cout << std::fixed << std::setprecision(2) << "The pool is " << waterPercent << "\% full. Pipe 1: " << p1Percent << "\%. Pipe 2: " << p2Percent << "\%.";
    }
    else
    {
        float overflow = abs(water - v);
        std::cout << std::fixed << std::setprecision(2) << "For " << h << " hours the pool overflows with " << overflow << " liters.";
    }

    return 0;
}