class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans=-1;
        unordered_map<int,int> mpp;
        for(int i=0;i<=nums.size()-k;i++){
            unordered_set<int> seen;
            for(int j=i;j<i+k;j++){
                if(seen.find(nums[j])==seen.end()){
                    mpp[nums[j]]++;
                    seen.insert(nums[j]);
                }
                
            }
        }
        // int max=INT_MIN;

        for(auto it:mpp){
            if(it.second==1){
                ans=max(ans,it.first);
                
            }
        }
        return ans;
    }
};