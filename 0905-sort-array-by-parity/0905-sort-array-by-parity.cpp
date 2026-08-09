class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=-nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=-1*nums[i];
            }
        }
        return nums;
    }
};