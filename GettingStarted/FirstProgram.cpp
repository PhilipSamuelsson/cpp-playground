#include <iostream>

int number;

int main()
{

    std::cout << "What is your favorite number?" << std::endl;
    std::cin >> number;
    std::cout << "thats cool, my favorite number is also: " << std::endl;
    std::cout << "No really, " << number << " is my favorite number!!";

    return 0;
}