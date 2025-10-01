// 4. Abstraction

// Abstraction means hiding implementation details and exposing only essential features.
// 👉 Achieved using abstract classes (with at least one pure virtual function).
#include <iostream>
using namespace std;

class Shape {  // Abstract class
public:
    virtual void draw() = 0;   // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* s;  // Pointer of abstract class

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();  // Circle’s version

    s = &r;
    s->draw();  // Rectangle’s version

    return 0;
}
