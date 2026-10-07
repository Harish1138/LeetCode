class Solution {
public:

    set<string> ans;

    void solve(string &s, int index, int leftRemove,
               int rightRemove, int balance, string current) {

        // End of string
        if(index == s.length()) {

            if(leftRemove == 0 &&
               rightRemove == 0 &&
               balance == 0) {

                ans.insert(current);
            }

            return;
        }

        char ch = s[index];

        // Normal character
        if(ch != '(' && ch != ')') {

            solve(s, index + 1,
                  leftRemove, rightRemove,
                  balance,
                  current + ch);

            return;
        }


        // -------------------------
        // OPTION 1: REMOVE
        // -------------------------

        if(ch == '(' && leftRemove > 0) {

            solve(s, index + 1,
                  leftRemove - 1,
                  rightRemove,
                  balance,
                  current);
        }

        if(ch == ')' && rightRemove > 0) {

            solve(s, index + 1,
                  leftRemove,
                  rightRemove - 1,
                  balance,
                  current);
        }


        // -------------------------
        // OPTION 2: KEEP
        // -------------------------

        if(ch == '(') {

            solve(s, index + 1,
                  leftRemove,
                  rightRemove,
                  balance + 1,
                  current + '(');
        }

        else if(ch == ')' && balance > 0) {

            solve(s, index + 1,
                  leftRemove,
                  rightRemove,
                  balance - 1,
                  current + ')');
        }
    }


    vector<string> removeInvalidParentheses(string s) {

        int left = 0;
        int leftRemove = 0;
        int rightRemove = 0;

        // Find extra '(' and ')'
        for(char ch : s) {

            if(ch == '(') {
                left++;
            }

            else if(ch == ')') {

                if(left > 0) {
                    left--;
                }
                else {
                    rightRemove++;
                }
            }
        }

        leftRemove = left;


        solve(s, 0,
              leftRemove,
              rightRemove,
              0,
              "");

        return vector<string>(ans.begin(), ans.end());
    }
};