//
// Created by diego on 18/4/2023.
//

#ifndef ADAPTER_VISA_H
#define ADAPTER_VISA_H
#include "PaymentProcessor.h"

class Visa : public PaymentProcessor {

public:
    Visa();
    void processPayment(float) override;
};


#endif //ADAPTER_VISA_H
