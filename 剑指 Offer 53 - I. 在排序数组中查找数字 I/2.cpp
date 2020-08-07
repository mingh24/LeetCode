class Solution {
public:
    int search(vector<int> &nums, int target) {
        int first = 0, last = 0;
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (nums[middle] >= target) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }

        first = left;

        left = 0, right = nums.size() - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (nums[middle] <= target) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }

        last = right;

        return last - first + 1;
    }
};