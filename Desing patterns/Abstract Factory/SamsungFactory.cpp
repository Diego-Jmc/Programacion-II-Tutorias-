//
// Created by diego on 26/4/2023.
//

#include "SamsungFactory.h"
Phone* SamsungFactory::getPhone() {
    return new SamsungPhone();
}

SmartWatch* SamsungFactory::getSmartWatch() {
    return new SamsungWatch();
}