#include <iostream>
using namespace std;

int main()
{    
    int x = 2; 
    int y = 1;
    
    cin >> x >> y;
    
    if (y <= 100 && y >= 1 && x <= 16 && x >= 2)
    {
        
    }
    else
    {
        cout << "Invalid input data!";
        return 0;
    }
        int octalNum[100]; 
  
    int i = 0; 
    while (y != 0) { 
        octalNum[i] = y % x; 
        y = y / x; 
        i++; 
    } 
  
    for (int j = i - 1; j >= 0; j--) {
        int a = octalNum[j];
        if (a == 10) cout << "A";
        else if (a == 11) cout << "B";
        else if (a == 12) cout << "C";
        else if (a == 13) cout << "D";
        else if (a == 14) cout << "E";
        else if (a == 15) cout << "F";
        else cout << octalNum[j];
    }
    
    return 0;
}
