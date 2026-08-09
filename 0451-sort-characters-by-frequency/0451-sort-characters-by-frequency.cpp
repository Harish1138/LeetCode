class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> freq(128);
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            freq[ch].first++;
            freq[ch].second=ch;
        }
        sort(freq.begin(),freq.end(),greater<>());
        string ans;
        for(auto it:freq){
            ans+=string(it.first,it.second);
        }
        return ans;

    }
};