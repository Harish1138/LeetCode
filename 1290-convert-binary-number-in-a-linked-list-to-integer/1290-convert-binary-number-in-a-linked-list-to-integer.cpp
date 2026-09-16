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
    ListNode* arrToLL(vector<int> &arr){
        ListNode* head=new ListNode(arr[0]);
        ListNode* mover=head;
        for(int i=1;i<arr.size();i++){
            ListNode* temp=new ListNode(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
    int getDecimalValue(ListNode* head) {
        int num=0;
        ListNode* temp=head;
        vector<int> arr;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        reverse(arr.begin(),arr.end());
        head=arrToLL(arr);
        int i=0;
        temp=head;
        while(temp!=nullptr){
            num+=temp->val*pow(2,i++);
            temp=temp->next;
        }
        return num;
        
    }
};