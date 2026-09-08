class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool> a(101,false);
        for(int b:bulbs){
            a[b]=!a[b];
        }
        vector<int> ans;
        for(int i=0;i<101;i++){
            if(a[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};