#include "CarFileManager.h"


int main() {

    Car *car = new Car("Lamborgini","Gallardo",2001);
    Car *car2 = new Car("Toyota","Corolla",2020);
    Car *car3 = new Car("Nissan","Modelo1",2003);
    Car *car4 = new Car("Lamborgini","Aventador",2010);

    List<Car> *list = new List<Car>();


    list->insert(car);
    list->insert(car2);
    list->insert(car3);
    list->insert(car4);

    CarFileManager *maganer = new CarFileManager(list,"carros.txt");

    maganer->guardarCarrosEnArchivo();

    List<Car> *myList = maganer->cargar();

    std::cout<<myList->toString()<<std::endl;


    return 0;
}


