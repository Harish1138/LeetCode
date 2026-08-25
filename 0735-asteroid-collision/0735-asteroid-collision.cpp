class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            int num=asteroids[i];
            if(num>0){
                ans.push_back(num);
            }
            else{
                while(ans.size()!=0 && (ans[ans.size()-1]>0) && ans[ans.size()-1]<abs(num)){
                    ans.pop_back();
                }
                if(ans.size()==0 || ans[ans.size()-1]<0){
                    ans.push_back(num);
                }
                else if(ans[ans.size()-1]==abs(num)){
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};