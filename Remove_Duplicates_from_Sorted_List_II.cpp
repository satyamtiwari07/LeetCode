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
    int flag=0;
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL) return head;
        
         ListNode*sentinal=new ListNode (0,head);
        ListNode*prev=sentinal;
       
        while(head!=NULL){
            
            cout<<prev->val<<' '<<endl;
            if(head->next && head->val==head->next->val){
                
                while(head->next && head->val==head->next->val){
                    head=head->next;
                }
                
                prev->next=head->next;
            }
            else{
               prev=prev->next; 
            }
            head=head->next;
        }
        
         return sentinal->next;
    }
};
