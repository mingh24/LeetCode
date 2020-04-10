class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> &A) {
        vector<vector<int>> answer(A[0].size(), vector<int>(A.size(), 0));

        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[0].size(); j++) {
                answer[j][i] = A[i][j];
            }
        }

        return answer;
    }
};