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

int main(){
    Student s1("Leena", 19, 13, 3.7);
    Student s2("Minha", 19 , 12, 3.9);
   
    Student s6 = s1;  //Copy constructor  //Student s6(s1);(Copy construcutor)
    cout<<s6.name<<endl<<s6.age<<endl<<s6.rollno<<endl<<s6.gpa<<endl<<endl;
    
    Student s7 = s2; //Deep Copy 
    s7.name = "Urooj";  
    cout<<s7.name<<endl<<s7.age<<endl<<s7.rollno<<endl<<s7.gpa<<endl<<endl;
   return 0;
} 
