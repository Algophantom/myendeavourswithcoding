#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};

void preorder(Node* node)
{
    if(node==nullptr)
    {
        return;

    }

    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);

}
int main()
{
    Node* root= new Node(1);
    root-> left= new Node(2);
    root->left->left= new Node(4);
    root->left->right=new Node(5);
    root->left->right->left= new Node(6);
    root->right=new Node(3);
    root->right->left=new Node(7);
    root->right->right=new Node(8);
    root->right->right->left=new Node(9);
    root->right->right->right=new Node(10);

    preorder(root);
}