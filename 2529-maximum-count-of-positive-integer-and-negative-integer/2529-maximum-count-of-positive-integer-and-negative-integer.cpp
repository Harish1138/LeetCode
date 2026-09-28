class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countP=0;
        int countN=0;
        for(auto it:nums){
            if(it>0){
                countP++;
            }
            else if(it<0){
                countN++;
            }
        }
        return max(countP,countN);
        
    }
};