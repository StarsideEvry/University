#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int max;
    
    cin >> x >> y >> z;
    max = (x > y ) ? x : y;
    max = (max > z) ? max : z;
    
    if (y <= 100 && y >= 10 && x <= 100 && x >= 10 && z <= 100 && z >=10)
    {
        
    }
    else
    {
        cout << "Invalid input data!";
        return 0;
    }

    do
    {
        if (max % x == 0 && max % y == 0 && max % z == 0)
        {
            cout << max;
            break;
        }
        else
            ++max;
    } while (true);
  
    return 0;
}
