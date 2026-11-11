class Solution {
public:
    int size(int n){
        int count=0;
        while(n>0){
            n/=10;
            count++;
        }
        return count;
    }
    bool canAliceWin(vector<int>& nums) {
        int alice=0;
        int bob=0;
        for(auto it:nums){
            if(size(it)==1){
                alice+=it;
            }
            else{
                bob+=it;
            }
        }
        int al1=bob;
        int b=alice;
        
        return (alice>bob || al1>b);

        
    }
};