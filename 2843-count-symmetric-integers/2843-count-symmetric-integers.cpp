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
    int sum(int n){
        int add=0;
        while(n>0){
            add+=n%10;
            n/=10;

        }
        return add;
    }
    bool summ(int n){

        int div=size(n)/2;
        int p=1;
        for(int i=0;i<div;i++){
            p*=10;
        }
        int left=n%p;
        int right=n/p;

        return sum(left)==sum(right);


        

    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(size(i)%2==0){
                if(summ(i)){
                    count++;
                }
            }
        }
        return count;
        
    }
};