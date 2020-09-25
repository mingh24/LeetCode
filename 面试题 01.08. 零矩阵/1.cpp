class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) {
        vector<int> zero_rows, zero_columns;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    zero_rows.emplace_back(i);
                    zero_columns.emplace_back(j);
                }
            }
        }

        for (int &row : zero_rows) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = 0;
            }
        }

        for (int &column : zero_columns) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][column] = 0;
            }
        }
    }
};