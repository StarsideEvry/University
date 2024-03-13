#include <iostream>
#include <stdexcept>
#include <cmath>

using std::cin;
using std::cout;
using std::runtime_error;

void check0Division(int secondDecimal, char mathOperations){
    if (mathOperations == '/' || mathOperations == '%' || mathOperations == '//' ) {
        throw runtime_error("Error: Divison by zero");
    }
}

int main() {

    int firstDecimal;
    int secondDecimal;
    char mathOperations;
    int result;

    cin >> firstDecimal >> mathOperations >> secondDecimal;

    /*if (firstDecimal >= 32 && firstDecimal <= 41)
    {
        
    } else {
        cout << "error!";
    }
    
    if (secondDecimal >= 32 && secondDecimal <= 41)
    {
        
    } else {
        cout << "error!";
    }*/
    
    

    switch (mathOperations) {
    case '+':
        result = firstDecimal + secondDecimal;
        cout << result;
        break;
    case '-':
        result = firstDecimal - secondDecimal;
        cout << result;
        break;
    case '/':
        result = firstDecimal / secondDecimal;
        cout << result;
        break;
    case '^':
        result = firstDecimal ^ secondDecimal;
        cout << result;
        break;
    case '*':
        result = firstDecimal * secondDecimal;
        cout << result;
        break;
    case '%':
        result = firstDecimal % secondDecimal;
        cout << result;
        break;
    default:
        break;
    }

    return 0;
}