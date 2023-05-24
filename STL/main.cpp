#include <iostream>
#include <vector>

class Persona{
private:
    std::string nombre;
    int edad;
public:
    Persona(const std::string &nombre, int edad) : nombre(nombre), edad(edad) {}

    const std::string &getNombre() const {
        return nombre;
    }

    void setNombre(const std::string &nombre) {
        Persona::nombre = nombre;
    }

    int getEdad() const {
        return edad;
    }

    void setEdad(int edad) {
        Persona::edad = edad;
    }
};

int main() {

    std::vector<Persona*> *vector = new std::vector<Persona*>();

    vector->push_back(new Persona("Juan",20));
    vector->push_back(new Persona("Maria",30));
    vector->push_back(new Persona("Pedro",60));

    vector->begin();

    for(auto &persona : *vector){

        std::cout<<persona->getNombre()<<std::endl;
        std::cout<<persona->getEdad()<<std::endl;

    }

    return 0;
}
