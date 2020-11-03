class Solution {
public:
    bool validMountainArray(vector<int> &A) {
        int size = A.size();

        if (size < 3) {
            return false;
        }

        int i = 0;

        while (i < size - 1 && A[i] < A[i + 1]) {
            i++;
        }

        if (i == 0 || i == size - 1) {
            return false;
        }

        while (i < size - 1 && A[i] > A[i + 1]) {
            i++;
        }

        return i == size - 1;
    }
};