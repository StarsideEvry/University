#include <iostream>
using namespace std;

    int SumOfPrimeDivisors(int n)
{

    int sum = 0;

    if (n % 2 == 0) {
        sum = sum + 2;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {

        if (n % i == 0) {
            sum = sum + i;
        }

        while (n % i == 0) {
            n = n / i;
        }
    }

    if (n > 2) {
        sum = sum + n;
    }

    return sum;
}

    int main() {

    int n;
    cin >> n;
    
    if (n <= 2000 && n >= 2)
    {
        
    }
    else
    {
        cout << "Invalid input data!";
        return 0;
    }

    cout << SumOfPrimeDivisors(n);
    return 0;
}
