class Solution {
public:
    int product(int n){
        int pro=1;
        int m=n;
        while(m>0){
            int digit=m%10;
            pro*=digit;
            m/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        // bool found=false;
        int res=-1;
        int ans=n;
        while(ans>=n){
            if(product(ans)%t==0){
                res=ans;
                break;
            }
            else{
                ans++;
            }
        }
        return res;

        
    }
};