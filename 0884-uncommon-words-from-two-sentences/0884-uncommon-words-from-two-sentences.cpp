#include<sstream>
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mpp;
        vector<string> words;

        stringstream ss(s1);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        stringstream ss1(s2);
        string word1;
        while(ss1>>word1){
            words.push_back(word1);
        }

        for(auto word:words){
            mpp[word]++;
        }
        vector<string> ans;
        for(auto word:mpp){
            if(word.second==1){
                ans.push_back(word.first);
            }
        }
        return ans;
        
        
        
    }
};