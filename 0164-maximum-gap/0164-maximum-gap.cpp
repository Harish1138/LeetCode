class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int maxDiff=0;
        int j=1;
        if(nums.size()<2){
            return maxDiff;
        }
        for(int i=0;i<nums.size();i++){
            if(j>=nums.size()) break;
            int min=abs(nums[i]-nums[j++]);
            maxDiff=max(maxDiff,min);
        }
        return maxDiff;
    }
};