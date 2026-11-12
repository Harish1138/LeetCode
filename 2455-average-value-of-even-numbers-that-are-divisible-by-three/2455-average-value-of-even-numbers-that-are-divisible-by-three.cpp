class Solution {
public:
    int isDivBy6(int n){
        return n%6==0;
    }
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(auto it:nums){
            if(isDivBy6(it)){
                count++;
                sum+=it;
            }
        }
        if(count==0){
            return 0;
        }
        return sum/count;
        
    }
};