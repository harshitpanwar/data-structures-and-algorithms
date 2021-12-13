#include<bits/stdc++.h>
using namespace std;

int main(){
//driver code goes here

}

struct TreeNode
{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    
    TreeNode(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution {
public:
   int maxDepth(TreeNode* root) {
	if(!root)
		return 0;

	return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
}
};