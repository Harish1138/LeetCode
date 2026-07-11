class Solution {
public:
    int search(vector<int>& nums, int target) {
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
            return -1;
        }
        
        return index;
    }
};