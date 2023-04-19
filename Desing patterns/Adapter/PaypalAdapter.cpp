//
// Created by diego on 18/4/2023.
//

#include "PaypalAdapter.h"

PaypalAdapter::PaypalAdapter(Paypal *paypal) : paypal(paypal) {}


void PaypalAdapter::processPayment(float n) {
    paypal->submitPayment(n);
}

Paypal *PaypalAdapter::getPaypal() const {
    return paypal;
}

void PaypalAdapter::setPaypal(Paypal *paypal) {
    PaypalAdapter::paypal = paypal;
}


PaypalAdapter::~PaypalAdapter() {
    delete paypal;
}
