#include <iostream>

int main()
{
    int length, width, height;
    float percent;

    std::cin >> length >> width >> height >> percent;

    float volume = (length * width * height) * 0.001;
    float partialVolume = volume - (volume * (percent / 100));

    std::cout << partialVolume << std::endl;

    return 0;
}