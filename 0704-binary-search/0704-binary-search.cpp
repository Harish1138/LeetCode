class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        
        bool found=false;
        int index=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                index=mid;
                found=true;
                break;
                // return mid;

            }
            else if(nums[mid]<target){
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        if(!found) return -1;
        return index;
    }
};