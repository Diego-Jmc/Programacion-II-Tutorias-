//
// Created by diego on 3/5/2023.
//

#ifndef FILESMAGANGMENT_CURSO_H
#define FILESMAGANGMENT_CURSO_H


#include <iostream>


class Curso {
private:
    std::string nombre;
    int codigo;
    int cantidadEstudiantes;


public:
    Curso(std::string nombre, int codigo, int cantidadEstudiantes);
    std::string getNombre() const;
    int getCodigo() const;
    int getCantidadEstudiantes() const;
};



#endif //FILESMAGANGMENT_CURSO_H
