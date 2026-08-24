class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int max1=nums[0];
        int min1=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int curMax=max({nums[i],nums[i]*max1,nums[i]*min1});
            int curMin=min({nums[i],nums[i]*max1,nums[i]*min1});

            max1=curMax;
            min1=curMin;
            ans=max(ans,max1);
        }
        return ans;
    }
};