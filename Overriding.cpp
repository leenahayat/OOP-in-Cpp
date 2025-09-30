#include<iostream>
using namespace std;

class Scooty {  //parent class

 public: 
  int topspeed;
  float mileage;
  // A "virtual" function allows polymorphism. 
  // This means if a child class overrides this function, 
  // the child's version will run (not the parent's).
  virtual void sound(){
    cout<<"Vroom Vroom"<<endl;
  }
  
};

class Bike : public Scooty{ //child class
 public:
    int gears;
    // Overriding the base class "sound" function
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};


int main(){ 
    
 // Example 1: Create Bike object directly
   Bike bi;    // a Bike object
   bi.sound(); // calls Bike's sound → "Dhroom Dhroom" 
 // Example 2: Create Scooty object directly 
    Scooty s; // a Scooty object 
    s.sound(); // calls Scooty's sound → "Vroom Vroom" 
 // Example 3: Use a Bike pointer 
    Bike* b = new Bike();  // pointer to a new Bike object in heap
     b->sound(); // calls Bike's sound → "Dhroom Dhroom" 
     (*b).gears = 5; // accessing Bike's own property "gears" 
  // Example 4: Base class pointer → Derived class object 
    Scooty* bs = new Bike(); // base pointer points to Bike object 
    bs->sound(); // Output: "Dhroom Dhroom" 
    // Because "sound" is virtual, the derived class version runs. 
    // This is called RUN-TIME POLYMORPHISM.
  
}
