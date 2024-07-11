#pragma once

class bank
{
private:
    double balance;
    double withdraw;

public:
    void BankAccountActions(double withdraw, double check, double deposit, double transfer);
    void list (std::string accounts);
};