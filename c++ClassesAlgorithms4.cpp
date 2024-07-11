#include <iostream>

int main() {
    int array[5] = {15, 23, 37, 41, 5};
    //std::cout << "Please enter a number to be found" << std::endl;
    int counting;
    //int input;
    //std::cin >> input;
    int x;
    /*bool found = false*/;
    /*for (int i = 0; i < 5; i++) {
        if (array[i] == input) {
            found = true;
        }
    }*/
    /*if (found) {
        std::cout << "Found it!";
    } else {
        std::cout << "I did not find it!";
    }*/
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