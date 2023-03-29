//
// Created by diego on 29/3/2023.
//

#ifndef EXCEPCIONES_EXCPENTIPODEELEMENTO_H
#define EXCEPCIONES_EXCPENTIPODEELEMENTO_H
#include <iostream>

class ExcpEnTipoDeElemento :public std::exception {

public:
    const char* what() const noexcept override{
        return "No se puede convertir el valor dado a entero";
    }

};




#endif //EXCEPCIONES_EXCPENTIPODEELEMENTO_H
