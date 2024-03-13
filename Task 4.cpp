#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    int i=1;
    int d=0;
    cin >> n;
    
    if (n <= 2000 && n >= 2) {
        
    }
        else {
        cout << "Invalid input data!";
    return 0;
    }
        while(i<=sqrt(n)) {
          if(n%i==0) {
            d++;
             if(i!=(n/i))
              d++;
           }
          i++; 
         }
         
   cout<<d;
   
   return 0;
}