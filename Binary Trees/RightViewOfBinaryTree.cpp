#include<bits/stdc++.h>
using namespace std;

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

int main(){
//driver code goes here

}

void helper(Node *root, int level, vector<int> &ans){
        if(root == NULL)
            return;
        
        if(level == ans.size())
            ans.push_back(root->data);
        helper(root->right, level+1, ans);
        helper(root->left, level+1, ans);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       int level = 0;
       helper(root, level, ans);
       return ans;
    }
