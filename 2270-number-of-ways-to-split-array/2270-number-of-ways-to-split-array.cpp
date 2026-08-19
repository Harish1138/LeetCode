class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        long long sumR=0;
        long long total=0;
        for(auto it:nums){
            total+=it;
        }
        for(int i=0;i<nums.size()-1;i++){
            sumR+=nums[i];
            long long sumL=total-sumR;
            if(sumR>=sumL){
                ans++;
            }
        }
        return ans;
    }
};