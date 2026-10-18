class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int n=nums.size();
        long long pro=1;
        int count=0;
        if(k<=1){
            return 0;
        }
        while(right<n){
            pro*=nums[right];
            while(pro>=k){
                pro/=nums[left];
                left++;
            }
            count+=right-left+1;
            right++;
        }
        return count;
        
    }
};