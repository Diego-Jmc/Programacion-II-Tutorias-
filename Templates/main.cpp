#include <iostream>

template<typename T>
T suma(T val1,T val2){
    return val1+val2;
}


int main() {

    std::cout<<suma<std::string>("3","3")<<std::endl;


    return 0;
}
