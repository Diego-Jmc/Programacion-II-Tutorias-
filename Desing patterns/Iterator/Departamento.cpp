//
// Created by diego on 19/4/2023.
//

#include "Departamento.h"

Departamento::Departamento(int id, std::string nombre, std::string localidad)
        : id(id), nombre(nombre), localidad(localidad)
{
}

int Departamento::getId() const {
    return id;
}

std::string Departamento::getNombre() const {
    return nombre;
}

std::string Departamento::getLocalidad() const {
    return localidad;
}

void Departamento::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Departamento::setLocalidad(std::string localidad) {
    this->localidad = localidad;
}

std::string Departamento::toString() const {
    std::stringstream s;
    s << "ID: " << id << "\n";
    s << "Nombre: " << nombre << "\n";
    s << "Localidad: " << localidad << "\n";
    return s.str();
}
