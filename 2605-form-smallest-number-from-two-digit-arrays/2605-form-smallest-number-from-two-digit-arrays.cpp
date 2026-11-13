class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int mini=INT_MAX;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                mini=min(mini,nums1[i]);
                break;

            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }

        }
        
        return min(mini,min(nums1[0]*10+nums2[0],nums2[0]*10+nums1[0]));
        
    }
};