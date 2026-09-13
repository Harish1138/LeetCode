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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        map<int,int> mpp;
        vector<int> arr;
        vector<int> newArr;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto x : mpp){
            if(x.second==1){
                newArr.push_back(x.first);
            }
        }
        // reverse(newArr.begin(),newArr.end());
        if(newArr.empty()){
            return nullptr;
        }
        ListNode* newTemp=new ListNode(newArr[0]);
        ListNode* mover=newTemp;
        for(int i=1;i<newArr.size();i++){
            ListNode* node=new ListNode(newArr[i]);
            mover->next=node;
            mover=node;
        }
        return newTemp;
        
        
    }
};