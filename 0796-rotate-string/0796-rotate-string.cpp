class Solution {
public:
    string rotate(string s,int n){
        string str="";
        for(int i=n;i<s.length();i++){
            str+=s[i];
        }
        for(int i=0;i<n;i++){
            str+=s[i];
        }
        
        return str;
    }
    bool rotateString(string s, string goal) {
        int n=0;
        bool found=false;
        while(n<s.length()){
            n++;
            string ans=rotate(s,n);
            if(ans==goal){
                found=true;
            }

        }
        if(!found){
            return false;
        }
        return true;

        
    }
};