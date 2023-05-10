//
// Created by diego on 3/5/2023.
//

#ifndef FILESMAGANGMENT_PROFESOR_H
#define FILESMAGANGMENT_PROFESOR_H
#include "List.cpp"
#include "Curso.h"

class Profesor {
private:
    std::string nombre;
    int codigo;
    List<Curso> *cursos;

public:
    Profesor(std::string nombre, int codigo);
    std::string getNombre() const;
    int getCodigo() const;
    List<Curso> *getCursos() const;
    void agregarCurso(Curso* curso);
};


#endif //FILESMAGANGMENT_PROFESOR_H
