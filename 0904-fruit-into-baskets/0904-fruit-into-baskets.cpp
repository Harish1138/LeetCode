class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int low=0;
        int maxi=INT_MIN;
        unordered_map<int,int> mpp;
        for(int high=0;high<n;high++){
            mpp[fruits[high]]++;
            // int k=high-low+1;
            while(mpp.size()>2){
                mpp[fruits[low]]--;
                if(mpp[fruits[low]]==0){
                    mpp.erase(fruits[low]);
                }
                low++;
                // k=high-low+1;
            }
            
            int len=high-low+1;
            maxi=max(len,maxi);
            
            

        }
        if(maxi==INT_MIN){
            return 1;
        }
        return maxi;
        
    }
};