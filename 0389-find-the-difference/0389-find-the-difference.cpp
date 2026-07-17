class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.length();
        int m=n+1;
        char ans=0;
        for(char ch:s){
            ans^=ch;
        }
        for(char ch:t){
            ans^=ch;
        }
        return ans;
    }
        
};