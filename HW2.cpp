#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int hcf;
    
    cin >> x >> y >> z;
    
    if (y <= 300 && y >= 20 && x <= 300 && x >= 20 && z <= 300 && z >=20)
    {
        
    }
    else
    {
        cout << "Invalid input data!";
        return 0;
    }

    if (x > y && y > z) {   
    int temp = y;
    y = x;
    x = temp;
    }
    for (int i = 1; i <=  y; ++i) {
    if (x % i == 0 && y % i ==0) {
      hcf = i;
    }
  }

  cout << hcf;
  
    return 0;
}
