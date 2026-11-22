class Solution {
public:
    bool checkString(string s) {
        int count=0;
        for(auto it:s){
            if(it=='a'){
                count++;
            }
        }
        
        if(count==0 && s.length()>0){
            return true;
        }
        int res=0;
        for(int i=0;i<s.length();i++){
            int counta;
            if(s[i]=='a'){
                res++;
                counta=res;
            }
            else{
                res--;
            }
            if(counta==count && counta<=res){
                return true;
            }

        }

        return false;
        
    }
};