/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // we are using the slow and fast pointer 
        //if we founf s and f on a same node, there exist a \U0001f6b4\U0001f3fb‍♂️
        if(head == NULL || head->next== NULL) return false  ;
        
        ListNode* fast = head  ;
        ListNode* slow = head ;
        while(fast->next && fast->next->next){
            fast = fast -> next -> next ;
            slow = slow -> next ; 
            if(fast == slow) return true ;
        }
        return false ;
        
        
    }
};