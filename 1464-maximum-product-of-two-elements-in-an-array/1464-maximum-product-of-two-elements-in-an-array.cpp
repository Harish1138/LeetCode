class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int i=0;
        // int j=i+1;
        int pro=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                pro=max(((nums[i]-1)*(nums[j]-1)),pro);
            }
            
        }
        return pro;
    }
};