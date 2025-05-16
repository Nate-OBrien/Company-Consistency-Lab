/*
Name: Nathan O'Brien
Date: 5/16/25
Program: Company Consistency Lab
Extra: The user is able to choose between products of different prices
*/

// including the headers
#include <iostream>
#include "communications.h"
#include "discounts.h"

using namespace std;

int main() {
    // vars
    string name, address, product;
    float price;

    // gets name and address, and passes them into their respective functions, before printing the results
    cout << "Enter your name: ";
    getline(cin, name);
    cout << greeting(name) << endl << endl << "Please enter your address: ";
    getline(cin, address);
    addressFormatter(address);
    cout << "Your address is: " << address << endl;
    
    // EXTRA: The user chooses which product they want
    string productChoiceStr;
    cout << "\nEnter the product you are purchasing:\n1. Lightbulb ($10.99)\n2. LED ($15.99)\n3. Lamp ($24.99)\n";
    getline(cin, productChoiceStr);
    // Convert string to int because switch needs an int
    int productChoice = stoi(productChoiceStr);
    switch (productChoice) {
        // each changes the product and price to the right one
        case 1:
            product = "Lightbulb";
            price = 10.99;
            break;
        case 2:
            product = "LED";
            price = 15.99;
            break;
        case 3:
            product = "Lamp";
            price = 24.99;
            break;
        default:
            // error handling
            cout << "Invalid choice. Exiting program." << endl;
            return 1;
    }
    // prints the product and price
    cout << "You are buying a " << product << " for $" << price << endl;

    // lets user choose their discount code
    string discountChoiceStr;
    cout << "\nPlease enter your discount type:\n1. Student\n2. Senior\n3. Pranav\n4. None\n";
    getline(cin, discountChoiceStr);
    int discountChoice = stoi(discountChoiceStr);
    // applies the discount code based on the user's choice
    switch (discountChoice) {
        case 1:
            price = studentDiscount(price);
            break;
        case 2:
            price = seniorDiscount(price);
            break;
        case 3:
            price = pranavDiscount(price);
            break;
        default:
            //Invalid entry means no discount
            cout << "No discount applied." << endl;
            break;
    }

    //printf so the cost is formatted to 2 decimal places
    printf("\nThe final price after discount is: $%.2f\n", price);

    // prints the closing message
    cout << closing(product) << endl;

    return 0;
}
