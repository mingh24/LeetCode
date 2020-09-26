class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) {
        bool first_row_has_zero = false;
        bool first_column_has_zero = false;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;

                    if (i == 0) {
                        first_row_has_zero = true;
                    }

                    if (j == 0) {
                        first_column_has_zero = true;
                    }
                }
            }
        }

        for (int i = 1; i < matrix.size(); i++) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < matrix[0].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 1; j < matrix[0].size(); j++) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < matrix.size(); i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (first_row_has_zero) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[0][j] = 0;
            }
        }

        if (first_column_has_zero) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][0] = 0;
            }
        }
    }
};