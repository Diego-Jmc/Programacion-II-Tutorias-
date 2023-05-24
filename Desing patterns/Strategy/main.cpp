#include <iostream>


class PaymentStrategy{
public:
    virtual void pay() = 0;
    virtual void collectPaymentDetails() = 0;

};

class PaymentBySimpeMovil :public PaymentStrategy{

public:
    void pay()override{
        collectPaymentDetails();
        std::cout<<"El pago se realizo utilizando: Simpe movil"<<std::endl;
    }

    void collectPaymentDetails() override{
        std::string phone;
        std::cout<<"Introduzca el numero de telefono"<<std::endl;
        getline(std::cin,phone);
        std::cout<<phone<<std::endl;
    }

};

class PaymentByMasterCard:public PaymentStrategy{

public:
    void pay() override{
        collectPaymentDetails();
        std::cout<<"Se ha pagado utilizando Mastercard"<<std::endl;
    }

    void collectPaymentDetails() override{
        std::string cardNumber;
        std::string ownerName;

        std::cout << "Numero de tarjeta ";
        std::cin >> cardNumber;

        std::cout << "Nombre del dueno: ";
        std::cin.ignore();
        std::getline(std::cin, ownerName);

        std::cout << "\nNumero de tarjeta: " << cardNumber << std::endl;
        std::cout << "Nombre del dueno: " << ownerName << std::endl;
    }

};


class Context{
private:
    PaymentStrategy *paymentStrategy;
public:
    void setPaymentStrategy(PaymentStrategy *strategy){
        this->paymentStrategy = strategy;
    }

    void processPayment(){
        if(paymentStrategy){
            paymentStrategy->pay();
        }
    }
};

int main() {
// Create pointers to payment strategies
    PaymentStrategy* simpleMovilPayment = new PaymentBySimpeMovil();
    PaymentStrategy* masterCardPayment = new PaymentByMasterCard();

    // Create a pointer to the context object
    Context* context = new Context();

    // Process payment using Simple Movil strategy
    context->setPaymentStrategy(simpleMovilPayment);
    context->processPayment();

    std::cout << std::endl;

    // Process payment using MasterCard strategy
    context->setPaymentStrategy(masterCardPayment);
    context->processPayment();

    // Free memory
    delete simpleMovilPayment;
    delete masterCardPayment;
    delete context;

    return 0;
}
