class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int max1=0;
        for(int i=0;i<nums.size()-2;i++){
            if((nums[i]+nums[i+1]>nums[i+2]) &&(abs(nums[i]-nums[i+1])<nums[i+2])){
                ans=nums[i]+nums[i+1]+nums[i+2];
                max1=max(max1,ans);
            }
        }
        return max1;
    }
};