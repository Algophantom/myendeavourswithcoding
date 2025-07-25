
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
    vector <int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        stack <TreeNode*> st;
        TreeNode* node=root;
        while(true)
        {
            if(node!=nullptr)
            {
                st.push(node);
                node=node->left;
            }
            else
            {
                if(st.empty())
                {
                    break;
                }
                node=st.top();
                st.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        
        return inorder;

        
    }

   

};

 int main() {

    TreeNode* root = new TreeNode(5);
    root->left= new TreeNode(6);
    root->right= new TreeNode(7);
    root->left->left= new TreeNode(8);
    root->left->right= new TreeNode(9);
    root->left->right->right= new TreeNode(1);

    Solution obj;
    vector<int> result = obj.inorderTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}