#include <bits/stdc++.h>
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if (root == nullptr) return preorder;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            root = st.top();
            st.pop();
            preorder.push_back(root->val);

            if (root->right != nullptr)
                st.push(root->right);
            if (root->left != nullptr)
                st.push(root->left);
        }

        return preorder;
    }
};

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(6);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(8);
    root->left->right = new TreeNode(9);
    root->left->right->right = new TreeNode(1);

    Solution sol;
    vector<int> result = sol.preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
