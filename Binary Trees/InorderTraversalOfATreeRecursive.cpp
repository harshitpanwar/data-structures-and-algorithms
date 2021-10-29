#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
void inorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorder(root->left);
 
    cout << root->data << " ";
 
    inorder(root->right);
}
 
int main()
{

 
//driver code goes here

 
    return 0;
}

