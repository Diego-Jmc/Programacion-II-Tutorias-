//
// Created by diego on 18/4/2023.
//

#ifndef ADAPTER_PAYPALADAPTER_H
#define ADAPTER_PAYPALADAPTER_H
#include "PaymentProcessor.h"
#include "Paypal.h"


// we are going to wrap the pay-pal method processor with an interface
// compatible with our code

class PaypalAdapter : public PaymentProcessor{

private:
    Paypal *paypal;
public:
    explicit PaypalAdapter(Paypal *paypal);

    void processPayment(float) override;

    Paypal *getPaypal() const;

    void setPaypal(Paypal *paypal);

    virtual ~PaypalAdapter();

};


#endif //ADAPTER_PAYPALADAPTER_H
