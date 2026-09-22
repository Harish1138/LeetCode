class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int low=0;
        int high=s.length()-1;
        while(low<=high){
            if(s[low]!=s[high]){
                if((int)s[low]<(int)s[high]){
                    s[high]=s[low];
                }
                else{
                    s[low]=s[high];
                }
                
            }
            low++;
            high--;

        }
        return s;
        
    }
};