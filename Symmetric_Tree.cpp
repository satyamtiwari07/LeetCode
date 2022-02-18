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
    bool mirror(TreeNode* left_node , TreeNode* right_node){
        if(left_node==NULL && right_node==NULL) return true;
        
        if(left_node==NULL && right_node!=NULL) return false;
        
        if(left_node!=NULL && right_node==NULL) return false;
        
        if(left_node->val != right_node->val) return false;
        
        return mirror(left_node->right,right_node->left) && mirror(left_node->left,right_node->right);
    
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return mirror(root->left,root->right);
    }
};
