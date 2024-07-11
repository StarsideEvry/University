#pragma once

#include "Account.h"
#include "Tax.h"

class ATM
{
public:
// Constructor
    ATM(int atm, int withdraw, int check);
    ATM(int ammount);
// Fields
    int ammount;
// Methods
    int withdraw(int ammount, Account *acc);
    int withdraw(int ammount, StandardAccount *acc);
    int check(Account *acc);
    int check(StandardAccount *acc);
};