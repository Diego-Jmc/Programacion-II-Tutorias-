//
// Created by diego on 16/3/2023.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H
#include <iostream>
using std::string;

class Singleton {

private:
    Singleton();

    /*
    it is important to disable the copy constructor so the user cannot make a copy
     of the instance object
    */

    Singleton(const Singleton&) = delete;

public:
    static Singleton * getInstance();
};


#endif //SINGLETON_SINGLETON_H
