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
    int len(ListNode* head){
        int count=0;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        int mid=len(head)/2;
        ListNode* temp=head;
        int count=0;
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        while(temp!=nullptr){
            count++;
            if(count==mid){
                ListNode* toDelete=temp->next;
                temp->next=temp->next->next;
                delete toDelete;
            }
            temp=temp->next;
            
            
        }
        return head;

        
    }
};