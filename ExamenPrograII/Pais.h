//
// Created by diego on 10/5/2023.
//

#ifndef EXAMENPROGRAII_PAIS_H
#define EXAMENPROGRAII_PAIS_H
#include "Region.h"

class Pais : public Region{
private:

    string nombre;
public:
    Pais(string nombrePais, double contagiados, double fallecidos);
    double getCantContagiados()override;
    double getCantFallecidos() override;
};


#endif //EXAMENPROGRAII_PAIS_H
