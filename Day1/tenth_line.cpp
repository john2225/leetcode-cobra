#include <iostream>
#include <string>
#include <fstream>


int main()
{
    std::string line;
    std::ifstream f("myFile.txt");
    for(int i = 0; i < 10; ++i)
    {
        std::getline(f, line);
    }
    std::cout << "The tenth line is: " << line << std::endl;
}
