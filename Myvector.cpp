#include<iostream>
using namespace std;

class Vector{
     public:
         int size;
         int capacity;
         int* arr;
     Vector(){
        size=0;
        capacity=1;
        arr = new int[1];
     } 
     
     
    //add function
     void add(int ele){
       if (size== capacity){
       capacity *= 2;
       int* arr2 = new int[capacity];
       for(int i=0; i<size; i++){
        arr2[i] = arr[i];
       }
       arr= arr2;

       }
       arr[size++] = ele;

     }  

     //print function 
     void print(){
        for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
       }
       cout<<endl;
     }
     

     //get function
     int get(int index){
        if(size==0){
            cout<<"Array is Empty"<<endl;
            return -1;
        }
        if(index>=size || index<0 ){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        return arr[index];
     }

     //remove function
     void remove(){
        if(size==0){
            cout<<"Array is Empty"<<endl;
        
        }
        size--;
     }
};

int main(){ 
    Vector v1;
    cout<<v1.size<<" "<<v1.capacity<<endl;

    v1.add(10);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;

    v1.add(20);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;

    v1.add(30);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;;

    cout<<v1.get(2)<<endl;
    cout<<v1.get(10)<<endl;
    cout<<v1.get(0)<<endl;

    v1.remove(); 
    v1.print();
    
    return 0;

}

