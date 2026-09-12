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
        set<int> st;
        ListNode* temp=head;
        while(temp!=nullptr){
            st.insert(temp->val);
            temp=temp->next;
        }
        if(st.empty()){
            return head;
        }
        head=new ListNode(*st.begin());
        ListNode* mover=head;
        auto it=st.begin();
        it++;
        for(;it!=st.end();it++){
            ListNode* temp=new ListNode(*it);
            mover->next=temp;
            mover=temp;
        }
        return head;

        

        
    }
};