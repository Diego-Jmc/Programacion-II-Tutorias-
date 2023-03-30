//
// Created by diego on 29/3/2023.
//

#ifndef DECORATOR_WIZARD_H
#define DECORATOR_WIZARD_H


#include "IHero.h"

class Wizard : public IHero {

public:
    virtual float getDamage() override{
        return 100;
    }
    virtual float getArmor()override{
        return 20;
    }

};


#endif //DECORATOR_WIZARD_H
