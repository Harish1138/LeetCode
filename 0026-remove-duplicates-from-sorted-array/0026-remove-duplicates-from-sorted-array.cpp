class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(auto &it:nums){
            if(it!=nums[j]){
                j++;
            }
            nums[j]=it;
        }
        return j+1;
    }
};