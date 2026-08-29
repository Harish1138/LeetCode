class Solution {
public:
    int largestHis(vector<int> heights){
        stack<int> st;
        int n=heights.size();
        int maxArea=0;
        for(int i=0;i<=n;i++){
            int currH=0;
            if(i!=n){
                currH=heights[i];
            }
            while(!st.empty()&&heights[st.top()]>currH){
                int height=heights[st.top()];
                st.pop();

                int width;
                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }

                maxArea=max(maxArea,height*width);

                
            }
            st.push(i);
            
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>preSum(r,vector<int>(c));
        for(int j=0;j<c;j++){
            int sum=0;
            for(int i=0;i<r;i++){
                
                if(matrix[i][j]=='1'){
                    sum++;
                }
                else{
                    sum=0;
                }
                // sum=0;
                preSum[i][j]=sum;
            }
        }
        int maxArea=0;

        for(int i=0;i<r;i++){
            maxArea=max(maxArea,largestHis(preSum[i]));

        }
        return maxArea;
    }
};