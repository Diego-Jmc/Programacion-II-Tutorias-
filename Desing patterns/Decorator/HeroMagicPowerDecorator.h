//
// Created by diego on 29/3/2023.
//

#ifndef DECORATOR_HEROMAGICPOWERDECORATOR_H
#define DECORATOR_HEROMAGICPOWERDECORATOR_H


#include "IHero.h"

class HeroMagicPowerDecorator : public IHero {

protected:
    IHero *hero;
public:
    HeroMagicPowerDecorator(IHero *h){
        this->hero = h;
    }

    virtual float getDamage() override{
        return hero->getDamage()+50;
    }
    virtual float getArmor()override{
        return hero->getArmor();
    }
};


#endif //DECORATOR_HEROMAGICPOWERDECORATOR_H
