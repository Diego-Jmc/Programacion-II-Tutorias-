//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_APPLEPHONE_H
#define ABSTRACT_FACTORY_APPLEPHONE_H
#include "Phone.h"

class ApplePhone : public Phone{
protected:
    std::string branch;
    float price;
public:
    ApplePhone();
    virtual std::string getBranch() override;
    virtual std::string getPrice() override;
};


#endif //ABSTRACT_FACTORY_APPLEPHONE_H
