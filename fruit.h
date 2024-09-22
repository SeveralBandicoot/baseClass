#include <iostream>

using namespace std;

class fruit { // base class 
    public: // base attributes vvv
      string brand = "Kirkland";
      int count = 1;
      double cost = 1.99;

      void talk() {
        cout << "I'm not only a fruit, I'm a fruit from COSTCO!";
      }
    private:

};
