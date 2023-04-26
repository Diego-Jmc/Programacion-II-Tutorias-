//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_SAMSUMGPHONE_H
#define ABSTRACT_FACTORY_SAMSUMGPHONE_H


#include "Phone.h"

class SamsungPhone : public Phone {
protected:
    std::string branch;
    float price;
public:
    SamsungPhone();
    virtual std::string getBranch() override;
    virtual std::string getPrice() override;
};


#endif //ABSTRACT_FACTORY_SAMSUMGPHONE_H
