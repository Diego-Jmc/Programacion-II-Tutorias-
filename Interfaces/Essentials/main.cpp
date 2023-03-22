#include <iostream>

class Animal{

public:
    virtual void makeNoise() = 0;
};

class Dog : public Animal{

public:
    virtual void makeNoise() override{
        std::cout<<"WUF WUF"<<std::endl;
    }

};

class Cat : public Animal{
public:
    virtual void makeNoise() override{
        std::cout<<"MIAU MIAU"<<std::endl;
    }
};

class VectorAnimal{

private:
    int size;
    int len;
    Animal **vec;
public:
    VectorAnimal(int size){
        len = 0;
        this->size = size;
        vec = new Animal *[size];
        for (int i=0;i<size;i++){
            vec[i] = nullptr;
        }
    }

    void insert(Animal *d){
        if(size > len){
            vec[len++] = d;
        }
    }

    void animalsMakingSounds(){
        for(int i=0;i<len;i++){
            vec[i]->makeNoise();
        }
    }

};

int main() {

    VectorAnimal *vector = new VectorAnimal(30);

    vector->insert(new Cat());
    vector->insert(new Dog());
    vector->insert(new Cat());
    vector->insert(new Dog());

    vector->animalsMakingSounds();

    delete vector;

    return 0;
}
