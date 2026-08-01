class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=-1;
        bool found=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                found=true;
                idx=i;
                break;
            }
        }
        if(!found){
            return -1;
        }
        return idx;
    }
};