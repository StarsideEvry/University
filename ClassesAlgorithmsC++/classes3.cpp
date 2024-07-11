#include <iostream>
#include <iomanip>

int main() {
    
    double userInput_AngleX;
    
    double angleX;
    
    float sum = 0;
    
    float sum_tot;
    
    int sign = 1;

    std::cout << "Please enter the degree of the angle X : " << std::endl;
    
    std::cin >> userInput_AngleX;

    const float pi = 22/7;

    angleX = (userInput_AngleX * pi) / 180;\

    for (int i = 1; i < 13; i+=2)
    {
        sum_tot = pow(angleX, i-1);
        sum = sum + sign * sum_tot;
        sign = -sign;
    }
       
    return 0;
}