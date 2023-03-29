#include <iostream>
#include <exception>
#include "ExcpEnTipoDeElemento.h"


int parseInt(std::string valueToParse){
    try{
        return std::stoi(valueToParse);
    }catch(std::invalid_argument e){
        throw ExcpEnTipoDeElemento();
    }

}

int main() {


    try{
        std::cout<<parseInt("perro")<<std::endl;
    }catch(ExcpEnTipoDeElemento e){
        std::cout<<e.what();
    }


    return 0;
}
