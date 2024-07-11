#include <iostream>

int main() {
    
    int array[5] = {15, 23, 37, 41, 5};
    
    int counting;
    
    int x;
    
    array[5] = x;

    while (array[counting] != x)
    {
        counting++;
    }
    
    if(counting == 5) {
        std::cout << "FOUND IT :D" << std::endl;
    } else {
        std::cout << "Did not find it :(" << std::endl;
    }

    return 0;
}