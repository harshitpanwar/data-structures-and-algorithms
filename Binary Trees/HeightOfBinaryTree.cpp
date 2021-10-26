#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

int main(){

    //driver code
    return 0;
}

int max(int a, int b){
    if(a>b)return a;
    if(b>a)return b;
}

//Function to find the height of a binary tree.
int height(struct Node* node)
{
    //code here
    if(node==NULL)return 0;
    int x = height(node->left);
    int y = height(node->right);
    return (max(x,y)+1);
    
}
