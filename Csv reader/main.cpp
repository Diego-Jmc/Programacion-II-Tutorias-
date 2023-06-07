#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

struct Persona {
    std::string nombre;
    int edad;
    std::string ciudad;
};


std::vector<Persona> leerArchivoCSV(const std::string& nombreArchivo) {
    std::vector<Persona> personas;
    std::ifstream archivo(nombreArchivo);
    std::string linea;

    std::getline(archivo, linea); // saltar la primera linea (encabezado)

    while (std::getline(archivo, linea)) {

        std::stringstream ss(linea);

        std::string campo;
        Persona persona;

        std::getline(ss, campo, ',');
        persona.nombre = campo;

        std::getline(ss, campo, ',');
        persona.edad = std::stoi(campo);

        std::getline(ss, campo, ',');
        persona.ciudad = campo;

        personas.push_back(persona);
    }

    archivo.close();
    return personas;
}


void mostrarPersonas(const std::vector<Persona>& personas) {
    for (const auto& persona : personas) {
        std::cout << "Nombre: " << persona.nombre << std::endl;
        std::cout << "Edad: " << persona.edad << std::endl;
        std::cout << "Ciudad: " << persona.ciudad << std::endl;
        std::cout << std::endl;
    }
}


int main() {

    std::string nombreArchivo = "personas.csv";
    std::vector<Persona> personas = leerArchivoCSV(nombreArchivo);
    mostrarPersonas(personas);


    return 0;
}
