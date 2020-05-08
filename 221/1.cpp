class Solution {
public:
    int maximalSquare(vector<vector<char>> &matrix) {
        if (matrix.empty())
            return 0;

        int max_edge = 0;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size()));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == '1') {
                    if (i == 0 or j == 0)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});

                    max_edge = max(max_edge, dp[i][j]);
                }
            }
        }

        return max_edge * max_edge;
    }
};