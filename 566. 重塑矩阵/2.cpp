class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();

        if (r * c != m * n) {
            return nums;
        }

        vector<vector<int>> answer(r, vector<int>(c));

        for (int i = 0; i < m * n; i++) {
            answer[i / c][i % c] = nums[i / n][i % n];
        }

        return answer;
    }
};