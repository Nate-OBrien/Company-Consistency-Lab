// include guards
#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

#include <iostream>
#include <cctype>
#include <string>

// returns a greeting using name and company's name
std::string greeting(std::string name) {
    return "Hello, " + name + "! Welcome to Pranav Pramod's Lightbulb Store!";
}

// iterates through the reference and changes letters to uppercase
void addressFormatter(std::string& address) {
    for (int i = 0; i < address.length(); i++) {
        address[i] = toupper(address[i]);
    }
}

// prints a closing statement using product name
std::string closing(std::string product) {
    return "Thank you for your purchase of " + product + ". We hope you enjoy it!";
}

#endif
