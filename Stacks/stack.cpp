#include<bits/stdc++.h>
using namespace std;

class Stack {

    int *arr;
    int top = -1;
    int size;
    public:
    Stack() {}
    Stack(int n){

        size = n;
        arr = (int*)malloc(n*sizeof(int));

    }


    void push(int element){

        if(top-1 == size)
            cout<<"Stack overflow\n";
        else
            arr[++top] = element;

    }

    void pop(){

        if(top == -1)
            cout<< "Stack Underflow\n";
        else 
            top--;

    }

    int peek(){
        return arr[top];
    }

    int isEmpty(){
        if(top==-1)
            return 1;
        return 0;
    }

    int isFull(){
        if(top==size-1)
            return 1;
        return 0;
    }

    void display(){
        if(top==-1){
            cout<<"Stack is Empty\n";
        }
        else
        {
            for(int i = top;i>=0;i--)
                cout<<arr[i]<<endl;
        }
    }


};


int main() {

    Stack s(10);
    return 0;
}