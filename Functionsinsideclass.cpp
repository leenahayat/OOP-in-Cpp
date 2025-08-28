#include<iostream>
using namespace std;

class Cricketer{
 public:   
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;  //points to the current object instance on which a member function is being called. 
        this->runs = runs;
        this->avg = avg;
    }  

    void print(int runs)//parametarized function inside class
    {
     cout << this->name << "   " << this->runs << "  " << this->avg << endl;
    }

    int matches(){
        return runs/avg;
    }
};

int main(){ 
  Cricketer c1("Babar Azam", 25000, 57.5);
  Cricketer c2("Muhammad Rizwan", 15000, 27.9);
  cout << "Player" << "   " << "Runs" << "  " << "Average" << endl;
  c1.print(5); //calling function
  c2.print(3);
  cout<<endl<<endl<<"Total matches played by each Player"<<endl;
  cout<<c1.name<<"    "<<c1.matches()<<endl;
  cout<<c2.name<<"    "<<c2.matches()<<endl;
}
