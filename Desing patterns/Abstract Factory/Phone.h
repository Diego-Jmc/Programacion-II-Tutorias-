//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_PHONE_H
#define ABSTRACT_FACTORY_PHONE_H
#include <iostream>

class Phone {
protected:
    std::string branch;
    float price;
public:
    Phone(){
        this->branch = "";
        this->price = 0;
    }

    virtual ~Phone() {

    }

    virtual std::string getBranch() = 0;
    virtual std::string getPrice() = 0;
};


#endif //ABSTRACT_FACTORY_PHONE_H
