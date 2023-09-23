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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *dummy=head;
        int count=0;
        while(dummy){
            count++;
            dummy=dummy->next;
        }
        ListNode *ans=head;
        for(int i=0;i<=count/2;i++){
            int check=(count/2)-1;
            if(i==check && check >= 0){
                head->next=head->next->next;
                break;
            } 
            if(check<0) {
                return NULL;
            }
            head=head->next;
        }
        return ans;
    }
};