class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int open=0;
        for(auto ch:s){
            if(ch=='('){
                if(open>0){
                    st.push(ch);
                }
                open++;
            }
            else{
                open--;
                if(open>0){
                    st.push(ch);
                }
            }

        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};