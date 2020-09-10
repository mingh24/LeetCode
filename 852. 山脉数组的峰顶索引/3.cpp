class Solution {
public:
    int peakIndexInMountainArray(vector<int> &arr) {
        int left = 0, right = arr.size() - 1;
        int middle;

        while (left <= right) {
            middle = left + (right - left) / 2;

            if (arr[middle] < arr[middle + 1]) {
                left = middle + 1;
            } else if (arr[middle] < arr[middle - 1]) {
                right = middle - 1;
            } else {
                return middle;
            }
        }

        return -1;
    }
};