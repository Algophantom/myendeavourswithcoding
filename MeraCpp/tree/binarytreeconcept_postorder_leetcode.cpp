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
        vector<int> postorder(TreeNode* root)
        {
           vector<int> postorder;
           if(root==nullptr) return postorder;
           stack<TreeNode*> st1,st2;
           st1.push(root);
           while(!st1.empty())
           {
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=nullptr)
            {st1.push(root->left);}
            if(root->right!=nullptr)
            {st1.push(root->right);}
           }

           while(!st2.empty())
           {
            postorder.push_back(st2.top()->val);
            st2.pop();
           }
           return postorder;
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
        vector <int> result = sol.postorder(root);

        for (int val : result) {
            cout << val << " ";
            }
            cout << endl;

    return 0;
}
   