#include<iostream>
using namespace std;

class Cricketer {
 public:   
    string name;
    int runs;
    Cricketer() { }

    Cricketer(string name, int runs) {
        this->name = name;
        this->runs = runs;
    }  
};

int main(){ 
  // Static allocation (memory at compile-time, stack)
  int x = 6;
  cout << x << endl;

  int *ptr = &x;
  cout << &x << endl;   // address of x
  cout << *ptr << endl; // value of x (6)
  cout << &ptr << endl; // address of pointer variable itself

  // Dynamic allocation (memory at runtime, heap)
  int *potr = new int(20);   // allocate memory on heap and initialize to 20
  cout << *potr << endl;     // prints 20

  Cricketer *c2 = new  Cricketer("Shahid Afridi",25000);
  cout<<c2->name<<"     "<<c2->runs<<endl;
}
