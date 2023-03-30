//
// Created by diego on 29/3/2023.
//

#ifndef DECORATOR_HEROARMORDECORATOR_H
#define DECORATOR_HEROARMORDECORATOR_H


#include "IHero.h"

class HeroArmorDecorator : public IHero{

protected:
    IHero *hero;
public:
    HeroArmorDecorator(IHero *h){
        this->hero = h;
    }

    virtual float getDamage() override{
        return hero->getDamage();
    }
    virtual float getArmor()override{
        return hero->getArmor() + 10;
    }

};


#endif //DECORATOR_HEROARMORDECORATOR_H
