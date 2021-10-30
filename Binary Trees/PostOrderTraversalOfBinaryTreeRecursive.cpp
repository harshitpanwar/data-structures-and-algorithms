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
 
void preorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    cout << root->data << " ";
 
    preorder(root->left);
 
    preorder(root->right);
}
 
 
int main()
{

    //driver code goes here

    return 0;
}

