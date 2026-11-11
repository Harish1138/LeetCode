class Solution {
public:
    int add(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elSum=0;
        for(auto it:nums){
            elSum+=it;
        }
        int digSum=0;
        for(auto it:nums){
            digSum+=add(it);
        }
        return abs(digSum-elSum);
        
    }
};