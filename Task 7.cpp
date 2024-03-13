#include <iostream>
#include <vector>
#include <math.h> 
using namespace std;

vector<long long> extended_euclid_gcd(long long a, long long b) 
{
    long long s = 0; long long old_s = 1;
    long long t = 1; long long old_t = 0;
    long long r = b; long long old_r = a;

    while(r != 0) 
    {
        long long quotient = old_r/r;
        
        long long temp = r;
        r = old_r - quotient*r;
        old_r = temp;
        
        temp = s;
        s = old_s - quotient*s;
        old_s = temp;

        temp = t;
        t = old_t - quotient*t;
        old_t = temp;
    }
    vector<long long> result;
    result.push_back(old_r);
    result.push_back(old_s);
    result.push_back(old_t);
    return result;
}

int main() 
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    
    if (a <= 100 && a >= 1 && b <= 100 && b >= 1 && c <= 100 && c >= 1)
    {
        
    }
    else
    {
        cout << "Invalid input data!";
        return 0;
    }
    
    vector<long long> res;
    res = extended_euclid_gcd(a, b);

    
    
    if (c % res[0] == 0)
    {

    }
    else
    {
        cout << "No solution!";
        return 0;
    }
    
    cout << res[1] << endl;
    cout << res[2] << endl;
    
    return 0;
}