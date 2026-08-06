class Solution {
public:
    int product(int n){
        int pro=1;
        
        while(n>0){
            int digit=n%10;
            pro*=digit;
            n/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        
        int ans=-1;
        for(int i=n;i<=n+9;i++){
            if(product(i)%t==0){
                ans=i;
                break;
            }
            
        }
        return ans;

        
    }
};