#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>





struct Paciente{
    std::string ID;
    std::string telefono;
    std::string nombre;
    std::string correo;
    std::string secuencia;


    float getPorcentaje(float n , float k) const{
        return ((k*100)/n);
    }


    std::string obtenerReporte() const{

        int contA = 0,contG = 0,contT = 0,contC = 0;

        const int n = secuencia.size();

        for(int i = 0;i<secuencia.size(); i++){
            if(secuencia[i] == 'A')
                contA++;
            if(secuencia[i] == 'G')
                contG++;
            if(secuencia[i] == 'T')
                contT++;
            if(secuencia[i] == 'C')
                contC++;
        }

        std::stringstream s;
        s<<"[";
        s<<""<<"A- "<< getPorcentaje(n,contA) << "%";
        s<<""<<"G- "<< getPorcentaje(n,contG) << "%";
        s<<""<<"T- "<< getPorcentaje(n,contT) << "%";
        s<<""<<"C- "<< getPorcentaje(n,contC) << "%";
        s<<"]";
        return s.str();
    }

};


std::vector<Paciente> leerArchivo(std::string filename){

    std::vector<Paciente> pacientes;
    std::ifstream file(filename);
    std::string linea;

    std::getline(file,linea); // saltar la primera linea

    while(std::getline(file,linea)){
        std::stringstream s(linea);

        std::string field;
        Paciente p;

        std::getline(s,field,',');
        p.ID = field;

        std::getline(s,field,',');
        p.nombre = field;

        std::getline(s,field,',');
        p.telefono = field;

        std::getline(s,field,',');
        p.correo = field;

        std::getline(s,field,',');
        p.secuencia = field;

        pacientes.push_back(p);
    }

    file.close(); // cerrar archivo

    return pacientes;
}

void mostrarPacientes(std::vector<Paciente> &pacientes){

    for (const auto& paciente : pacientes) {
        std::cout<<paciente.ID<<std::endl;
        std::cout<<paciente.nombre<<std::endl;
        std::cout<<paciente.correo<<std::endl;
        std::cout<<paciente.telefono<<std::endl;
        std::cout<<paciente.secuencia<<std::endl;
        std::cout<<"REPORTE ) "<<paciente.obtenerReporte()<<std::endl;
    }

}

int main() {

      std::vector<Paciente> pacientes = leerArchivo("pacientes.txt");
        mostrarPacientes(pacientes);

    return 0;
}
