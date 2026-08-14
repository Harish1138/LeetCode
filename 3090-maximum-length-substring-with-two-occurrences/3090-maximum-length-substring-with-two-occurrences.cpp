class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> freq;
        int left=0;
        int ans=0;
        int length=0;
        for(int right=0;right<s.length();right++){
            
            freq[s[right]]++;
            while(freq[s[right]]>2){
                freq[s[left]]--;
                left++;
                
            }
            length=right-left+1;
            ans=max(ans,length);
        }
        return ans;
    }
};