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
        int maxi=INT_MIN;
        int left=0,right=nums.size()-1;
        int n=nums.size();
        while(left<n && !isPrime(nums[left])){
            left++;
        }
        while(right>=0 && !isPrime(nums[right])){
            right--;
        }
        return right-left;


        
    }
};