#include <iostream>

int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int userInputAnswer;
    
    std::cin >> userInputAnswer;

    int beginning = 0;
    
    int finish = 19;

    int middle;

    middle = (beginning + finish) /2;
    
    while(array[middle] != userInputAnswer && finish < beginning) {
        
        std::cout << array[middle] << std::endl;
        
        if (array[middle] < userInputAnswer) {
            beginning = middle + 1;
        
        } else {
            finish = middle - 1;
        }
        middle = (beginning + finish) /2;
    }
    
    if (finish >= beginning) {
        std::cout << "Can be found on: " << middle << std::endl;        
    } else {
        std::cout << "Can not be found" << std::endl;
    }
    
    return 0;
}