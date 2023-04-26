//
// Created by diego on 26/4/2023.
//

#include "AppleFactory.h"

Phone* AppleFactory::getPhone() {
    return new ApplePhone();
}

SmartWatch* AppleFactory::getSmartWatch() {
    return new AppleWatch();
}