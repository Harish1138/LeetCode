class Solution {
public:
    bool odd(int n){
        if(n%2!=0){
            return true;
        }
        return false;
    }
    int rev(int n){
        int num=0;
        while(n>0){
            num=num*10+(n%10);
            n/=10;
        }
        return num;
    }
    int alternateDigitSum(int n) {
        int sum=0;
        int x=0;
        n=rev(n);
        while(n>0){
            int rem=n%10;
            if(odd(x)){
                sum-=rem;
            }
            else{
                sum+=rem;
            }
            x++;
            n/=10;
        }
        return sum;
        
        
    }
};