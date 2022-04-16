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
class Solution {
public:
    ListNode *temp;
    int maxi=INT_MIN;
    
    int check(ListNode*head){
        if(head==NULL) return 0;
        
         maxi=max(maxi,max(check(head->next),(temp->val + head->val)));
        
        temp=temp->next;
        
        return maxi;
        
    }
    
    
    int pairSum(ListNode* head) {
        temp=head;
        return check(head); 
    }
};
