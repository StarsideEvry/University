#include <iostream>

#include "Circle.h"

int main () {
    Circle* circle = new Circle(5.0);
    
    circle->draw();
    std::cout << circle->area() << std::endl;

    return 0;
}