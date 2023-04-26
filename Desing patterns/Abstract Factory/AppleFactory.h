//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_APPLEFACTORY_H
#define ABSTRACT_FACTORY_APPLEFACTORY_H

#include "ElectronicFactory.h"
#include "ApplePhone.h"
#include "AppleWatch.h"

class AppleFactory : public ElectronicFactory {
public:
    virtual Phone* getPhone() override;
    virtual SmartWatch* getSmartWatch() override;
};


#endif //ABSTRACT_FACTORY_APPLEFACTORY_H
