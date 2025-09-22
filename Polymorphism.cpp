#include<iostream>
using namespace std;

//Compile Time polymorphism
class Loading{
public: 
   void sum(int a, int b){ //function overloading
    cout<<a+b<<endl;

   }
   void sum(int a, int b,int c){ //function overloading
    cout<<a+b+c<<endl;

   }
   void sum(string a, string b){ //function overloading
    cout<<a<<" "<<b;

   }
}; 
int main()
{ 
  Loading a;
  a.sum(5,8); 
  a.sum(9,3);
  a.sum("Raghav","Hania");
}
