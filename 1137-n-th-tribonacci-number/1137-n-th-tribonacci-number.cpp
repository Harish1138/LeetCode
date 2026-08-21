class Solution {
public:
    int tri(int n){
        int a=0;
        int b=1;
        int c=1;
        int sum=0;
        if(n<3){
            if(n==0){
                return 0;
            }
            else if(n==1){
                return 1;
            }
            else{
                return 1;
            }
        }
        for(int i=3;i<=n;i++){
            sum=a+b+c;
            int temp=a;
            a=b;
            b=c;
            c=sum;


        }
        return sum;
    }

    int tribonacci(int n) {
        int num=tri(n);
        return num;

    }
};