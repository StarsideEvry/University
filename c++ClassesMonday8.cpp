#include <iostream>  
using namespace std;  
  
const int MAX_FLOWERS = 100;  
  
int main() {  
    int flowers[MAX_FLOWERS];  
    int count = 0;  
    int input;  
    int flowersThatNeedWaterCount = 0;  
  
  
    while (cin >> input && input != -1) {  
        if (input > 0) {  
            flowersThatNeedWaterCount++;  
        }  
        flowers[count++] = input;  
    }  
  
    while (cin >> input && input != -1) {  
        if (input >= 0 && input < count && flowers[input] > 0) {  
            flowers[input]--;  
              
            if (flowers[input] == 0) {  
                flowersThatNeedWaterCount--;  
            }  
              
            if (!flowersThatNeedWaterCount) {  
                break;  
            }  
        }  
    }  
  
    for (int i = 0; i < count; i++) {  
        cout << flowers[i] << " ";  
    }  
  
    return 0;  
}