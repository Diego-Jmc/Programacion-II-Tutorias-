//
// Created by diego on 12/4/2023.
//

#include "Account.h"

Account::Account(float balance) : balance(balance) {}

float Account::getBalance() const {
    return balance;
}

void Account::setBalance(float balance) {
    Account::balance = balance;
}
