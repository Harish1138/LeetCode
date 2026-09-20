class Solution {
public:
    int len(int num){
        int count=0;
        while(num>0){
            count++;
            num/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto it:nums){
            if(len(it)%2==0){
                count++;
            }

        }
        return count;
        
    }
};