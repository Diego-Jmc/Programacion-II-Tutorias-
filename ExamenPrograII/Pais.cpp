//
// Created by diego on 10/5/2023.
//

#include "Pais.h"
#include <iostream>
#include "Pais.h" // Assuming you have a separate header file for the Pais class

Pais::Pais(string nombrePais, double contagiados, double fallecidos) : nombre(nombrePais) {
    cantContagio = contagiados;
    cantFallecidos = fallecidos;
}

double Pais::getCantContagiados() {
    return cantContagio;
}

double Pais::getCantFallecidos() {
    return cantFallecidos;
}
