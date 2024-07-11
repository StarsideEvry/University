#include "Account.h"
#include <iostream>

void Account::AccountWithdraw(double amount) 
{
    if (amount <= AccountBalance) {
        AccountBalance -= amount;
        std::cout << AccountBalance << std::endl;
    } else {
        std::cout << std::endl;
    }
}
void Account::AccountDeposit(double amount)
{
    AccountBalance += amount;
    std::cout << AccountBalance << std::endl;
}