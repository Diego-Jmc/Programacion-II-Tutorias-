#include <iostream>

class IMenu{
public:
    virtual void mostrarMenu() = 0;
};

class MenuAdmin : public IMenu{

};

class MenuPrincipal : public IMenu{
public:
    void mostrarMenu()override{
        int opc;
        bool salida = false;

        while(!salida){
            std::cout<<"(1) Menu administrador"<<std::endl;
            std::cout<<"(2) Menu informes"<<std::endl;
            std::cout<<"(3) salir"<<std::endl;
            std::cin>>opc;

            switch(opc){
                case 1:
                    std::cout<<"Aca va el menu admin"<<std::endl;
                    break;
                case 2:
                    std::cout<<"Aca va el menu informes"<<std::endl;
                    break;
                case 3:
                    salida = true;
            }
        }

    }
};

int main() {

    IMenu *menu = new MenuPrincipal();

    menu->mostrarMenu();

    return 0;
}
