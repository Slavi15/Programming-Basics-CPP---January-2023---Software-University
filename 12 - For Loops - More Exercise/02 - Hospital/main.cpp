#include <iostream>

int main()
{
    int period;

    std::cin >> period;

    int doctors = 7, checked = 0, unchecked = 0;

    int days = 0;

    for (int i = 0; i < period; i++)
    {
        int patients;

        std::cin >> patients;

        days += 1;

        if (days % 3 == 0 && unchecked > checked) doctors += 1;

        if (doctors >= patients)
        {
            checked += patients;
        }
        else
        {
            checked += doctors;
            unchecked += (patients - doctors);
        }
    }

    std::cout << "Treated patients: " << checked << ".\n" << "Untreated patients: " << unchecked << "." << std::endl;

    return 0;
}