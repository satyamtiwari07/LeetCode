/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void view(TreeNode * root ,vector<int> &ds ,int level){
        if(root==NULL) return ;
        if(level==ds.size()) ds.push_back(root->val);
        view(root->right,ds,level+1);
        view(root->left,ds,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ds;
        view(root,ds,0);
        return ds;
    }
};
