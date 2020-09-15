class Solution {
public:
    int search(vector<int> &nums, int target) {
        int left = 0, right = nums.size();
        int middle;

        while (left < right) {
            middle = left + ((right - left) >> 1);

            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }

        return nums[middle] == target ? left : -1;
    }
};