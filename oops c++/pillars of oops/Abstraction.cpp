#include<bits/stdc++.h>
using namespace std;

// abstraction is implementation hiding



int main(){

    // pointers
    int a = 20;
    int *p = &a;
    int b = *p; 

    cout<<"a "<<a<<" *p "<<*p<<" p "<<p<<" b "<<b<<endl;


    //pointer to pointer

    int **pp = &p;

    cout<<"**P "<<**pp<<" pp "<<pp<<endl;

    return 0;

}