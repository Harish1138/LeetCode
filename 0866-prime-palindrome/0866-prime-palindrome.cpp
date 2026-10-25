class Solution {
public:
    bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int size(int n){
        int count=0;
        while(n>0){
            count++;
            n/=10;
        }
        return count;
    }
    bool pal(int n){
        int m=n;
        int dig=0;
        while(n>0){
            dig=dig*10+(n%10);
            n/=10;
        }
        return dig==m;
    }
    int primePalindrome(int n) {
        int i=0;
        int limit=2*pow(10,8);
        bool found=false;
        int x=n;
        for(x;x<=limit;x++){
            
            if(size(x)%2==0 && x!=11){
                continue;
            }
            else if(isPrime(x) && pal(x)){
                found=true;
                break;
            }
            


        }
        if(!found){
            return -1;
        }
        return x;

        
    }
};