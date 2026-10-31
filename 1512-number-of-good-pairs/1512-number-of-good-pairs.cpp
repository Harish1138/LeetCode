class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n;
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int count=0;
        for(auto it:mpp){
            count+=((it.second*(it.second-1))/2);
        }
        return count;
        
    }
};