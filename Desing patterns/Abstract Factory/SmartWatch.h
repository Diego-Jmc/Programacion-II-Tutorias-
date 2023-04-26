//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_SMARTWATCH_H
#define ABSTRACT_FACTORY_SMARTWATCH_H
#include <iostream>

class SmartWatch{

protected:
    std::string branch;
    float price;
public:
    SmartWatch(){
        this->branch = "";
        this->price = 0;
    }

    virtual ~SmartWatch() {

    }

    virtual std::string getBranch() = 0;
    virtual std::string Price() = 0;
};


#endif //ABSTRACT_FACTORY_SMARTWATCH_H
