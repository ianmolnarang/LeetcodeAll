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
    ListNode* removeElements(ListNode* head, int val) {
      //condition
        if(head==NULL) return NULL ; 
        
      //dummy node for the starting 
         ListNode* dummy = new  ListNode(-1) ; 
         dummy->next =  head  ;  //adding dummy 
          ListNode* tail = dummy ;
        while(tail!=NULL && tail->next!=NULL){
            if(tail->next->val==val){
                //storing address in temp, because tail->next is corrupted
                 ListNode* temp = tail->next ; 
                 tail->next = temp -> next ; 
                 delete temp ; 
            }
            else{
                tail= tail->next ; 
            }
        }
        
        return dummy->next; 
    }
};