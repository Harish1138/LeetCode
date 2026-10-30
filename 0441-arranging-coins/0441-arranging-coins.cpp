class Solution {
public:
    int arrangeCoins(int n) {
        int coins=n;
        if(n==1){
            return 1;
        }
        
        for(int i=1; i<=n; i++){
            coins-=i;
            if(coins<0){
                return i-1;
            }

        }
        return -1;
    }
};