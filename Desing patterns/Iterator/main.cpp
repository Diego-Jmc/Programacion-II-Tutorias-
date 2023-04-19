#include "Vector.cpp"
#include "Empleado.h"


int main() {

    Vector<Empleado> *vectorDeEmpleados = new Vector<Empleado>(20);

    Departamento* departamentoVentas = new Departamento(1, "Ventas", "Ciudad de Mexico");
    Departamento* departamentoFinanzas = new Departamento(2, "Finanzas", "Monterrey");
    Departamento* departamentoMarketing = new Departamento(3, "Marketing", "Guadalajara");

    // Crear algunos empleados
    Empleado* e1 = new Empleado("100", "Juan Perez", "Vendedor", departamentoVentas);
    Empleado* e2 = new Empleado("101", "María García", "Vendedor", departamentoVentas);
    Empleado* e3 = new Empleado("102", "Pedro Ramírez", "Contador", departamentoFinanzas);
    Empleado* e4 = new Empleado("103", "Ana López", "Contador", departamentoFinanzas);
    Empleado* e5 = new Empleado("104", "Miguel Torres", "Analista de Mercado", departamentoMarketing);
    Empleado* e6 = new Empleado("105", "Carla Sánchez", "Analista de Mercado", departamentoMarketing);


    vectorDeEmpleados->push(e1);
    vectorDeEmpleados->push(e2);
    vectorDeEmpleados->push(e3);
    vectorDeEmpleados->push(e4);
    vectorDeEmpleados->push(e5);
    vectorDeEmpleados->push(e6);

    std::cout<<vectorDeEmpleados->toString()<<std::endl;

    // puede devolver null , usar con cuidado -> utilizar try catch
    try{
        Empleado *found = vectorDeEmpleados->findById("100");
        if(found){
            std::cout<<found->toString()<<std::endl;
        }else{
            throw std::nullptr_t();
        }
    }catch(std::nullptr_t e){
        std::cerr << "No existe el usaurio << std::endl";
    }

    Iterator<Empleado> *iterador = vectorDeEmpleados->getIterator();

    std::cout<<"USANDO ITERADOR"<<std::endl;
    std::cout<<iterador->getNext()->toString()<<std::endl;
    std::cout<<iterador->getNext()->toString()<<std::endl;
    std::cout<<iterador->getNext()->toString()<<std::endl;
    iterador->reset();
    std::cout<<"ITERADOR RESETEADO"<<std::endl;
    std::cout<<iterador->getNext()->toString()<<std::endl;


    return 0;
}
