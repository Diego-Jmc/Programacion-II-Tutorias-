//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_ELECTRONICFACTORY_H
#define ABSTRACT_FACTORY_ELECTRONICFACTORY_H
#include "SmartWatch.h"
#include "Phone.h"

class ElectronicFactory {
public:
    virtual Phone *getPhone() =0;
    virtual SmartWatch * getSmartWatch() = 0;

    virtual ~ElectronicFactory() {

    }
};


#endif //ABSTRACT_FACTORY_ELECTRONICFACTORY_H
