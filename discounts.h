// include guards
#ifndef DISCOUNTS_H
#define DISCOUNTS_H

#include <iostream>

// applies a discount to the price based on the discount code
float studentDiscount(float price) {
    return price * 0.9;
}

float seniorDiscount(float price) {
    return price * 0.85;
}

// pranav gets a 99% discount
float pranavDiscount(float price) {
    return price * 0.01;
}

#endif
