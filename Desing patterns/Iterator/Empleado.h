//
// Created by diego on 19/4/2023.
//

#ifndef ITERATOR_EMPLEADO_H
#define ITERATOR_EMPLEADO_H

#include "Departamento.h"

class Empleado {
private:
    std::string id ;
    std::string nombre;
    std::string puesto;
    Departamento* departamento;

public:
    Empleado(std::string id , std::string nombre, std::string puesto, Departamento* departamento);
    std::string  getId() const;
    std::string getNombre() const;
    std::string getPuesto() const;
    Departamento* getDepartamento() const;
    void setNombre(std::string nombre);
    void setPuesto(std::string puesto);
    void setDepartamento(Departamento* departamento);
    std::string toString() const;
    void trabajar();
};


#endif //ITERATOR_EMPLEADO_H
