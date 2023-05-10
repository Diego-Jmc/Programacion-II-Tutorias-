//
// Created by diego on 10/5/2023.
//

#ifndef EXAMENPROGRAII_AREA_H
#define EXAMENPROGRAII_AREA_H
#include "Region.h"
#include "List.cpp"

class Area : public Region {
private:
    std::string name;
    List<Region> *regions;
public:
    Area(const std::string& areaName);
    double getCantContagiados() override;
    double getCantFallecidos() override;
    std::string getName() const;
    void addRegion(Region *r);

};
#endif //EXAMENPROGRAII_AREA_H
