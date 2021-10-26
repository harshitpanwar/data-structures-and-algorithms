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



class Solution
{
   public:
   //Function to return the level order traversal of a tree.
   vector<int> levelOrder(Node* node)
   {
     //Your code here
     vector<int> ans;
     queue<Node*> q;
     q.push(node);
     if(node==NULL)
     return ans;
     while(!q.empty()){
         Node* temp=q.front();
         q.pop();
         ans.push_back(temp->data);
         if(temp->left!=NULL)
         q.push(temp->left);
         if(temp->right!=NULL)
         q.push(temp->right);
     }
     return ans;
   }
};
 