class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        vector<int>exp;
        for(auto it:nums){
            if(it!=val){
                exp.push_back(it);
                count++;
            }
        }
        for(int i=0;i<count;i++){
            nums[i]=exp[i];
        }
        return count;

    }
};