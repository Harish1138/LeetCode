class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> odd,even;
        for(auto it:nums){
            if(it%2==0){
                even.push_back(it);
            }
            else{
                odd.push_back(it);
            }
        }
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=even[e++];
            }
            else{
                nums[i]=odd[o++];
            }
        }
        return nums;
    }
};