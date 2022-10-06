//three types of acces modifiers
//public
//private
//protected
//by default all properties in a class are private

#include<bits/stdc++.h>
using namespace std;

class P{

    //properties
    //by default these properties are private
    int health;


    public:
    char level;

    //same goes with methods also they are also affected by acces modifiers
    void print(){

        cout<<"level : "<<level<<endl;

    }

};


class Hero{

    private:
    int health;
    
    public:
    char level;

    //we can use getters to access private members inside the class

    //getter for health
    int gethealth(){

        return health;

    }

    //setter for health

    void sethealth(int h){

        //we can set some conditions inside inside the setters
        //this is another important use of setters
        health = h;

    }


};

int main(){

    P p;
    p.level = 'A';
    
    //p.health; this will show error because health member in P class is private
    
    cout<<p.level<<endl; //this will not show error because this property is public
    
    p.print();// this will print level as print method is public inside the class

    Hero h;
    h.level = 'A';
    h.sethealth(20);
    cout<<"Health for hero h "<<h.gethealth()<<endl;
    cout<<"level for hero h "<<h.level<<endl;

    return 0;
}