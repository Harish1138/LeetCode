class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int> odd,even;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int o=0,e=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=even[e++];
            }
            else{
                nums[i]=odd[o++];
            }
        }
        return nums;
    }
};