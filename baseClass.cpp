/*
Base Class 

@ AJ Enrique Arguello

9/21/24

Research Inheritance. Create a Base class with several Attributes (data) and a display( ) Function. 

In main( ), create Objects from the Base class and display( ) all Attributes.

*** New Concepts: Inheritance - Base Class
*/

#include <iostream>

#include "fruit.h"

using namespace std;

void display(fruit apple, fruit banana);
int main() {
    fruit apple; // apple object declared
    fruit banana; // banana object declared

    display(apple, banana);

    return 0;
}

void display(fruit apple, fruit banana) {
    cout << "Apple:" << endl;
    cout << "Brand: " << apple.brand << endl; // brand value is output using apple object
    cout << "Ct: " << apple.count << endl; // count value is output using apple object
    cout << "Cost: $" << apple.cost << endl; // cost value is output using apple object
    apple.talk(); 

    cout << "\n\nBanana: " << endl;
    cout << "Brand: " << banana.brand << endl; // brand value is output using banana object
    cout << "Ct: " << banana.count << endl; // count value is output using banana object
    cout << "Cost: $" << banana.cost << endl; // cost value is output using banana object
    banana.talk();
}