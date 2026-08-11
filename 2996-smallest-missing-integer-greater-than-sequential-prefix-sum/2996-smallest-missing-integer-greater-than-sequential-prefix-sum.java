class Solution {
    public int missingInteger(int[] nums) {
        int n=nums.length;
        List<Integer> lst=new ArrayList<>();
        for(int i=0;i<n;i++){
            lst.add(nums[i]);
        }
        int j=1;
        int ans=0;
        int sum=lst.get(0);
        if(n==1){
            return lst.get(0)+1;
        }
        for(int i=0;i<n;i++){
            
            if(j> n-1) break;
            if(j>=i && nums[j]==nums[j-1]+1){
                sum+=nums[j];
                j++;
                

            }
            else if(!lst.contains(sum)){
                break;
            }
            else if(lst.contains(sum)){
                int next1=sum+1;
                sum=next1;
            }
            
        }
        return sum;
    }
}