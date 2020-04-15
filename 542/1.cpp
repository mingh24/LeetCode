class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), INT_MAX / 2));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0)
                    dp[i][j] = 0;
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (i - 1 >= 0)
                    dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);

                if (j - 1 >= 0)
                    dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = matrix[0].size() - 1; j >= 0; j--) {
                if (i - 1 >= 0)
                    dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);

                if (j + 1 < matrix[0].size())
                    dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
            }
        }

        for (int i = matrix.size() - 1; i >= 0; i--) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (i + 1 < matrix.size())
                    dp[i][j] = min(dp[i][j], dp[i + 1][j] + 1);

                if (j - 1 >= 0)
                    dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
            }
        }

        for (int i = matrix.size() - 1; i >= 0; i--) {
            for (int j = matrix[0].size() - 1; j >= 0; j--) {
                if (i + 1 < matrix.size())
                    dp[i][j] = min(dp[i][j], dp[i + 1][j] + 1);

                if (j + 1 < matrix[0].size())
                    dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
            }
        }

        return dp;
    }
};