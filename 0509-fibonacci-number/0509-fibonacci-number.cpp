class Solution {
public:
    int fibb(int n){
        if(n<1){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        return fibb(n-1)+fibb(n-2);
    }
    int fib(int n) {
        return fibb(n);
        
    }
};