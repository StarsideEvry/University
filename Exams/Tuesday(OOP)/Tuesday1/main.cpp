#include <iostream>
#include <iomanip>
#include "ATM.h"

int main()
{
std::cout << std::fixed << std::setprecision(2);

Account acc1(100);//no Tax
StandardAccount acc2(100);//with Tax
ATM atm(120);//ATMAvailable Cash

bool ok = false;

ok = atm.withdraw(50, &acc1);
std::cout << (ok ? "OK" : "FAIL") << std::endl; // expect OK
std::cout << "$" << atm.check(&acc1) << std::endl; // expect 50

ok = atm.withdraw(50, &acc2);
std::cout << (ok ? "OK" : "FAIL") << std::endl; // expect OK
std::cout << "$" << atm.check(&acc2) << std::endl; // expect 49

ok = atm.withdraw(50, &acc1);
std::cout << (ok ? "OK" : "FAIL") << std::endl; // expect FAIL
std::cout << "$" << atm.check(&acc1) << std::endl; // expect 50
return 0;
}