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
    bool completePrime(int num) {
    
        if(!isPrime(num)){
            return false;
        }
        
        int n=num;
        int i=1;
        while(num>0){
            
            if(!isPrime(num)){
                return false;
            
            }
            num=num/10;
            i++;
            
        }
        
        
        int dig = 0;
        int multiplier = 1;

        while(n > 0) {
            int rem = n % 10;

            dig = dig + rem * multiplier;

            if(!isPrime(dig)) {
                return false;
            }

            multiplier = multiplier * 10;
            n = n / 10;
        }
        
        return true;

        
    }
};