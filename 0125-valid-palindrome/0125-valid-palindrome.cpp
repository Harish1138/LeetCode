class Solution {
public:
    bool isValid(char ch){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9'){
            return 1;
        }
        return 0;
    }
    char isLower(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else if(ch>='A' && ch<='Z'){
            return ch-'A'+'a';
        }
        return ch;
    }
    bool checkPalindrome(string s){
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            if(s[st]!=s[e]) return 0;
            else{
                e--;
                st++;
            }
            
        }
        return 1;
        
            
        
        
    }
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(isValid(ch)){
                str.push_back(ch);
            }
        }
        for(int i=0;i<str.length();i++){
            str[i]=isLower(str[i]);
        }
        return checkPalindrome(str);
        
    }
};