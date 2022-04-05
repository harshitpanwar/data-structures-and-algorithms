#include<bits/stdc++.h>
using namespace std;

stack<int> s;


void evaluate_postfix(char *str){

    for(  int i = 0;str[i]!='\0';i++){

        if(str[i]>='0' && str[i]<='9')
            s.push(str[i]-'0');
        else{
            int val2 = s.top();
            s.pop();
            int val1 =s. top();
            s.pop();

            switch(str[i]){


                case '+' : s.push(val1+val2); break;

                case '-': s.push(val1-val2); break;

                case '/': s.push(val1/val2); break;

                case '*' : s.push(val1*val2);break;

                default : cout<<"Invalid character"<<endl;
                    return;

            }

        }

    }

    int result = s.top();
    
    cout<<result<<endl;


}


int main(){

    char str[25] = "63*82/-10";

    evaluate_postfix(str);


    return 0;
}