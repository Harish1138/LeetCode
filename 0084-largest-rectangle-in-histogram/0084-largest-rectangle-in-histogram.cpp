class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nse(n,n);
        vector<int> pse(n,-1);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                pse[i]=st.top();
            }
            st.push(i);
        }

        stack<int> st2;
        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && heights[st2.top()]>=heights[i]){
                st2.pop();
            }
            if(!st2.empty()){
                nse[i]=st2.top();
            }
            st2.push(i);
        }

        int area=0;
        for(int i=0;i<n;i++){
            area=max(heights[i]*(nse[i]-pse[i]-1),area);
            
            
        }
        return area;
        
    }
};