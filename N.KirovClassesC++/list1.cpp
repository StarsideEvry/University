#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{  list<string> staff;     /* шаблон за списък */

   staff.push_back("Cracker, Carl");
   staff.push_back("Hacker, Harry");
   staff.push_back("Lam, Larry");
   staff.push_back("Sandman, Susan");

   list<string>::iterator pos;         /* итератор на списък */

/* добавя елемент на четвърто място */
   pos = staff.begin();
   pos++;
   pos++;
   pos++;
   staff.insert(pos, "Reindeer, Rudolf");

/* отстранява втория елемент */
   pos = staff.begin();
   pos++;
   staff.erase(pos);

/* добавя елемент на последно място */
   pos = staff.end();
   staff.insert(pos, "Zeider, Zeev");

/* обхождане на списък */
   for (pos = staff.begin(); pos != staff.end(); pos++)
      cout << *pos << "\n";      /* извежда съдържание на текущата позиция */
   return 0;
}