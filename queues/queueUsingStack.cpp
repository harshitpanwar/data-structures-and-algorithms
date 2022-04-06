#include<bits/stdc++.h>
using namespace std;


void dequeue(stack<int> &s){

    if(s.size()==1)
        s.pop();
    else{
        int res = s.top();
        s.pop();
        dequeue(s);
        s.push(res);
    }

}


void reverse(stack<int> &s){

    if(!s.empty()){

        int value = s.top();
        
        s.pop();

        reverse(s);
        
        dequeue(s);
        

    }

}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverse(s);


    cout<<s.top()<<endl;
    s.pop();
    
    cout<<s.top()<<endl;
    s.pop();
    
    cout<<s.top()<<endl;
    s.pop();
    
    cout<<s.top()<<endl;
    s.pop();
    

    return 0;
}