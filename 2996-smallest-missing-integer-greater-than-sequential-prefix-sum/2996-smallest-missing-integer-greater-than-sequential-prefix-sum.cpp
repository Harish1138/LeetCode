class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[nums[i]]=i;
        }
        int sum=nums[0];
        if(nums.size()==1){
            return nums[0]+1;
        }
        else{
            int j=1;
            for(int i=0;i<n;i++){
                if(j>n-1){
                    break;
                }
                if (j>=i && nums[j]==nums[j-1]+1){
                    sum+=nums[j];
                    j++;
                }
                else if(ans.find(sum)!=ans.end()){
                    int next=sum+1;
                    sum=next;
                }
                else if(ans.find(sum)==ans.end()){
                    break;
                }
            }
            
        }
        return sum;
        
    }
};