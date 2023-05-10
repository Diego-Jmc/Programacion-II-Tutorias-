//
// Created by diego on 3/5/2023.
//

#include "profesor.h"

Profesor::Profesor(std::string nombre, int codigo) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->cursos = new List<Curso>();
}

std::string Profesor::getNombre() const {
    return nombre;
}

int Profesor::getCodigo() const {
    return codigo;
}

List<Curso> *Profesor::getCursos() const {
    return cursos;
}

void Profesor::agregarCurso(Curso *curso) {
    cursos->insert(curso);
}

