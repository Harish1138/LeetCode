class Solution {
public:
    bool isPrime(int n){
        if(n<2){
            return 0;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int ind=-1;
        int low=0;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int high=0;high<n;high++){
            if(low==n){
                break;
            }
            while(!isPrime(nums[low])){
                low++;
            }
            if(isPrime(nums[low]) && isPrime(nums[high])){
                ind=abs(high-low);
                maxi=max(maxi,ind);
            }

        }
        return maxi;


        
    }
};