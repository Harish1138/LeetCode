class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map<char,int> mpp;
        char ch;
        for(auto it:s){
            mpp[it]++;
            if(mpp[it]>1){
                ch=it;
                break;
            }
        }
        
        
        return ch;
        
    }
};