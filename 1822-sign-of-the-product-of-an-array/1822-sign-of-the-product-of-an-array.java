class Solution {
    public int arraySign(int[] nums) {
        int count=0;
        for(int it:nums){
            if(it==0){
                return 0;
            }
            else if(it<0){
                count++;
            }

        }
        if(count%2==0){
            return 1;
        }
        return -1;
        
    }
}