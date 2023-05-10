#include "Pais.h"
#include "Region.h"
#include "Area.h"

int main() {

    Area *r = new Area("Area Mudial");

    Area *americana = new Area("Area americana");
    americana->addRegion(new Pais("Costa Rica",100,10));
    americana->addRegion(new Pais("Mexico",1000,40));
    Area *asiatica = new Area("Asiatica");
    asiatica->addRegion(new Pais("China",100000,1500));

    r->addRegion(americana);
    r->addRegion(asiatica);


    std::cout<<r->getCantContagiados();

    return 0;
}
