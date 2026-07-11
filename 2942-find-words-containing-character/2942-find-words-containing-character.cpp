class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        set<int> set;
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            for(int j=0;j<str.length();j++){
                char ch=str[j];
                if(x==ch){
                    set.insert(i);
                }
            }
        }
        for(auto &st:set){
            ans.push_back(st);
        }
        return ans;
    }
};