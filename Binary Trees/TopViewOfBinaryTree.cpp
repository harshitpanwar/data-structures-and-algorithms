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
    
    vector<int> topView(Node *root){   
        vector<int> ans;
        map<int,int> mp;
        queue<pair<int,Node*>> q;
        q.push({0,root});
        while(!q.empty()){
            int x = q.front().first;
            Node* it = q.front().second;
            q.pop();
            if(mp.find(x) == mp.end()){
                mp[x] = it->data;
            }
            if(it->left){
                q.push({x-1,it->left});
            }
            if(it->right){
                q.push({x+1,it->right});
            }
        }
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }