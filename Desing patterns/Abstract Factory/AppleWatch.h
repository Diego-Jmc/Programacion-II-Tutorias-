//
// Created by diego on 26/4/2023.
//

#ifndef ABSTRACT_FACTORY_APPLEWATCH_H
#define ABSTRACT_FACTORY_APPLEWATCH_H


#ifndef APPLE_WATCH_H
#define APPLE_WATCH_H

#include "SmartWatch.h"

class AppleWatch : public SmartWatch {
public:
    AppleWatch();
    virtual std::string getBranch() override;
    virtual std::string Price() override;
};

#endif



#endif //ABSTRACT_FACTORY_APPLEWATCH_H
