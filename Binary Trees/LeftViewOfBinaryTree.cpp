#include<bits/stdc++.h>
using namespace std;

int main(){
//driver code goes here

}

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> leftView(Node *root)
{
    vector<int> v;
    if(root==NULL){
        return v;
    }
   // Your code here
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int size=q.size();
       for(int i=0;i<size;i++){
           Node* r=q.front();
           q.pop();
           if(i==0){
               v.push_back(r->data);
           }
           if(r->left){
               q.push(r->left);
           }
           if(r->right){
               q.push(r->right);
           }
       }
   }
   return v;
}
