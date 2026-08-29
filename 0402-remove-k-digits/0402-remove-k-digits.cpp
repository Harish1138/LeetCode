class Solution {
public:
    string removeKdigits(string num, int k) {
        string s="";
        stack<char> st;
        for(int i=0;i<num.length();i++){
            while(!st.empty() && st.top()>num[i] &&k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        
        
        reverse(s.begin(),s.end());
        while(s.size()>1 &&s[0]=='0'){
            s.erase(0,1);
        }
        if(s.empty()){
            return "0";
        }
        return s;
    }
};