class Solution {
public:
    int maxC(vector<int> &nums){
        int maxi=-1;
        for(int i=0;i<256;i++){
            maxi=max(nums[i],maxi);
        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
        int low=0;
        int n=s.length();
        vector<int> f(256,0);
        int maxi=INT_MIN;
        for(int high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;
            int maxCount=maxC(f);
            int diff=len-maxCount;
            while(diff>k){
                f[s[low]]--;
                low++;
                maxCount=maxC(f);
                len=high-low+1;
                diff=len-maxCount;
                
            }
            len=high-low+1;
            maxi=max(len,maxi);

        }
        return maxi;

        
    }
};