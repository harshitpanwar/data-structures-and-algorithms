// Object is an entity which has
// i) properties
// ii) behaviour

// OOPS increases the readablity, managliblity, extensiblity
// OOPS is a programming paradigm/technique where things revolve around the object 


// example,
// Hero properties( name->paul, health->70)
//      behaviour(ability->attack)
// Hero is an object


// Class is a user defined data type
// Object is an instance of a Class

#include<bits/stdc++.h>

//we can also include our Hero class from external cpp file
// #include "Hero.cpp";

using namespace std;

// user defined data type class Hero
class Hero{

     //properties
     //by default all properties are private 
     public:
     int health;

};

class Dhamaka{

     int a;
     char c;
     //here in this class as we see we have used one integer and one character
     // so the total size of the class should be 4+1=5
     // but the total size comes out to be 8
     // study about padding and greedy alignment

};

class Empty{

     //empty class

};


int main(){

     //creation of object
     Hero h1;
     Empty e1;

     cout<<"size of Hero class: "<<sizeof(h1)<<endl;//prints 4 as our class only contains an integer of 4 bytes 

     cout<<"size of Empty class : "<<sizeof(e1)<<endl;//prints 1
     //in case of empty class 1 byte of memory is allocated for the identification of the class object

     cout<<"health is :"<< h1.health<<endl;//gargbage value will be printed

     Dhamaka d;
     cout<<"size of dhamaka object : "<<sizeof(d)<<endl;
     

     return 0;
}




