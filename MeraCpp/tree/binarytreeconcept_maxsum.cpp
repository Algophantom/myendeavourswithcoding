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
    int sumi=INT_MIN;
    int maxGain(TreeNode* root)
    {
        if(root == nullptr) return 0;
        
        int ls = max(0, maxGain(root->left));
        int rs = max(0, maxGain(root->right));
        sumi=max(sumi,ls+rs+root->val);
        return root->val+max(ls,rs);
    }
    int maxPathSum(TreeNode* root)
    {
        maxGain(root);
        return sumi;
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
   