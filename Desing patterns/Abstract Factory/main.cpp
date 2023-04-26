#include "ElectronicFactory.h"
#include "AppleFactory.h"
#include "SamsungFactory.h"

void creation(ElectronicFactory *factory){
    Phone *p1 = factory->getPhone();
    SmartWatch *w = factory->getSmartWatch();
    std::cout<<p1->getBranch()<<std::endl;
    std::cout<<p1->getPrice()<<std::endl;
    std::cout<<w->getBranch()<<std::endl;
    std::cout<<w->Price()<<std::endl;
    delete p1;
    delete w;
}

template<typename T>
T sum(T val1,T val2){
    return val1+val2;
}


int main() {
    ElectronicFactory *factory = new AppleFactory();

    std::cout<<"***** USO DE FACTORIA APPLE *****"<<std::endl<<std::endl;

    creation(factory);

    factory = new SamsungFactory();

    std::cout<<"***** USO DE FACTORIA SAMGSUNG *****"<<std::endl<<std::endl;
    creation(factory);

    std::cout<<sum<int>(1,2);

    delete factory;

    return 0;
}
