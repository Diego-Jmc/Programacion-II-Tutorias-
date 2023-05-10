#include <iostream>
#include "Profesor.h"
#include <fstream>



void save(Profesor *p){

    Node<Curso> *temp = p->getCursos()->getRoot();

    std::ofstream archivo("profesores.txt", std::ios::app); // Apertura en modo de agregado

    archivo<<p->getNombre()<<std::endl;
    archivo<<p->getCodigo()<<std::endl;

    archivo<<"#"<<std::endl;

    while(temp){
        archivo<<temp->getData()->getNombre()<<std::endl;
        archivo<<temp->getData()->getCodigo()<<std::endl;
        archivo<<temp->getData()->getCantidadEstudiantes()<<std::endl;
        temp=temp->getNext();
    }
    archivo<<"#"<<std::endl;
    archivo.close();
}


void load(){

    std::ifstream  archivo("profesores.txt");
    std::string nombre,cod,delim,obj; // profesor
    std::string nomCurso,code,cantEstd; // curso
    std::string linea;

    if(archivo.is_open()){

        while(!archivo.eof()){
            std::getline(archivo,nombre);
            std::getline(archivo,cod);
            std::getline(archivo,delim);
            std::getline(archivo,delim,'#');
            std::stringstream s,out;
            s<<delim;

            while(std::getline(s,nomCurso)){
                if(nomCurso.empty()) break;
                std::getline(s,cantEstd);
                std::getline(s,code);
                out<<nomCurso<<std::endl;
                out<<cantEstd<<std::endl;
                out<<code<<std::endl;
            }

            std::getline(archivo,delim);
            std::cout << "Valor de nombre: " << nombre << std::endl;
            std::cout << "Valor de cod: " << cod << std::endl;
            std::cout<< "Cursos" << std::endl << out.str() << std::endl;
            // en este punto del codigo ya se puede crear un objeto
         }

    }

    archivo.close();
}


int main() {
    Profesor *profesor1 = new Profesor("Juan Perez", 1);
    Curso *curso1 = new Curso("Programacion I", 101, 50);
    Curso *curso2 = new Curso("Estructuras de datos", 201, 40);
    Curso *curso3 = new Curso("Bases de datos", 301, 30);
    profesor1->agregarCurso(curso1);
    profesor1->agregarCurso(curso2);
    profesor1->agregarCurso(curso3);

    // Crear profesor 2
    Profesor *profesor2 = new Profesor("Maria Rodriguez", 2);
    Curso *curso4 = new Curso("Programacion II", 102, 45);
    Curso *curso5 = new Curso("Sistemas operativos", 202, 35);
    Curso *curso6 = new Curso("Redes de computadoras", 302, 25);
    Curso *curso7 = new Curso("Inteligencia artificial", 402, 20);
    profesor2->agregarCurso(curso4);
    profesor2->agregarCurso(curso5);
    profesor2->agregarCurso(curso6);
    profesor2->agregarCurso(curso7);


    save(profesor1);
    save(profesor2);

    load();

    delete curso1;
    delete curso2;
    delete curso3;
    delete curso4;
    delete curso5;
    delete curso6;
    delete curso7;
    delete profesor1;
    delete profesor2;

    return 0;
}
