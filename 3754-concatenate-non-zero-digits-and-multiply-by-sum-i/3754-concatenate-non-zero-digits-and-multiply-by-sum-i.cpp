class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        int sum=0;
        while(n>0){
            int digit=n%10;
            if(digit!=0){
                sum+=digit;
                x=x*10+digit;
            }
            n/=10;
        }
        long long rev=0;
        while(x>0){
            int dig=x%10;
            rev=rev*10+dig;
            x/=10;

        }
        return rev*sum;
        


    }
};