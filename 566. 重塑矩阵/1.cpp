class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();

        if (r * c != m * n) {
            return nums;
        }

        vector<vector<int>> answer(r, vector<int>(c));
        int x = 0, y = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                answer[x][y] = nums[i][j];

                if (y == c - 1) {
                    x++;
                    y = 0;
                } else {
                    y++;
                }
            }
        }

        return answer;
    }
};