//
// Created by diego on 10/5/2023.
//

#include "Area.h"

Area::Area(const std::string& areaName) {
    this->name = areaName;
    regions = new List<Region>();
}

double Area::getCantContagiados() {
   Node<Region> *root = regions->getRoot();
   double cantContagiadosTotal = 0;
   while(root){
       cantContagiadosTotal+= root->getData()->getCantContagiados();
       root = root->getNext();
   }

   return cantContagiadosTotal;
}

double Area::getCantFallecidos() {
}

std::string Area::getName() const {
    return name;
}

void Area::addRegion(Region *r) {
    regions->insert(r);
}