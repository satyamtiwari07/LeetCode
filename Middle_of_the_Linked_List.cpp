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
    ListNode* middleNode(ListNode* head) {
        
        ListNode *fast=head,*slow=head;
        int ans=0;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            // if(fast->next!=nullptr)
            //      fast=fast->next;
            slow=slow->next;
        }
        
        return slow;
        
        
    }
};
