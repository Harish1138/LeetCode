class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool found=false;
        int index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                index=i;
                found=true;
                break;
            }
            
        }
        if(!found){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target){
                    index=i;
                    break;
                }
            }
        }
        return index;
        
    }
};