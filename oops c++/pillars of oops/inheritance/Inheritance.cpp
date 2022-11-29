#include<bits/stdc++.h>
using namespace std;

// inheritance format in c++ 
// class <child class> : <access mode> <parent class>

class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight = w;
    }

};

class Male : public Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

};

int main(){

    Male object1;
    
    cout<< object1.age<<endl;
    cout<< object1.weight<<endl;
    cout<< object1.height<<endl;

    cout<< object1.color<<endl;
    object1.sleep();

    return 0;
}