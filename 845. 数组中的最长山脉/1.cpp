class Solution {
public:
    int longestMountain(vector<int> &A) {
        if (A.empty()) {
            return 0;
        }

        int answer = 0;
        int size = A.size();
        vector<int> left(size);
        vector<int> right(size);

        for (int i = 1; i < size; i++) {
            left[i] = A[i] > A[i - 1] ? left[i - 1] + 1 : 0;
        }

        for (int i = size - 2; i >= 0; i--) {
            right[i] = A[i] > A[i + 1] ? right[i + 1] + 1 : 0;
        }

        for (int i = 1; i < size - 1; i++) {
            if (left[i] > 0 && right[i] > 0) {
                answer = max(answer, left[i] + right[i] + 1);
            }
        }

        return answer;
    }
};