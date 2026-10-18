class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0;
        int j=0;
        string str1="";
        string str2="";
        while(i<s.length()){
            if(i==s.length()) break;
            if(s[i]!='#'){
                str1+=s[i];
                // i++;
            }
            else{
                if(!str1.empty()){
                    str1.pop_back();

                }
                

            }
            i++;
        }
        while(j<t.length()){
            if(j==t.length()) break;
            if(t[j]!='#'){
                str2+=t[j];
                // i++;
            }
            else{
                if(!str2.empty()){
                    str2.pop_back();

                }
                

            }
            j++;
        }
        return str1==str2;

        
    }
};