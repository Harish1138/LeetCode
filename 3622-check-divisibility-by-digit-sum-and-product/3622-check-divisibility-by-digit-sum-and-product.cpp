class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int pro=1;
        int sum=0;
        while(n>0){
            int d=n%10;
            pro*=d;
            sum+=d;
            n/=10;
        }
        return (m%(sum+pro)==0);
        
    }
};