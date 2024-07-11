#include <iostream>

int main() {
   
    int result = 0;
    
    while (result >= 0) {
    
    int userNumber = 0;
    
    std::cout << "Please enter a number: ", std::cin >> userNumber;
    
    for (int i = 0; i <= userNumber; i++) {
    
    result = 1 - result + i;
    
    std::cout << "Normal result: " << result << std::endl;
        }
    }
    
    return 0;
}