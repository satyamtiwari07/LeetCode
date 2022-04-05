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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode *res=new ListNode(-1);
        ListNode *t1=l1;
        ListNode *t2=l2;
        ListNode *temp=res;
        
        while(t1!=NULL && t2!=NULL){
            if(t1->val <= t2->val){
                temp->next=t1;
                t1=t1->next; 
            }
            else{
                temp->next=t2;
                t2=t2->next;
            }
            temp=temp->next;
        }
        
        if(t1==NULL) temp->next=t2;
        
        if(t2==NULL) temp->next=t1;
        
        return res->next;
    }
};
