//
// Created by diego on 26/4/2023.
//

#include "CarFileManager.h"


CarFileManager::CarFileManager(List<Car> *carList, const std::string &fileName) : carList(carList),
                                                                                  fileName(fileName) {}

List<Car> *CarFileManager::getCarList() const {
    return carList;
}

void CarFileManager::setCarList(List<Car> *carList) {
    CarFileManager::carList = carList;
}

const std::string &CarFileManager::getFileName() const {
    return fileName;
}

void CarFileManager::setFileName(const std::string &fileName) {
    CarFileManager::fileName = fileName;
}

void CarFileManager::guardarCarro(Car *c) {
    std::ifstream lectura(fileName);
    std::string linea="";
    std::string texto="";

    if(lectura.is_open()){

        while(!lectura.eof()){
            std::getline(lectura,linea);
            texto+=linea+"\n";
        }
    }

    lectura.close();

    std::stringstream s;

    std::ofstream archivo(fileName);

    s<<texto;
    s<<"Marca:"<<c->getMake()<<std::endl;
    s<<"Modelo:"<<c->getModel()<<std::endl;
    s<<"Annio:"<<c->getYear();


    archivo<<s.str();
    archivo.close();
}

void CarFileManager::guardarCarrosEnArchivo() {

    // totalmente incorrecto
    // la manera de hacerlo es con iterador

    Node<Car> *root = carList->getRoot();
    Node<Car> *temp = root;

    while(temp){
        guardarCarro(temp->getData());
        temp=temp->getNext();
    }

}

List<Car> * CarFileManager::cargar() {
    List<Car> *listToLoad = new List<Car>();
    std::ifstream archivo(fileName);

    std::string linea,texto;
    std::string marca;
    std::string modelo;
    std::string annio;
    std::string empty;
    std::string description;

    if(archivo.is_open()){
        std::getline(archivo,empty);

        while(!archivo.eof()){
            std::getline(archivo,description,':');
            std::getline(archivo,marca);
            std::getline(archivo,description,':');
            std::getline(archivo,modelo);
            std::getline(archivo,description,':');
            std::getline(archivo,annio);
            Car *c = new Car(marca,modelo, std::stoi(annio));
            listToLoad->insert(c);
        }

    }

    return listToLoad;

}