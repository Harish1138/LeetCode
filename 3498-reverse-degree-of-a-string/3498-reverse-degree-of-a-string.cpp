class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mpp;
        char ch='a';
        for(int i=26;i>=1;i--){
            mpp[ch++]=i;
        }
        long long sum=0;
        int j=1;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            for(auto it:mpp){
                if(ch==it.first){
                    sum+=j++*(it.second);
                }
            }

        }
        return sum;
        
    }
};