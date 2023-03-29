#include "Singleton.h"

int main() {

    Singleton *instance = Singleton::getInstance();

    std::cout<<instance<<"\n";

    Singleton *instance2 = Singleton::getInstance();

    std::cout<<instance2<<"\n";

    //Singleton *i2 = new Singleton(*instance); <- this will fail
    // because the copy constructor is disable




    return 0;
}
