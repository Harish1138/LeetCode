
class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int insertions = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } 
            else {
                // If the next character is also ')',
                // we have a complete pair of closing brackets.
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                } 
                else {
                    // Insert one ')' to complete the pair.
                    insertions++;
                }

                // No unmatched '(' available.
                if (open == 0) {
                    insertions++; // Insert '('
                } 
                else {
                    open--;
                }
            }
        }

        // Each remaining '(' needs two closing parentheses.
        return insertions + open * 2;
    }
};
