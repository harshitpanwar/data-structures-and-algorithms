#include<bits/stdc++.h>
using namespace std;

// two types of polymorphism 
// compile time
// run time

// 1) compile time -> 

//function overloading

class A{

    public:
    void sayHello(){
        cout<<"Hello Harshit"<<endl;
    }

    void sayHello(string name){
        cout<<"hello "<<name<<endl;
    }

};

//operator overriding

class B{

    public:


};

// 2) run time polymorphism
// method overriding 

class Animal{

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }

};

class Dog: public Animal{

    public:
    //method overrided from the parent class
    void speak(){
        cout<<"Barking "<<endl;
    }


};




int main(){

    // A obj;
    // obj.sayHello();

    Dog obj;
    obj.speak(); // dog implementation will be called


    return 0;
}