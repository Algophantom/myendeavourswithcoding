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
            int ans=0;
            if(root==nullptr) return 0;
            queue <TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                int size=q.size();
                vector<int> level;
                for(int i=0;i<size;i++)
                {
                    TreeNode* node=q.front();
                    q.pop();
                    if(node->left!=nullptr) q.push(node->left);
                    if(node->right!=nullptr) q.push(node->right);
                    level.push_back(node->val);
                
                }
                ans++;
            }

            return ans;
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


   