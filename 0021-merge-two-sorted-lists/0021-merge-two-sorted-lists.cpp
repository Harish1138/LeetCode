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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode* head=list1;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        ListNode* head1=list2;
        while(head1!=nullptr){
            arr.push_back(head1->val);
            head1=head1->next;
        }
        if(arr.empty()){
            return nullptr;
        }
        sort(arr.begin(),arr.end());
        ListNode* head2=new ListNode(arr[0]);
        ListNode* mover=head2;
        for(int i=1;i<arr.size();i++){
            ListNode* node=new ListNode(arr[i]);
            mover->next=node;
            mover=node;
            
        }
        return head2;

        
    }
};