class Solution {
public:
    int peakIndexInMountainArray(vector<int> &arr) {
        int left = 0, right = arr.size() - 1;
        int middle;

        while (left <= right) {
            middle = left + (right - left) / 2;

            if (arr[middle] < arr[middle + 1]) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }

        return left;
    }
};