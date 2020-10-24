class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> &A) {
        if (A.empty()) {
            return A;
        }

        int r = A[0].size();
        int c = A.size();
        vector<vector<int>> answer(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                answer[i][j] = A[j][i];
            }
        }

        return answer;
    }
};