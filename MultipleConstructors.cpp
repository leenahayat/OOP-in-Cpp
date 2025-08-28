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
    Student(int rn) //one parameter constructor 
    { 
        rollno = rn; 
        cout<<name<<endl<<age<<endl<<rollno<<endl<<gpa<<endl<<endl; 
    } 
    Student(string s,int a) //two parameter constructor 
    { 
        name = s; 
        age = a; 
        cout<<name<<endl<<age<<endl<<endl; 
    } 
    Student(string s, int a, int rn) //three parameter constructor 
    { 
        name = s; 
        age = a; 
        rollno = rn; 
        cout<<name<<endl<<age<<endl<<rollno<<endl<<endl; 
    } 
    Student(string s, int a, int rn, float g) //four parameter constructor 
    { 
        name = s; 
        age = a; 
        rollno = rn; 
        gpa = g; 
        cout<<name<<endl<<age<<endl<<rollno<<endl<<gpa<<endl<<endl; 
    } 
    Student( int rn, int g, string s) //four parameter constructor 
    { 
        name = s; 
        rollno = rn; 
        gpa = g; 
        cout<<name<<endl<<rollno<<endl<<gpa<<endl<<endl; 
    } 
}; 
int main()
{
     Student s1("Leena", 19, 13, 3.7); 

     Student s2(20); Student s3("Hina",23); 

     Student s4; 
     s4.name = "Madiha"; 
     s4.age = 17; 
     s4.rollno = 01; 
     s4.gpa = 4; 
     cout<<s4.name<<endl<<s4.age<<endl<<s4.rollno<<endl<<s4.gpa<<endl<<endl; 

     Student s5("Nadia",21,18); 

     Student s6(34,5.3,"Hania"); 
     
     return 0; 
}
