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
    ListNode* swapPairs(ListNode* head) {
        ListNode* demo= new ListNode(-1);
        ListNode*temp=demo;
        demo->next=head;
        while(temp->next!=nullptr && temp->next->next!=nullptr){
            ListNode* first=temp->next;
            ListNode* sec=temp->next->next;
            first->next=sec->next;
            sec->next=first;

            temp->next=sec;
            temp=first;
        }
        return demo->next;
        
    }
};