class Solution {
public:
    int fib(int n){
        int a=0;
        int b=1;
        int c;
        for(int i=1;i<=n;i++){
            int c=a+b;
            a=b;
            b=c;
            
        }
        return b;
    }
    int climbStairs(int n) {
        return fib(n);
        
        
    }
};