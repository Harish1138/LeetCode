class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // int n=nums.size();
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int sum=-nums[i];
            int left=i+1,right=n-1;
            while(left<right){
                int s=nums[left]+nums[right];
                if(s==sum){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                
                    while(left<n && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(right>=0 && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(s<sum){
                    // left++;
                    left++;
                }
                else{
                    // left++;
                    right--;
                    
                }
            }
            

        }
        return ans;
        
    }
};