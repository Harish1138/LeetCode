class Solution {
public:
    int firstMatchingIndex(string s) {
        int index=-1;
        int n=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]==s[n-i-1]){
                index=i;
                break;
            }
        }
        return index;
    }
};