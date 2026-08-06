class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        bool found=true;
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<arr.size()-1;i++){
            int d=arr[i+1]-arr[i];
            ans.push_back(d);

        }
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]!=ans[i+1]){
                found=false;
                break;
            }
        }
        if(found){
            return true;
        }
        return false;
    }
};