class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        vector<int> arr=nums;
        sort(nums.begin(),nums.end());
        int left=0;
        int n=nums.size();
        int right=n-1;

        
        while(left<n && nums[left]==arr[left]){
            left++;
        }
        while(right>=0 && nums[right]==arr[right]){
            right--;
        }
        if(left>=right){
            return 0;
        }
        return right-left+1;
        
        
    }
};