#include "PaypalAdapter.h"
#include "Visa.h"


void pay(PaymentProcessor *processor,float amount){
    processor->processPayment(amount);
}

int main() {

    PaymentProcessor *visa = new Visa();
    Paypal *paypal = new Paypal();

    pay(visa,1000);
    // pay(paypal,1000) <- we cannot do that , they are incompatible interfaces

   // so we use an adapter

   PaymentProcessor *paypalAdapter = new PaypalAdapter(paypal);

   pay(paypalAdapter,1000);


    delete visa;
    delete paypalAdapter;
    return 0;
}
