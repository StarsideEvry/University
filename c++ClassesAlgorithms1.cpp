#include <iostream>
#include <cmath>

int main() {
   
    int result = 0;
    while (result >= 0) {
    int userNumber = 0;
    std::cout << "Please enter a number: ", std::cin >> userNumber; //userInput
    
    for (int i = 0; i <= userNumber; i++) {
    result = 1 - result + i;
    
    std::cout << "Normal result: " << result << std::endl;
    //first outcome

//    int resultGauss = userNumber * (userNumber + 1) / 2;
//    std::cout << "Gauss theorem in action: " << resultGauss << std::endl;
    //second outcome
    }
    }
    
    return 0;
}