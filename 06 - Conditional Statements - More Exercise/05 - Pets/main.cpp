#include <iostream>
#include <math.h>

int main()
{
    int days, leftFoodKG;
    float foodPerDayDog, foodPerDayCat, foodPerDayTortoise;

    std::cin >> days >> leftFoodKG >> foodPerDayDog >> foodPerDayCat >> foodPerDayTortoise;

    float dogFood = foodPerDayDog * days;
    float catFood = foodPerDayCat * days;
    float tortoiseFood = (foodPerDayTortoise / 1000) * days;

    float petFood = dogFood + catFood + tortoiseFood;

    float difference = abs(petFood - leftFoodKG);

    if (leftFoodKG >= petFood)
    {
        std::cout << floor(difference) << " kilos of food left.";
    }
    else
    {
        std::cout << ceil(difference) << " more kilos of food are needed.";
    }

    return 0;
}