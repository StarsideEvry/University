#include <iostream>

bool isSet (int * numbers, int sizeNumbers) {

bool isSetNumbers = true;
    
    for (int i = 0; i < sizeNumbers; i++) {
        for (int j = i + 1; j < sizeNumbers; j++) {
            if (numbers[i] == numbers[j]) {
                return false;
            }
        }
    }
    return true;
}

bool makeSet (int * numbers, int sizeNumbers ) {
    
    int sizeSet = sizeNumbers;
    
    for (int i = 0; i < sizeNumbers; i++) {
        
        for (int j = i + 1; j < sizeNumbers; j++) {
            
            if (numbers[i] == numbers[j]) {
                sizeSet--;
            }
        }
    }
    return true;
}
//1 2 3 4 5
//0 0 1 1 0
//3 4
void makeSubSet (int * universalSet, int sizeUniv, int * bitMask) {
    
    for (int i = 0; i < sizeUniv; i++) {
        
        if (bitMask[i] == 1) {
            std::cout << universalSet[i] << "\t";
        }    
    }
}

int sizeSubSet (int * universalSet, int sizeUniv, int * bitMask) {   
    
    int sizeSubSetCounter = 0;
    
    for (int i = 0; i < sizeUniv; i++) {
        
        if (bitMask[i] == 1) {
            sizeSubSetCounter++;
        }    
    }
    return sizeSubSetCounter;
}

int * SubSet (int * universalSet, int sizeUniv, int * bitMask) {   
    
    int * subSet = new int[sizeSubSet(universalSet, sizeUniv, bitMask)];
    
    int indexSubSet = 0;
    
    for (int i = 0; i < sizeUniv; i++) {
        
        if (bitMask[i] == 1) {
            subSet[indexSubSet++] = universalSet[i];
        }    
    }
    return subSet;
}

void printArray (int * numbers, int sizeNumbers) {
    
    for (int i = 0; i < sizeNumbers; i++) {
        std::cout << numbers[i] << "\t";
    }
}

bool inSet (int * setNumbers, int sizeSet, int target) {
    
    for (int i = 0; i < sizeSet; i++) {
        
        if (setNumbers[i] == target) {
            return true;
        }
    }
    return false;
}

int sizeIntersection (int * set1, int size1, int * set2, int size2) {
    
    int sizeInt = 0;
    
    for (int i = 0; i < size2; i++) {
        
        if (inSet (set1 , size1 , set2[i])) {
            sizeInt++;
        }
    }
    return sizeInt;
}

int * setIntersection (int * set1, int size1, int * set2, int size2) {
    
    int intersectionSize = sizeIntersection (set1 , size1 , set2, size2);
    
    int * intersection = new int[intersectionSize];
    
    int  k = 0;
    
    for (int i = 0; i < size2; i++) {
        
        if (inSet (set1 , size1 , set2[i])) {
            intersection[k] - set2[i];
        }
    }
    return intersection;
}

void printIntersection (int * set1, int size1, int * set2, int size2) {
    
    for (int i = 0; i < size2; i++) {
        
        if (inSet (set1 , size1 , set2[i])) {
            std::cout << set2[i] << " ";
        }
    }
}

void printIntersectionBitMask (int * univSet, int * set1, int * set2, int setSize) {
    
    for (int i = 0; i <setSize; i++) {
        
        if (set1[i]  == 1 && set2[i] == 1) {
            std::cout << univSet[i] << " ";
        }
    }
}

int main () {
    
    int sizeNumbers = 10;

    int * numbers = new int[sizeNumbers];
    
    for (int i = 0; i < sizeNumbers; i++) {
    }
    
    printArray (numbers, sizeNumbers);
    
    std::cout << std::endl;

    int sizeNumbers2 = 8;
    
    int * numbers2 = new int[sizeNumbers2];

    for (int i = 0; i < sizeNumbers2; i++) {
        numbers2[i] = i+8;
    }
    
    printArray (numbers2, sizeNumbers2);
    
    std::cout << std::endl;
 
    printIntersection (numbers, sizeNumbers, numbers2, sizeNumbers2);
    
    std::cout << std::endl;

    std::cout << "Numbers is set: " << isSet (numbers, sizeNumbers) << std::endl;
    
    int target = 10;
    
    std::cout << "In set: target " << target << " -> " << inSet (numbers, sizeNumbers, target);
    
    return 0;
}