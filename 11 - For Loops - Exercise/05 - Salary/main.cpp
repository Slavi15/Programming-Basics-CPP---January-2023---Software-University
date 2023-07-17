#include <iostream>
#include <string>

int main()
{
    int n, salary;

    std::cin >> n >> salary;

    int facebook = 150, instagram = 100, reddit = 50;

    for (int i = 0; i < n; i++)
    {
        std::string website;

        std::cin >> website;

        if (website == "Facebook")
        {
            salary -= facebook;
        }
        else if (website == "Instagram")
        {
            salary -= instagram;
        }
        else if (website == "Reddit")
        {
            salary -= reddit;
        }

        if (salary <= 0) break;
    }

    salary <= 0 ? std::cout << "You have lost your salary." << std::endl : std::cout << salary << std::endl;
}