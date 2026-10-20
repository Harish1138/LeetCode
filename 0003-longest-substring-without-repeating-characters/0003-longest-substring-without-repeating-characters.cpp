class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int n=s.length();
        int maxi=INT_MIN;
        if(s.empty()){
            return 0;
        }
        unordered_map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            int k=i-low+1;
            while(mpp.size()<k){
                mpp[s[low]]--;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
                low++;
                k=i-low+1;

            }
            if(mpp.size()==k){
                int len=i-low+1;
                maxi=max(len,maxi);
            }

        }
        
        if(maxi==INT_MIN){
            return 1;
        }

        return maxi;
        
    }
};