class Solution {
public:
    const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        vector<int> pos, val;

        // Store non-zero digits
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                val.push_back(s[i] - '0');
            }
        }

        int n = val.size();

        // powers of 10
        vector<long long> power(n + 1, 1);
        for (int i = 1; i <= n; i++)
            power[i] = (power[i - 1] * 10) % MOD;

        // prefix concatenated number
        vector<long long> prefNum(n + 1, 0);

        // prefix digit sum
        vector<long long> prefSum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefNum[i + 1] = (prefNum[i] * 10 + val[i]) % MOD;
            prefSum[i + 1] = prefSum[i] + val[i];
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0], r = q[1];

            int left = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int right = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;

            if (left > right) {
                ans.push_back(0);
                continue;
            }

            int len = right - left + 1;

            long long x = (prefNum[right + 1]
                          - prefNum[left] * power[len] % MOD
                          + MOD) % MOD;

            long long sum = prefSum[right + 1] - prefSum[left];

            ans.push_back((x * sum) % MOD);
        }

        return ans;
    }
};