#include<iostream>
using namespace std;
class Student{
public: 
    string name;
    int age; 
    int rollno; 
    float gpa;
    Student() //Default Constructor 
     { 

     }
    Student(string s, int a, int rn, float g) //parameterized constructor 
    { 
        name = s;
        age = a; 
        rollno = rn; 
        gpa = g; 
        cout<<name<<endl<<age<<endl<<rollno<<endl<<gpa<<endl<<endl; 
    }
}; 
int main()
{ 
Student s1("Leena", 19, 13, 3.7);
Student s2("Minha", 19 , 12, 3.9); 
Student s3; 
s3.name = "Madiha"; 
s3.age = 17; 
s3.rollno = 01; 
s3.gpa = 4; 
cout<<s3.name<<endl<<s3.age<<endl<<s3.rollno<<endl<<s3.gpa; 
return 0;
}
