#include<bits/stdc++.h>
using namespace std;

// Encapsulation is wrapping up data members and functions
// data members -> properties / state and functions -> methods/behaviour

// Fully Encapsulated class is a class where all the data members are marked private

class FullyEncapsulated{

    private:
        int age;
        int height;
        string name;
    
    public:

    int getAge(){
        return this->age;
    }

};

// why are we doing encapsulation ?
// encapsulation is information hiding or data hiding

// data hiding advantages->
// 1. security increase
// 2. make class read only
// 3. encapsulted code is better for unit testing
// 

int main(){

    FullyEncapsulated first; // statically allocating 

     

    return 0;
}