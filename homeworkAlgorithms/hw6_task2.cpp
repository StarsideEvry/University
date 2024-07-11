#include <iostream>
using namespace std;

int main() {

    char nameArray[7] = {'g', 'a', 'n', 'c', 'h', 'e', 'v'};
    
    int letterCheck = 0;
    
    int realSize = sizeof(nameArray) / sizeof(int);
    
    int i, j;

    for (i = 0; i < realSize; i++)
    {
        letterCheck++;

        for (j = 0; j < nameArray[i]; j++)
        {
            //copy the algo and reverse it
        }
        
    }
    
    cout << nameArray[0] << nameArray[1] << nameArray[2] <<
        nameArray[3] << nameArray[4] << nameArray[5] <<
            nameArray[6] << endl << letterCheck;

    return 0;
}