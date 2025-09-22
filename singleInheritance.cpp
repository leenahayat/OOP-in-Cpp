#include<iostream>
using namespace std;

class Vehicle {  //parent class

 public: 
   int topspeed;
   string color;
   string engine;
   int mileage;
   string model;
   int year;


};

class Bike : public Vehicle{ //child class
 public:
   int tyres;
};

int main(){ 
    Bike b;
    b.color = "Black";
    b.mileage = 45;
    b.model = "Honda CG 125";
    b.year = 1976;
    b.tyres = 2;
    b.engine = "124cc, single-cylinder, four-stroke, OverHead Valve (OHV) air-cooled engine.";
    b.topspeed = 115;
    cout<< "MODEL: "<<b.model << endl <<"COLOR: "<<b.color<<endl<<"YEAR OF PRODUCTION: "<<b.year<<"\nENGINE: "<<b.engine<<endl<<"MILEAGE IS APPROXIMATELY "<<b.mileage<<endl<<"TOP SPEED: "<<b.topspeed<<endl<<"TYRES: "<<b.tyres<<endl;
   
 
}
