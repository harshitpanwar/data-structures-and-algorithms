#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
class Stack {
    int *arr;
    int top = -1;
    int size;
    public:
    Stack() {}
    Stack(int n)    {
        size = n;
        arr = (int*)malloc(n*sizeof(int));
    }
    void push(int element)  {
        if(top-1 == size)
            cout<<"Stack Overflow\n";
        else
            arr[++top] = element;
    }
    void pop()  {
        if(top==-1)
            cout<<"Stack Underflow\n";
        else
            top--;
    }
    int peek()  {
        return arr[top];
    }
    int isEmpty()   {
        if(top == -1)
            return 1;
        return 0;
    }
    int isFull()    {
        if(top == size-1)
            return 1;
        return 0;
    }
    void display()  {
        if(top==-1)
            printf("Stack is Empty\n");
        else {
            for(int i=top;i>=0;i--)
                printf("%d\t",arr[i]);
            printf("\n");
        }
    }
};
void evaluate_postfix(char *str)    {
    Stack s(10);
    for(int i= strlen(str)-1;i>=0;i--)
    {
        if(str[i]>='0' && str[i]<='9')
            s.push(str[i]-48);
        else {
            int val1 = s.peek();
            s.pop();
            if(s.isEmpty())
            {
                cout<<"INVALID EXPRESSION";
                return;
            }
            int val2 = s.peek();
            s.pop();
            switch(str[i])  {
                case '+':s.push(val1+val2);break;
                case '-':s.push(val1-val2);break;
                case '/':s.push(val1/val2);break;
                case '*':s.push(val1*val2);break;
                default: cout<<"Invalid Expression"<<endl;
                         return;
            }
        }
    }
    int result = s.peek();
    s.pop();
    if(s.isEmpty())
        cout<<result;
    else
        cout<<"INVALID EXPRESSION";
}
int main()  {
    char str[25] = "-*63/82";
    evaluate_postfix(str);
    return 0;
}
