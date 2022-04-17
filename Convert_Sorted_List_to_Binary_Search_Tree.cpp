/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    pair<ListNode*,ListNode*>findmiddle (ListNode*head){
        
        ListNode *fast=head ;
        ListNode *slow=head ;
        ListNode * prev=NULL;
        
        while(fast && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return {prev,slow};
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        
        pair<ListNode*,ListNode*> p=findmiddle(head);
        
        ListNode* middle=p.second;
        ListNode *prev=p.first;
        
        
        TreeNode * root = new TreeNode(middle->val);
        
        if(prev){
            prev->next=NULL;
            root->left=sortedListToBST(head);
            
        }
        
        root->right=sortedListToBST(middle->next);
        
        return root;
    }
};
