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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root)
        {   
            int flag=0;
            vector<vector<int>> ans;
            if(root==nullptr) return ans;
            queue <TreeNode*> q;
            q.push(root);
            flag=1;
            while(!q.empty())
            {
                int size=q.size();
                vector<int> level;
                for(int i=0;i<size;i++)
                {
                    TreeNode* node=q.front();
                    q.pop();
                    if(flag==0)
                    {if(node->left!=nullptr) q.push(node->left);
                    if(node->right!=nullptr) q.push(node->right);}
                    else if (flag==1)
                    {
                        if(node->right!=nullptr) q.push(node->right);
                    if(node->left!=nullptr) q.push(node->left);
                    }
                    level.push_back(node->val);
                
                }
                flag ^=1;
                ans.push_back(level);
            }

            return ans;
        }

    };

    int main() {

        TreeNode* root = new TreeNode(3);
        root->left= new TreeNode(9);
        root->right= new TreeNode(20);
        root->right->left= new TreeNode(15);
        root->right->right= new TreeNode(7);
       //root->left->right->right= new TreeNode(1);
       //root->left->right->left= new TreeNode(11);

         Solution sol;
        vector <vector<int>> result = sol.zigzagLevelOrder(root);

  
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;  
    }

    return 0;
}
   