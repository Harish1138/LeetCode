class Solution {
public:
    bool inc(vector<int> &nums){
        int n=nums.size();
        int i=0;
        bool found=false;
        while(i<n-1){
            int j=i+1;

            if(nums[i++]>nums[j]){
                found=true;
                break;
            }
        }
        if(found){
            return false;
        }
        return true;
    }
    bool dec(vector<int> &nums){
        int n=nums.size();
        int i=0;
        bool found=false;
        while(i<n-1){
            int j=i+1;
            if(nums[i++]<nums[j]){
                found=true;
                break;
            }
        }
        if(found){
            return false;
        }
        return true;
    }
   
    
    bool isMonotonic(vector<int>& nums) {
        if(inc(nums) || dec(nums)){
            return true;
        }
        return false;
    }
};