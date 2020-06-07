class Solution {
public:
    int peakIndexInMountainArray(vector<int> &A) {
        int left = 0, right = A.size() - 1;

        while (left < right) {
            int middle = left + (right - left) / 2;

            if (A[middle] > A[middle - 1] and A[middle] > A[middle + 1])
                return middle;
            else if (A[middle] > A[middle + 1])
                right = middle - 1;
            else if (A[middle] > A[middle - 1])
                left = middle + 1;
        }

        return left;
    }
};