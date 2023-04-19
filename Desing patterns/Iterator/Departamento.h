//
// Created by diego on 19/4/2023.
//

#ifndef ITERATOR_DEPARTAMENTO_H
#define ITERATOR_DEPARTAMENTO_H
#include <iostream>
#include <sstream>

class Departamento {
private:
    int id;
    std::string nombre;
    std::string localidad;

public:
    Departamento(int id, std::string nombre, std::string localidad);
    int getId() const;
    std::string getNombre() const;
    std::string getLocalidad() const;
    void setNombre(std::string nombre);
    void setLocalidad(std::string localidad);
    std::string toString() const;
};

#endif //ITERATOR_DEPARTAMENTO_H
