class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX,maxi=INT_MIN;
        int start=-1,end=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<maxi){
                end=i;

            }
            else{
                maxi=nums[i];
            }
            int j=n-1-i;
            if(nums[j]>mini){
                start=j;
            }
            else{
                mini=nums[j];
            }


        }
        if(start==-1) return 0;
        return end-start+1;
        
    }
};