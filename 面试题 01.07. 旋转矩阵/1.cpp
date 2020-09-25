class Solution {
public:
    void rotate(vector<vector<int>> &matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                matrix[i][j] ^= matrix[j][i];
                matrix[j][i] ^= matrix[i][j];
                matrix[i][j] ^= matrix[j][i];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                matrix[i][j] ^= matrix[i][n - 1 - j];
                matrix[i][n - 1 - j] ^= matrix[i][j];
                matrix[i][j] ^= matrix[i][n - 1 - j];
            }
        }
    }
};