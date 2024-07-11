#include <iostream>
#include <stdexcept>
#include <cmath>

void check0Division(int secondDecimal, char mathOperations){
    if (mathOperations == '/' || mathOperations == '%' || mathOperations == '//' ) {
        throw std::runtime_error("Error: Divison by zero");
    }
}

int main() {

    int firstDecimal;
    
    int secondDecimal;
    
    char mathOperations;
    
    int result;

    std::cin >> firstDecimal >> mathOperations >> secondDecimal;

    switch (mathOperations) {
    case '+':
        result = firstDecimal + secondDecimal;
        std::cout << result;
        break;
    case '-':
        result = firstDecimal - secondDecimal;
        std::cout << result;
        break;
    case '/':
        result = firstDecimal / secondDecimal;
        std::cout << result;
        break;
    case '^':
        result = firstDecimal ^ secondDecimal;
        std::cout << result;
        break;
    case '*':
        result = firstDecimal * secondDecimal;
        std::cout << result;
        break;
    case '%':
        result = firstDecimal % secondDecimal;
        std::cout << result;
        break;
    default:
        break;
    }

    return 0;
}