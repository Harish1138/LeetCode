class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        unordered_map<int,int> mpp;
        for(int i=0;i<divisors.size();i++){
            mpp[divisors[i]]=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0){
                    mpp[divisors[i]]++;
                }
                
                
                
            }
            
        }

        int maxi=INT_MIN;
        int ans=0;
        for(auto it:mpp){
            
            if(it.second>maxi){
                maxi=it.second;
                ans=it.first;
            }
            else if(it.second==maxi){
                int ans1=it.first;
                ans=min(ans1,ans);
                
            }

            
        
        }
        return ans;

        
    }
};