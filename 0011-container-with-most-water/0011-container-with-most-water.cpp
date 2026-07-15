class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> area;
        int left=0;
        int right=height.size()-1;
        int max=0;
        while(left<right){
            int width=-(left-right);
            int maxHeight=min(height[left],height[right]);
            int area1=width*maxHeight;
            area.push_back(area1);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }


        }
        // int max=0;
        for(auto &it:area){
            if(it>max){
                max=it;
            }
        }
        return max;
    }
};