class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        long long leftSum=0;
        long long totalSum=0;
        int ans=-1;
        for(auto it:nums){
            totalSum+=it;
        }
        for(int i=0;i<nums.size();i++){
            long long rightSum=totalSum-leftSum-nums[i];
            if(rightSum==leftSum){
                ans=i;
                break;
            }
            leftSum+=nums[i];
        }
        return ans;
    }
};