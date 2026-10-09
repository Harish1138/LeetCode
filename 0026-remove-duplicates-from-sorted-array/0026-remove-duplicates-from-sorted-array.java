class Solution {
    public int removeDuplicates(int[] nums) {
        int count=1,i=1,j=0;
        while(i<nums.length){
            if(nums[i-1]!=nums[i]){
                count++;
                nums[++j]=nums[i];
                i++;
            }
            else{
                i++;
            }
        }
        return count;
        
    }
}