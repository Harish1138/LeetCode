class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int num=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(num==nums2[j]){
                    int index=j;
                    bool found=false;
                    for(int k=index+1;k<nums2.size();k++){
                        if(nums2[k]>num){
                            ans.push_back(nums2[k]);
                            found=true;
                            break;
                            // exit(0);
                        }
                    }
                    if(!found){
                        ans.push_back(-1);
                    }
                }
                
            }
        }
        return ans;
    }
};