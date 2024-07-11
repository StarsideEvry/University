#include <iostream>
using namespace std;

int minElem(int * set, int sizeSet) {
    int minValue = set[0];
    for (int i = 1; i < sizeSet; i++) {
        if (minValue > set[i]) {
            minValue = set[i];
        }
    }
    return minValue;
}

int maxElem(int * set, int sizeSet) {
    int maxValue = set[0];
    for (int i = 1; i < sizeSet; i++) {
        if (maxValue < set[i]) {
            maxValue = set[i];
        }
    }
    return maxValue;
}

int sumElementsInInterval(int * set, int sizeSet, int minValue, int maxValue) {
    int sum = 0;
    for (int i = 0; i < sizeSet; i++) {
        if (minValue <= set[i] && set[i] <= maxValue) {
            sum += set[i];
        }
    }
    return sum;
}

int sumElements(int * set1, int sizeSet1, int * set2, int sizeSet2) {
    int minValue = minElem(set2, sizeSet2);
    int maxValue = maxElem(set1, sizeSet1);
    return sumElementsInInterval(set1, sizeSet1, minValue, maxValue) +
        sumElementsInInterval(set2, sizeSet2, minValue, maxValue);
} 

bool inSet(int* set1, int sizeSet1, int target) {
    for (int i = 0; i < sizeSet1; i++) {
        if (set1[i] == target) {
            return true;
        }
    }
    return false;
}

int countElementsInIntersection(int* set1, int sizeSet1, int* set2, int sizeSet2) {
    int counter = 0;
    for (int i = 0; i < sizeSet1; i++) {
        if (inSet(set2, sizeSet2, set1[i])) {
            counter++;
        }
    }
    return counter;
}

string codeMessage(string message, int shiftValue) {
    string resultMessage = message;
    for(int i = 0; i < message.length(); i++) {
        //if () {
        resultMessage[i] = message[i] + shiftValue;
    }
    //else {
        //result;
    }
    //}

//}

int main() {
    int sizeSet1 = 4;
    int sizeSet2 = 4;
    int* set1 = new int [sizeSet1];
    int* set2 = new int [sizeSet2];
    char charSet[4] = {'e', 's', 't', 'm'};

    string message = " This is a test message! ";


    cout << "Hello world!\n";
    return 0;
}