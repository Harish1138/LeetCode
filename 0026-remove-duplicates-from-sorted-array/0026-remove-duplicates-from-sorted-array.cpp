class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int e=nums.size()-1;
        int j=0;
        for (int i=0;i<=e;i++){
            if (nums[i]!=nums[j]){
                nums[j+1]=nums[i];
                j++;
            }
        }
        return j+1;
    }
};