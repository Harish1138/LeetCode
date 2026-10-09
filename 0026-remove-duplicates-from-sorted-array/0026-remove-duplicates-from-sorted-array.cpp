class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int i=1;
        int j=0;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]){
                nums[++j]=nums[i];
                i++;
                count++;
            }
            else{
                i++;
                continue;

            }
        }
        return count;
        
    }
};