class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";

        int lowLen = to_string(low).length();
        int highLen = to_string(high).length();

        for (int i = lowLen; i <= highLen; i++) {
            for (int j = 0; i + j <= 9; j++) {
                int num = stoi(s.substr(j, i));

                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }
        }

        return ans;
    }
};