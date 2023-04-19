//
// Created by diego on 12/4/2023.
//

#ifndef LINKED_LIST_CLIENT_H
#define LINKED_LIST_CLIENT_H
#include "Account.h"

class Client {
public:
    Client(const std::string &name, Account *account);

    const std::string &getName() const;

    void setName(const std::string &name);

    Account *getAccount() const;

    void setAccount(Account *account);


    float GetClientBalance();
private:
    std::string name;
    Account *account;


};


#endif //LINKED_LIST_CLIENT_H
