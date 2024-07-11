#include <iostream>
#include <string>

int main () {

    int rowsNumber, colsNumber;
    std::cin >> rowsNumber >> colsNumber;
    
    int** matrix = new int*[rowsNumber];
    
    for (int rowInner = 0; rowInner < rowsNumber; rowInner++) {
        matrix[rowInner] = new int[colsNumber];
            for (int colInner = 0; colInner < colsNumber; colInner++) {
                std::cin >> matrix[rowInner][colInner];
        }
        

    }
    for (int rowInner = 0; rowInner < rowsNumber; rowInner++) {
            for (int colInner = 0; colInner < colsNumber; colInner++) {
                std::cout << matrix[rowInner][colInner] << std::endl;
        }
        

    }
    for (int delRow = 0; delRow < rowsNumber; delRow++) {
        delete[] matrix[delRow];
    }

    delete[]matrix;
    
    return 0;
}