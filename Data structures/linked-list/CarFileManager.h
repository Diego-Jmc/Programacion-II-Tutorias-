//
// Created by diego on 26/4/2023.
//

#ifndef LINKED_LIST_CARFILEMANAGER_H
#define LINKED_LIST_CARFILEMANAGER_H
#include "List.cpp"
#include "Car.h"
#include <fstream>

class CarFileManager {
public:
    CarFileManager(List<Car> *carList, const std::string &fileName);

    List<Car> *getCarList() const;

    void setCarList(List<Car> *carList);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

private:
    List<Car> *carList;
    std::string fileName;
    void guardarCarro(Car *c);
public:
    void guardarCarrosEnArchivo();
    List<Car> * cargar();
};




#endif //LINKED_LIST_CARFILEMANAGER_H
