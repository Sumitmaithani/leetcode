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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0,len2=0;
        ListNode *dummy1=headA;
        ListNode *dummy2=headB;
        
        while(dummy1!=NULL){
            len1++;
            dummy1=dummy1->next;
        }
        while(dummy2!=NULL){
            len2++;
            dummy2=dummy2->next;
        }
         
        int diff=abs(len1-len2);
        
        if(len1>len2){
            for(int i=0;i<diff;i++){
                headA=headA->next;
            }
        } else {
            for(int i=0;i<diff;i++){
                headB=headB->next;
            }
        }
        
        while(headA!=NULL || headB!=NULL){
            if(headA==headB) return headA;
                headA=headA->next;
                headB=headB->next;
        }
        
        return NULL;
    }
};