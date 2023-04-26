//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_SAMSUMGWATCH_H
#define ABSTRACT_FACTORY_SAMSUMGWATCH_H

#include "SmartWatch.h"

class SamsungWatch : public SmartWatch {
public:
    SamsungWatch();
    virtual std::string getBranch() override;
    virtual std::string Price() override;
};
#endif //ABSTRACT_FACTORY_SAMSUMGWATCH_H
