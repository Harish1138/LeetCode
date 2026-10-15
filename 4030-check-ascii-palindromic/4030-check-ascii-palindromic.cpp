class Solution {
public:
    string binaryString(string s){
        string str="";
        for(auto it:s){
            string x="";
            int ch=(int)it;
            for(int i=0;i<8;i++){
                x+=(ch%2+'0');
                ch/=2;
            }
            reverse(x.begin(),x.end());
            str+=x;
        }
        return str;
    }

    bool isPalindromic(string s) {
        string x=binaryString(s);
        int i=0;
        int j=x.length()-1;
        while(i<j){
            if(x[i]!=x[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;

        
    }
};