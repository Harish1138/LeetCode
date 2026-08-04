class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[nums.size()-1];
        vector<int> ans;
        set<int> st;
        
        for(auto it:nums){
            st.insert(it);
        }
        for(int i=min+1;i<max;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};