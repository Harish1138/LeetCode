class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        string str="";
        for(auto ch:s){
            if(ch=='('){
                if(open>0){
                    str+=ch;
                }
                open++;
            }
            else{
                open--;
                if(open>0){
                    str+=ch;
                }
            }
        }
        return str;
    }
};