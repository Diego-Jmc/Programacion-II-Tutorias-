//
// Created by diego on 9/5/2023.
//

#ifndef EXAMENPROGRAII_REGION_H
#define EXAMENPROGRAII_REGION_H
#include <iostream>
using namespace std;
class Region {
protected:
    double cantContagio;
    double cantFallecidos;
public:
    virtual double getCantContagiados() = 0;
    virtual double getCantFallecidos() = 0;

};

#endif //EXAMENPROGRAII_REGION_H
