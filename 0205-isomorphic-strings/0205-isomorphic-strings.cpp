class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1;
        unordered_map<char,char>m2;
        if(s.length()!=t.length()){
        return false;
        }
        else{
            for(int i=0;i<t.length();i++){
                if(m1.count(s[i])){
                    if(m1[s[i]]!=t[i]){
                        return false;
                    }
                    
                }
                else{
                    m1[s[i]]=t[i];
                }
                if(m2.count(t[i])){
                    if(m2[t[i]]!=s[i]){
                        return false;
                    }
                    
                }
                else{
                    m2[t[i]]=s[i];
                }
            }
            
        }
        return true;
    }
        
};