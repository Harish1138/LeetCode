class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            bool found=false;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    ans[i]=nums[j];
                    found=true;
                    break;
                }
            }
            if(!found){
                for(int j=0;j<i;j++){
                    if(nums[j]>nums[i]){
                        ans[i]=nums[j];
                        // found=true;
                        break;
                    }
                }
            }
            
        }
        return ans;
    }
};