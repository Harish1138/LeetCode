class Solution {
    public int findNonMinOrMax(int[] nums) {
        int min1=Integer.MAX_VALUE;
        int max1=Integer.MIN_VALUE;
        for(int it:nums){
            min1=Math.min(min1,it);
            max1=Math.max(max1,it);
        }

        int num=-1;
        for(int it:nums){
            if(it!=min1 && it!=max1){
                num=it;

            }
        }
        return num;
        
    }
}