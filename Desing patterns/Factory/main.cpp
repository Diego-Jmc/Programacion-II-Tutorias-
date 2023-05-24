#include <iostream>


class IAnimal{

protected:
    std::string raza;
    int edad;
public:
    virtual void mostrar() = 0;

};


class Gato : public  IAnimal{
public:
    virtual void mostrar() override{
        std::cout<<raza<<std::endl;

    };
};

class Ave : public IAnimal{
public:
    virtual void mostrar() override{
        std::cout<<raza<<std::endl;

    };
};


class AnimalFactory{

public:
    void mostrarAnimal(){
        IAnimal *animal = getAnimal();
        animal->mostrar();
    }

   virtual IAnimal * getAnimal() = 0;

};

class AvesFactory :public AnimalFactory{

public:
    virtual IAnimal * getAnimal(){
        return new Ave();
    }
};


class GatosFactory : public AnimalFactory{
public:
    virtual IAnimal * getAnimal(){
        return new Gato();
    }
};



void mostrarAnimal(AnimalFactory *factory){
    factory->mostrarAnimal();
}

int main() {

    mostrarAnimal(new AvesFactory());


    return 0;
}
