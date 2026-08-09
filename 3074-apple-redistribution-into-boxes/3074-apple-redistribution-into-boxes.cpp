class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sumA=0;
        int ans=0;
        for(auto it:apple){
            sumA+=it;
        }
        int sumB=0;
        for(int it:capacity){
            sumB+=it;
        }
        if(sumA==sumB){
            ans=capacity.size();
        }
        else if(sumA>sumB){
            ans=0;
        }
        else{
            int count=0;
            int sumB=0;
            sort(capacity.begin(),capacity.end(),greater<int>());
            for(int i=0;i<capacity.size();i++){
                sumB+=capacity[i];
                if(sumB>=sumA){
                    ans=i+1;
                    break;
                }


            }
        }
        return ans;
    }
};