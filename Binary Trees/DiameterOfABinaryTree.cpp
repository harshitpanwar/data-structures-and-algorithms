#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};


pair<int,int> diameter1(Node* root) {
       pair<int,int>p;
       if(!root) {
           p.first=0;
           p.second=0;
           return p;
       }
       pair<int,int> option1=diameter1(root->left);
       pair<int,int> option2=diameter1(root->right);
       int leftDiameter=option1.first;
       int rightDiameter=option2.first;
       int height=max(option1.second,option2.second)+1;
       p.first=max(max(leftDiameter,rightDiameter),option1.second+option2.second);
       p.second=height;
       return p;
   }
   
   int diameter(Node* root) {
       pair<int,int>p=diameter1(root);
       // cout<<1+p.first<<" "<<p.second;
       return p.first+1;
   }

