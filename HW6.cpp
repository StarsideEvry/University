#include <iostream>
#include <math.h>
using namespace std;

   bool checkSquare(int n)
{
    return pow((int)sqrt(n), 2) == n;
}

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

    int main() {

    int n;
    int sum = 0;
    cin >> n;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0 && !checkPrime(i)){
            sum += i;
        }
    }

    if (n <= 2000 && n >= 2)
    {
        
    }
    else
    {
        cout << "Invalid input data!";
        return 0;
    }

    cout << sum;
    return 0;
}
