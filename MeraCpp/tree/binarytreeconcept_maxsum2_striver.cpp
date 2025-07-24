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
    int maxPathSum(TreeNode* root)
    {
        if(root==nullptr) return 0;
        int ls=maxPathSum(root->left);
        int rs=maxPathSum(root->right);
        return root->val + max(ls,rs);

    }
};
    int main() {

        TreeNode* root = new TreeNode(-10);
        root->left= new TreeNode(9);
        root->right= new TreeNode(20);
        root->right->left= new TreeNode(15);
        root->right->right= new TreeNode(7);
        

         Solution sol;
        int result = sol.maxPathSum(root);

        cout<<result;

    return 0;
}
   