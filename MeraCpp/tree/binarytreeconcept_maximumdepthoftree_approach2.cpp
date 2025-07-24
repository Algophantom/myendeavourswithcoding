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
        int maxDepth(TreeNode* root)
        {
            if(root==nullptr) return 0;

            int lh=maxDepth(root->left);
            int rh=maxDepth(root->right);

            return 1+max(lh,rh);
        }

    };

    int main() {

        TreeNode* root = new TreeNode(5);
        root->left= new TreeNode(6);
        root->right= new TreeNode(7);
        root->left->left= new TreeNode(8);
        root->left->right= new TreeNode(9);
        root->left->right->right= new TreeNode(1);

         Solution sol;
        int result = sol.maxDepth(root);
        cout << result;  

        return 0;
    }


   