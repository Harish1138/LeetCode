class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> p(201);
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            p[n+100].first++;
            p[n+100].second=n;

        }
        sort(p.begin(),p.end(),[](auto &a,auto &b){
            if(a.first!=b.first){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        vector<int> ans;
        for(auto it:p){
            if(it.first>0){
                ans.insert(ans.end(),it.first,it.second);
            }
        }
        return ans;
        
    }
};