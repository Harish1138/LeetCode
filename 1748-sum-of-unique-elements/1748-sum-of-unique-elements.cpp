class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        long long sum=0;
        unordered_map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                sum+=it.first;

            }
        }
        return sum;
        
    }
};