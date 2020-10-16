class Solution {
public:
    vector<int> sortedSquares(vector<int> &A) {
        vector<int> answer(A.size());

        if (A.empty()) {
            return answer;
        }

        int left = 0;
        int right = A.size() - 1;

        for (int i = A.size() - 1; i >= 0; i--) {
            if (A[left] * A[left] >= A[right] * A[right]) {
                answer[i] = A[left] * A[left];
                left++;
            } else {
                answer[i] = A[right] * A[right];
                right--;
            }
        }

        return answer;
    }
};