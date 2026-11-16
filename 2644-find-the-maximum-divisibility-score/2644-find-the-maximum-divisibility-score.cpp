class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        int ans=0;
        int maxi=INT_MIN;
        for(auto it:divisors){
            int score=0;
            for(auto x:nums){
                if(x%it==0){
                    score++;
                }
            }
            if(score>maxi){
                maxi=score;
                ans=it;
            }
            else if(score==maxi){
                int n=it;
                ans=min(n,ans);
            }
        }
        return ans;
    }
};