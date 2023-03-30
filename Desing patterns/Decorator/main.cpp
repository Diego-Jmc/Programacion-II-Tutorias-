#include <iostream>
#include "HeroArmorDecorator.h"
#include "HeroMagicPowerDecorator.h"
#include "Wizard.h"



int main() {

    IHero *hero1 = new Wizard();

    std::cout<<hero1->getArmor()<<std::endl;
    std::cout<<hero1->getDamage()<<std::endl;

    hero1 = new HeroMagicPowerDecorator(hero1);

    std::cout<<"MAGIC POWER DECORATOR"<<std::endl;

    std::cout<<hero1->getArmor()<<std::endl;
    std::cout<<hero1->getDamage()<<std::endl;

    std::cout<<"MAGIC POWER AND ARMOR"<<std::endl;
    hero1 = new HeroArmorDecorator(hero1);
    std::cout<<hero1->getArmor()<<std::endl;
    std::cout<<hero1->getDamage()<<std::endl;


    return 0;
}
