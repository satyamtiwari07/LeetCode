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
    void inorder(TreeNode* root, vector<int>&v){
        if(root==NULL){v.push_back(1e4+1); return;}
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    
    void preorder(TreeNode* root, vector<int>&v){
        if(root==NULL){v.push_back(1e4+1); return;}
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ppre,qpre,pin,qin;
        
        preorder(p,ppre);
        preorder(q,qpre);
        
        inorder(p,pin);
        inorder(q,qin);
        
        if(ppre==qpre and pin==qin) return true;
        else return false;
    }
};
