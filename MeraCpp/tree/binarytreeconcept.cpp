#include <iostream>
using namespace std;

struct Node {
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

    cout<<(node->data)<<" ";
    preorder(node->left);
    preorder(node->right);
    
}

int main() {

    Node* root = new Node(5);
    root->left= new Node(6);
    root->right= new Node(7);
    root->left->left= new Node(8);
    root->left->right= new Node(9);
    root->left->right->right= new Node(1);

    preorder(root);

    return 0;
}
