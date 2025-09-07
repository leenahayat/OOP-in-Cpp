#include<iostream>
using namespace std; 
class Cricketer{
    public: 
       string name;
       int runs; 
       Cricketer(){}  //default constructor
       Cricketer(string name, int runs){
          this->name = name;  //points to the current object instance on which a member function is being called.
          this->runs = runs; 
       } 
void change(Cricketer *c){
     c->name= "Shahid Afridi"; 
}
};

int main(){
    Cricketer c1("Babar Azam", 25000); 
    cout<<c1.name<<endl;
    Cricketer* p1 = &c1;   //declaring pointer p1  and assigning it the address of c1 
    cout<<(*p1).runs<<endl; 
    cout<<p1->name<<endl; 
    Cricketer c2;  
    c2.change(&c1); 
    cout<<p1->name<<endl;
     // (*p1).runs    p1->name  (both have same meaning)
}
