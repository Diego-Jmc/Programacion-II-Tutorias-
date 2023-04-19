//
// Created by diego on 12/4/2023.
//

#ifndef LINKED_LIST_ACCOUNT_H
#define LINKED_LIST_ACCOUNT_H
#include <iostream>


class Account {
public:
    explicit Account(float balance);

    float getBalance() const;

    void setBalance(float balance);

private:
    float balance;

};


#endif //LINKED_LIST_ACCOUNT_H
