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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        ListNode* greaterHead=new ListNode();
        ListNode* greater=greaterHead;
        ListNode* smallerHead=new ListNode();
        ListNode* smaller=smallerHead;
        ListNode* cur=head;
        while(cur){
            if(cur->val<x){
                smaller->next=cur;
                smaller=smaller->next;
            }
            else {
                greater->next=cur;
                greater=greater->next;
            }
            cur=cur->next;
        }
        greater->next=NULL;
        smaller->next=greaterHead->next;
        delete greaterHead;
        head=smallerHead->next;
        delete smallerHead;
        return head;
    }
};