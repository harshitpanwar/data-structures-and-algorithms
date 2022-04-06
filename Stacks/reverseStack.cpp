#include<bits/stdc++.h>
using namespace std;


void insertAtBottom(stack<int> &s, int value){

    if(s.empty())
        s.push(value);
    else{
        int res = s.top();
        s.pop();
        insertAtBottom(s, value);
        s.push(res);
    }

}


void reverse(stack<int> &s){

    if(!s.empty()){

        int value = s.top();
        
        s.pop();

        reverse(s);
        
        insertAtBottom(s, value);
        

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
    
    cout<<s.top()<<endl;
    s.pop();

    return 0;
}