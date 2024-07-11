#include <iostream>
#include <string>
using namespace std;

int main() {

    string facultyNum_lastName[1] = {"112270ganchev"};

    string minIndex;
    string midIndex;
    string maxIndex;
    const string toBeFound = "7";
    //add binary search using min, max and mid //add the other symbols to be found
    string facultyNum_lastName_str = facultyNum_lastName[1];

    if (facultyNum_lastName_str.find(toBeFound) != string::npos) 
    { 
        cout << toBeFound 
             << " substring is found in string array: "
             << facultyNum_lastName_str << endl; 
    }
    else
    {
        cout << toBeFound 
             << " substring is not found in string array: "
             << facultyNum_lastName_str << endl; 
    }

    return 0;
}