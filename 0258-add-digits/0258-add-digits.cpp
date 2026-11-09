class Solution {
public:
    int count(int n){
        int x=0;
        while(n>0){
            n/=10;
            x++;
        }
        return x;
    }
    int addDigits(int num) {
        if(num>=0 && num<=9){
            return num;
        }
        
        while(count(num)!=1){
            int ans=num%10;
            num/=10;
            num+=ans;
        }
        return num;
        
        
    }
};