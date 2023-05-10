//
// Created by diego on 3/5/2023.
//


#include "curso.h"

Curso::Curso(std::string nombre, int codigo, int cantidadEstudiantes) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->cantidadEstudiantes = cantidadEstudiantes;
}

std::string Curso::getNombre() const {
    return nombre;
}

int Curso::getCodigo() const {
    return codigo;
}

int Curso::getCantidadEstudiantes() const {
    return cantidadEstudiantes;
}

