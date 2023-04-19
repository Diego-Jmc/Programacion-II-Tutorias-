//
// Created by diego on 18/4/2023.
//

#ifndef ADAPTER_PAYMENTPROCESSOR_H
#define ADAPTER_PAYMENTPROCESSOR_H
#include <iostream>

class PaymentProcessor {

public:
    virtual void processPayment(float) = 0;
    virtual ~PaymentProcessor(){};
};


#endif //ADAPTER_PAYMENTPROCESSOR_H
