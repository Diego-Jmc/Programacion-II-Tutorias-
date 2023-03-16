//
// Created by diego on 16/3/2023.
//

#include "Singleton.h"


Singleton::Singleton() {

}


Singleton *Singleton::getInstance() {
    static Singleton *instace = new Singleton();
    return instace;
}
