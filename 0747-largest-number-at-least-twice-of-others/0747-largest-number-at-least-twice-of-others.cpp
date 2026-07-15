class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        int index=-1;
        int max=-1;
        if(n==0 ){
            ans=-1;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
        }
        sort(nums.begin(),nums.end());
        if(nums[n-2]*2<=max){
            ans=index;
        }
        return ans;
    }
};