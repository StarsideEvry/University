#pragma once

#include "Tax.h"

class Account
{
public:
// Constructors
    Account(int account, int withdraw, int check);
    Account(int ammount);
// Fields
    int ammount;
// Methods
    int check();
};