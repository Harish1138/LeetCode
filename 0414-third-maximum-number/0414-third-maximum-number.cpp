class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int res=-1;
        

        
        vector<int> ans;
        set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        if(st.size()<=2){
            return nums[nums.size()-1];
        }
        for(auto it:st){
            ans.push_back(it);
        }

        sort(ans.begin(),ans.end(),greater<int>());
        for(int i=0;i<ans.size();i++){
            if(i==2){
                res=ans[i];
                break;
            }
        }
        return res;
    }
};