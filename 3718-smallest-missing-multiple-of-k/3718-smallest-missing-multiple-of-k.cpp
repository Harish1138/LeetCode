class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(),nums.end());
        int n=nums.size();
        int i=1;
        int ans=0;
        
        while(i<=n+1){
            int candidate=i*k;
            if(st.find(candidate)==st.end()){
                ans=candidate;
                break;
            }
            i++;
        }
        return ans;
    }
};