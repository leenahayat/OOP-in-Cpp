#include<iostream>
 using namespace std; 
 class Student{
     public:
      string name;
      int age;
      int rollno;
      float gpa;
}; 

void print(Student s) //Function 
{ 
    cout<<s.name<<endl<<s.age<<endl<<s.rollno<<endl<<s.gpa<<endl<<endl;
 } 
 int main()
 {  Student s1;
    s1.name = "Leena";
    s1.age = 19;
    s1.rollno = 13;
    s1.gpa = 3.7; 

    Student s2; 
    s2.name = "Minha";
    s2.age = 19; 
    s2.rollno = 12; 
    s2.gpa = 3.9; 
    // cout<<s1.name<<endl<<s1.age<<endl<<s1.rollno<<endl<<s1.gpa<<endl<<endl; 
    // cout<<s2.name<<endl<<s2.age<<endl<<s2.rollno<<endl<<s2.gpa;
    print(s1);
    print(s2); 
    return 0;
 }
