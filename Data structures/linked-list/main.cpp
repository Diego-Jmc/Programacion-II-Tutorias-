#include "List.cpp"
#include "Car.h"

int main() {

    List<Car> *myList = new List<Car>();

    Car* car1 = new Car("Toyota", "Corolla", 2022);
    Car* car2 = new Car("Honda", "Civic", 2021);
    Car* car3 = new Car("Ford", "Mustang", 2020);
    Car* car4 = new Car("Tesla", "Model 3", 2022);
    Car* car5 = new Car("BMW", "M3", 2021);

    // Insert the 5 Car objects into the list
    myList->insert(car1);
    myList->insert(car2);
    myList->insert(car3);
    myList->insert(car4);
    myList->insert(car5);

    std::cout<<myList->toString()<<std::endl;
    delete myList;

    return 0;
}
