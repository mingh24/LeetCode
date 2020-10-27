class Solution {
public:
    int longestMountain(vector<int> &A) {
        if (A.empty()) {
            return 0;
        }

        int answer = 0;
        int size = A.size();
        int left = 0, right = left + 1;

        while (left + 2 < size) {
            right = left + 1;

            if (A[left] < A[left + 1]) {
                while (right + 1 < size && A[right] < A[right + 1]) {
                    right++;
                }

                if (right + 1 < size && A[right] > A[right + 1]) {
                    while (right + 1 < size && A[right] > A[right + 1]) {
                        right++;
                    }

                    answer = max(answer, right - left + 1);
                } else {
                    right++;
                }
            }

            left = right;
        }

        return answer;
    }
};