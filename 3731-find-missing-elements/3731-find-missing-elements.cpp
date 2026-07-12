class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int min=nums[0];
        int max=nums[nums.size()-1];
        int j=0;
        for(int i=min+1;i<max;i++){
            while(j<nums.size() && nums[j]<i){
                j++;


            }
            if(j==nums.size() || nums[j]!=i){
                ans.push_back(i);
            }

        }
        return ans;
    }
};