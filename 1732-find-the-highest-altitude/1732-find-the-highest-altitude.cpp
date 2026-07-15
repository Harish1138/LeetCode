class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++){
            int num=(ans[i])+(gain[i]);
            ans.push_back(num);
        }
        int max=INT_MIN;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>max){
                max=ans[i];
            }
        }
        return max;

    }
};