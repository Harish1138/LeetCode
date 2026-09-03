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
    int lengthLL(ListNode* head){
        int count=0;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int req=lengthLL(head)-n+1;
        if(head->next==nullptr){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        else if(n==lengthLL(head)){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        else{
            int count=0;
            ListNode* temp=head;
            ListNode* prev=nullptr;

            while(temp!=nullptr){
                count++;
                if(count==req){
                    prev->next=prev->next->next;
                    delete temp;
                    break;
                }
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};