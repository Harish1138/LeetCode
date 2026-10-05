class Solution {
public:
    int scoreOfParentheses(string s) {
        int prevCount=0,currCount=0;
        int score=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                currCount++;
                // prevCount++;
            }
            else{
                currCount--;
                // prevCount--;
                if(s[i-1]=='('){
                    score+=pow(2,currCount);

                }
                
                
            }


        }
        return score;
        
    }
};