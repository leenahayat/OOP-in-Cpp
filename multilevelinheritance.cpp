#include<iostream>
using namespace std;

class Vehicle {  //parent class

 public: 
  int topspeed;
  float mileage;
  string fuel;

};

class Twowheeler : public Vehicle{ //child class
 public:

};
class Fourwheeler : public Vehicle{ //child class
 public:
   bool sunroof;
};
class Car : public Fourwheeler{ //child class
 public:
   
};
class Bike : public Twowheeler{ //child class
 public:
   
};

int main(){ 
    
 
}
