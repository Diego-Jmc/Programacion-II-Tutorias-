//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_SAMSUNGFACTORY_H
#define ABSTRACT_FACTORY_SAMSUNGFACTORY_H

#include "ElectronicFactory.h"
#include "SamsumgWatch.h"
#include "SamsumgPhone.h"

class SamsungFactory : public ElectronicFactory {
public:
    virtual Phone* getPhone() override;
    virtual SmartWatch* getSmartWatch() override;
};


#endif //ABSTRACT_FACTORY_SAMSUNGFACTORY_H
