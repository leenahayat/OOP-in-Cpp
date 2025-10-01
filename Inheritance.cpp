// 2. Inheritance
// Inheritance allows a class (child/derived class) to acquire properties and behaviors of another class (parent/base class).
  
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {   // Dog inherits Animal
public:
    void bark() {
        cout << "Dog barks Woof Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // inherited method
    d.bark();  // Dog’s own method
    return 0;
}
