class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for(auto it:nums){
            if(it>0){
                pos.push_back(it);
            }
            else{
                neg.push_back(it);
            }

        }
        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }

        reverse(neg.begin(),neg.end());
        int i=0;
        int j=0;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]>neg[j]){
                ans.push_back(neg[j]);
                j++;
            }
            else{
                ans.push_back(pos[i++]);

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