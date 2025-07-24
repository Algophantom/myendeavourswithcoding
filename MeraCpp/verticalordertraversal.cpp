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
        vector<vector<int>> verticalTraversal(TreeNode* root)
        {   
           map<int,map<int,multiset<int>>> nodes; //int1 is the col , int2(inside the 2nd map) is the row

           //so say a node is referenced as node,-1,2 
           // then it will be referred to by the map as col refers to the row which refers to the node at that column.
           queue<pair<TreeNode* , pair<int,int>>> todo;
           todo.push({root,{0,0}});

           while(!todo.empty())
           {
            auto p=todo.front();
            todo.pop();
            TreeNode* node=p.first;
            int x=p.second.first;
            int y=p.second.second;

            nodes[x][y].insert(node->val);

            if(node->left)
            {
                todo.push({node->left,{x-1,y+1}});
            }

            if(node->right)
            {
                todo.push({node->right,{x+1,y+1}});
            }
           }

           vector<vector<int>> ans;
           for (auto p:nodes){
            vector<int> col;
            for(auto q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());

            }

            ans.push_back(col);
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
       root->left->right->right= new TreeNode(1);
       //root->left->right->left= new TreeNode(11);

         Solution sol;
        vector <vector<int>> result = sol.verticalTraversal(root);

  
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;  
    }

    return 0;
}
   