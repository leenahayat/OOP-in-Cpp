#include<iostream>
using namespace std;

class Student {
 private:
   float marks;

 public:   
   int rno;
   string name;
   
   Student(){

   }
   Student(int rno,string name,float marks){
    this->rno = rno;
    this->name = name;
    this->marks = marks;

   }
   float getMarks(){
    return marks;
   }
  
};

int main(){ 
    Student s1(76,"Raghav",98.5);
    cout<<s1.getMarks()<<endl;
   
 
}
