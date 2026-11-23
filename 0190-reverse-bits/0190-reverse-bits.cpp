class Solution {
public:

    int dec(string str){
        

        int num=0;
        for(auto it:str){
            num=num*2+(it-'0');
        }
        return num;
    }
    int reverseBits(int n) {
        string str="";
        for(int i = 0; i < 32; i++){
            int x=n%2;
            str+=to_string(x);
            n/=2;
        }
        (string)str;
        // reverse(str.begin(),str.end());
        return dec(str);

        
    }
};