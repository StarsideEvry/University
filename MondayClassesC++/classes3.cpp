#include <iostream>

int main() {
    
    int number;
    
    std::cout << "Enter a number: ";
    
    std::cin>> number;

    while (number % 2 == 0 && number > 1) {
        number /= 2;

    }

    std::cout << "The number is " << (number > 1? " " : "not ") << "a power of two";

    return 0;
}