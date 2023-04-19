//
// Created by diego on 19/4/2023.
//

#include "Empleado.h"

Empleado::Empleado(std::string id, std::string nombre, std::string puesto, Departamento* departamento)
        : id(id), nombre(nombre), puesto(puesto), departamento(departamento)
{
}

std::string  Empleado::getId() const {
    return id;
}

std::string Empleado::getNombre() const {
    return nombre;
}

std::string Empleado::getPuesto() const {
    return puesto;
}

Departamento* Empleado::getDepartamento() const {
    return departamento;
}

void Empleado::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Empleado::setPuesto(std::string puesto) {
    this->puesto = puesto;
}

void Empleado::setDepartamento(Departamento* departamento) {
    this->departamento = departamento;
}

std::string Empleado::toString() const {
    std::stringstream s;
    s << "ID: " << id << "\n";
    s << "Nombre: " << nombre << "\n";
    s << "Departamento:\n" << departamento->toString() << "\n";
    return s.str();
}


void Empleado::trabajar() {
    std::cout << nombre << " está trabajando..." << std::endl;
}
