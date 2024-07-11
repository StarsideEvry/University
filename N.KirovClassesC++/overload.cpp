 
#include <iostream>
using namespace std;

#include "ccc_time.h"

long operator-(Time a, Time b);
Time operator+(Time a, long sec);
bool operator==(Time a, Time b);
bool operator!=(Time a, Time b);
ostream &operator<<(ostream &out, const Time &a);
Time operator++(Time &a);
Time operator++(Time &a, int dummy);

int main()
{  Time now;
   cout << "Now it is " << now << "\n";
   Time later = now + 1000;
   cout << "A thousand seconds later it is " << later << "\n";
 
   Time now2;
   if (now == now2)
      cout << "It still is " << now2 << "\n";
   if (now != now2)
      cout << "It is already " << now2 << "\n";
   cout << "Another " << later - now2 << " seconds until "
        << later << "\n";
 
   now = Time();
   cout << "Now it is " << now << "\n";
   cout << "One second later " << (++now) << "\n";
   cout << "The same time " << (now++);
   cout << " and 60 seconds later " << now << "\n";
   return 0;
}