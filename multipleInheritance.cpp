#include<iostream>
using namespace std;

class Cricketer {  //parent class

 public: 
  int runs;
  int wickets;
  int average;
 
};
class Engineer{  //parent class

 public: 
  int experience;
  string domain;
  
 
};

class Phodu : public Cricketer,Engineer{  //multiple inheritance
 public:
  string name; 
};


int main(){ 
    
 
}
