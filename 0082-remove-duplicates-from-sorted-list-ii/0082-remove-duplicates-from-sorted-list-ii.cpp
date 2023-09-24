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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* dummy=new ListNode();
        ListNode* result=dummy;
        while(head){
            mp[head->val]++;
            head=head->next;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second==1){
                ListNode* temp=new ListNode(i->first);
                result->next=temp;
                result=result->next;
            }
        }
        return dummy->next;
    }
};