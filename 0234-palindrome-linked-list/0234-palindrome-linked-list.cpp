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
ListNode *reverseList(ListNode *head){
    ListNode *pre=NULL, *next=NULL;
    while(head!=NULL){
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
    return pre;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        ListNode *slow=head, *fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverseList(slow->next);
        
        slow=slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};