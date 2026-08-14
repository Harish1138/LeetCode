class Solution {
    public int maximumLengthSubstring(String s) {
        int left=0;
        int ans=0;
        HashMap<Character,Integer> freq=new HashMap<>();
        for(int right=0;right<s.length();right++){
            char ch=s.charAt(right);
            freq.merge(ch,1,Integer::sum);
            while(freq.get(ch)>2){
                char ch1=s.charAt(left);
                freq.put(ch1,freq.get(ch1)-1);
                left++;
            }
            int length=right-left+1;
            ans=Math.max(ans,length);
        }
        return ans;

    }
}