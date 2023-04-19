//
// Created by diego on 12/4/2023.
//

#include "Client.h"

Client::Client(const std::string &name, Account *account) : name(name), account(account) {}

const std::string &Client::getName() const {
    return name;
}

void Client::setName(const std::string &name) {
    Client::name = name;
}

Account *Client::getAccount() const {
    return account;
}

void Client::setAccount(Account *account) {
    Client::account = account;
}


float Client::GetClientBalance() {
    return account->getBalance();
}