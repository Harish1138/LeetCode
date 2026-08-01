class Solution {
public:
    bool isBalanced(string num) {
        int sumO=0;
        int sumE=0;
        
        for(int i=0;i<num.length();i++){
            int n=num[i]-'0';
            if(i%2==0){
                sumE+=n;
            }
            else{
                sumO+=n;
            }
        }
        return sumO==sumE;
    }
};