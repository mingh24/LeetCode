class Solution {
public:
    int partition(vector<int> &nums, int start_index, int end_index) {
        int pivot = nums[start_index];
        int left = start_index;
        int right = end_index;

        while (left != right) {
            while (left < right && nums[right] >= pivot)
                --right;

            while (left < right && nums[left] <= pivot)
                ++left;

            if (left < right) {
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
            }
        }

        nums[0] = nums[left];
        nums[left] = pivot;

        return left;
    }

    void quickSort(vector<int> &nums, int start_index, int end_index) {
        if (start_index >= end_index)
            return;

        int pivot_index = partition(nums, start_index, end_index);
        quickSort(nums, start_index, pivot_index - 1);
        quickSort(nums, pivot_index + 1, end_index);
    }

    vector<int> sortArray(vector<int> &nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};