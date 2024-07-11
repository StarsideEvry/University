#pragma once

#include <string>

class Account
{
private:
    std::string AccountBank;
    double AccountBalance;
    double AccountDeposit;
    double AccountWithdraw;
public:
    void AccountBank (const std::string & accNum, double StartingBalance): AccountNumber(accNum), AccountBalance(StartingBalance)
    void AccountDeposit(double amount);
    void AccountWithdraw(double amount);
};
