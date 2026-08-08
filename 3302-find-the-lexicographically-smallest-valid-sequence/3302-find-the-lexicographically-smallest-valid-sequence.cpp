class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int j=m-1;
        vector<int> last(m,-1);
        for(int i=n-1;i>=0;i--){
            if(j>=0 && word1[i]==word2[j]){
                last[j]=i;
                j--;
            }
        }
        int k=0;
        vector<int> res;
        int skip=0;
        for(int i=0;i<n;i++){
            if(k==m){
                break;
            }
            if((word1[i]==word2[k]) || (skip==0 && (k==m-1 || i<last[k+1]))){
                res.push_back(i);
                if(word1[i]!=word2[k]){
                    skip++;
                }
                else{
                    skip+=0;
                }
                k++;
            }
        }
        if(k==m){
            return res;
        }
        return vector<int>();
    }
};