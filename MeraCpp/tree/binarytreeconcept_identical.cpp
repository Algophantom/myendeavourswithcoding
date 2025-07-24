
 #include<bits/stdc++.h>
using namespace std;
 
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
        };
 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr||q==nullptr) return false;

        if(p->val!=q->val) return false;

        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
        
    }
   

};

 int main() {

    TreeNode* root = new TreeNode(5);
    root->left= new TreeNode(6);
    root->right= new TreeNode(7);
    root->left->left= new TreeNode(8);
    root->left->right= new TreeNode(9);
    root->left->right->right= new TreeNode(1);

    TreeNode* rootus = new TreeNode(5);
    rootus->left= new TreeNode(6);
    rootus->right= new TreeNode(7);
    rootus->left->left= new TreeNode(8);
    rootus->left->right= new TreeNode(9);
    rootus->left->right->right= new TreeNode(1);
    Solution obj;
    bool result = obj.isSameTree(root,rootus);
    
    cout<<result;

    return 0;
}