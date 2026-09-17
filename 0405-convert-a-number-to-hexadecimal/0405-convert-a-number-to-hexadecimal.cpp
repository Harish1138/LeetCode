class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        string str="";
        unsigned int n=num;
        while(n!=0){
            int rem=n%16;
            if(rem<10){
                str+='0'+rem;
            }
            else{
                str+='a'+(rem-10);
            }
            n/=16;
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};