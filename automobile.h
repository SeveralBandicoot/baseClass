#include <iostream>

using namespace std;

class automobile {
    public: 

    string brand;

};

class car : public automobile {
    public:
    string model;
    int cost;
    double milage; 
};