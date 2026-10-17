class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos,neg;
        for(auto it:nums){
            if(it<0){
                neg.push_back(it);
            }
            else{
                pos.push_back(it);
            }
        }
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        int i=0,j=0;
        vector<int> ans;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<neg[j]){
                ans.push_back(pos[i++]);

            }
            else{
                ans.push_back(neg[j++]);
            }
        }
        while(i<pos.size()){
            ans.push_back(pos[i++]);
        }
        while(j<neg.size()){
            ans.push_back(neg[j++]);
        }
        return ans;
        
    }
};