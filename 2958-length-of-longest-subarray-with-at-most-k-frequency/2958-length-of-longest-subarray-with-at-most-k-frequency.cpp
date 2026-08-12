class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        int ans=0;
        
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

            while(mpp[nums[i]]>k){
                mpp[nums[j]]--;

                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};