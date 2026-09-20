class Solution {
public:
    int reverseDegree(string s) {

        int i=1;
        long long rev=0;
        for(int j=0;j<s.length();j++){
            int sum = 'z'-s[j]+1;
            rev+=i++*sum;
            
        }
        return rev;
        
    }
};