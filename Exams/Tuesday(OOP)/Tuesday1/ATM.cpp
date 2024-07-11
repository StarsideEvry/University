#include "Account.h"
#include "Tax.h"
#include "ATM.h"

ATM::ATM(int atm, int withdraw, int check)
{
}

ATM::ATM(int ammount)
{
}

int ATM::withdraw(int ammount, Account * acc)
{
  if (ammount < acc->ammount)
  {
    acc->ammount -= ammount;
    return 1;
  } else {
    return 0;
  }
}

int ATM::withdraw(int ammount, StandardAccount * acc)
{
  ammount++;
  if (ammount < acc->ammount)
  {
    acc->ammount -= ammount;
    return 1;
  } else {
    return 0;
  }
}

int ATM::check(Account * acc)
{
return acc->ammount;
}

int ATM::check(StandardAccount * acc)
{
return acc->ammount;
}