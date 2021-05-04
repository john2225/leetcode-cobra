#include <iostream>
#include <fstream>
#include <regex>
#include <string>

int main()
{
	std::regex patter1("^[0-9]{3}-[0-9]{3}-[0-9]{4}$");
	std::regex pattern2("^\\([0-9]{3}\\) [0-9]{3}-[0-9]{4}$");
	std::ifstream file("phone_numbers.txt");
	std::string numbers;
	if(file.is_open())
    {
        while(std::getline(file, numbers))
        {
            if(regex_match(numbers, patter1) || regex_match(numbers, pattern2))
            {
                std::cout << numbers << std::endl;
            }
        }
    }
	return 0;
}
