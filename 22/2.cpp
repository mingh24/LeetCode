class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n + 1);
        dp[0].emplace_back("");

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                vector<string> dp1 = dp[j];
                vector<string> dp2 = dp[i - 1 - j];

                for (const string &str1 : dp1) {
                    for (const string &str2 : dp2) {
                        dp[i].emplace_back("(" + str1 + ")" + str2);
                    }
                }
            }
        }

        return dp[n];
    }
};