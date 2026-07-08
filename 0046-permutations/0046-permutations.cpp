class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        int fact=1;

        for(int i=n;i>0;i--){
            fact*=i;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<fact;i++){
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return ans;
    }
    
};