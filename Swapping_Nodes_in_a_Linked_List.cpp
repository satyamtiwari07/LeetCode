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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        int len=arr.size();
        swap(arr[k-1],arr[len-k]);
        ListNode *prev=new ListNode(arr[len-1]);
        for(int x=len-2;x>=0;x--){
             ListNode* temp = new ListNode();
             temp->val = arr[x];
            temp->next = prev;
            prev = temp;
        }
        
        return prev;
    }
};
