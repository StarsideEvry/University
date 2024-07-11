#include <iostream>

int main() {
    int userNumber;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> userNumber;

    int sumAll;
    for (int i = 1; i < userNumber + 1; i++)
    {
        sumAll = sumAll * i;
        std::cout << sumAll << std::endl;
    }

    return 0;
}