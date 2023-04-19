#include "List.cpp"
#include "Car.h"
#include "Account.h"

int main() {

    Account *clientAccount = new Account(500);
    Client *client = new Client("Goku",clientAccount);

    std::cout<<client->getAccount();


    return 0;
}
