class Solution {
public:
    string rev(int n){
        string ans="";
        while(n>0){
            ans+=((n%10)-'0');
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto it:nums){
            string x=rev(it);
            for(auto it:x){
                ans.push_back(it+'0');
            }
        }
        return ans;
        
    }
};