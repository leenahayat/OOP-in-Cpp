// 3. Polymorphism

// Polymorphism = “many forms”.
// It allows the same function name to behave differently.

// 👉 Two types:
// Compile-time polymorphism → Function/Operator overloading
// Run-time polymorphism → Virtual functions (overriding)

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void sound() {  // virtual function
        cout << "Some generic vehicle sound" << endl;
    }
};

class Car : public Vehicle {
public:
    void sound() override {   // overridden
        cout << "Car goes Vroom Vroom" << endl;
    }
};

class Bike : public Vehicle {
public:
    void sound() override {
        cout << "Bike goes Dhroom Dhroom" << endl;
    }
};

int main() {
    Vehicle* v;   // base class pointer
    Car c;
    Bike b;

    v = &c;
    v->sound();  // Calls Car's version

    v = &b;
    v->sound();  // Calls Bike's version

    return 0;
}
