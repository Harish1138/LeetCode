class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        else if(nums.size()==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        
        int count=1;
        int max1=1;
        for(int i=1;i<nums.size();i++){
            int num=nums[i-1];
            if(num==nums[i]) continue;
            if(num+1==nums[i]){
                count++;
                
            }
            
            else{
                count=1;
                
            }
            max1=max(max1,count);
        }
        return max1;

        
    }
};