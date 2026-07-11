#include<bits/stdc++.h>
class Solution {
public:
    bool isChar(char ch){
        
           if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return 1;
           } 
           else{
            return 0;
           }
        
    }
    char isLower(char ch){
        
        //    char ch=s[i];
        if(ch>='a' && ch<='z'){
            return ch;
        }
        if(ch>='A' && ch<='Z'){
            // char temp=ch;
            return ch-'A'+'a';
            
        }
        return ch;
    }
    bool checkP(string s){
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            if(s[st]!=s[e]){
                return 0;
            }
            else{
                st++;
                e--;
                

            }
            
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(isChar(ch)){
                str.push_back(ch);
            }
        

        }
        for(int i=0;i<str.length();i++){
                char ch=str[i];
                str[i]=isLower(ch);
            
        }
        return checkP(str);

        
    }
};