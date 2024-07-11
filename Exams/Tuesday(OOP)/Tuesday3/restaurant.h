#pragma once

#include "account.h"

class Restaurant
{
public:
    void OpenAccount(double account, int table);
    void CloseAccount(double account, int table);
    void CheckAccount(double account, int table);
};