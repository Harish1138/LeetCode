class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int sum=0;
        int count=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            sum=sum^nums[right];
            if(nums[right]==0){
                count++;
            }
        }
        if(sum!=0){
            return nums.size();
        }
        if(count==nums.size()){
            return 0;

        }
        return nums.size()-1;
    }
};