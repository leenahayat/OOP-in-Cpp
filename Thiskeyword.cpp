#include<iostream>
using namespace std;

class Cricketer{
 public:   
    string name;
    int runs;

    Cricketer(string name, int runs){
        this->name = name;  //points to the current object instance on which a member function is being called. 
        this->runs = runs;

    }  
};

int main(){
  Cricketer c1("Babar Azam", 25000);
  Cricketer c2("Muhammad Rizwan", 15000);
  
  cout << c1.name << "   " << c1.runs << endl;
  cout << c1.name << "   " << c1.runs << endl;
}
