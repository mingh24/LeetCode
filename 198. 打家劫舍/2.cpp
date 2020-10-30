class Solution {
public:
    int rob(vector<int> &nums) {
        int size = nums.size();

        if (size <= 1) {
            return size == 0 ? 0 : nums[0];
        }

        int first = nums[0];
        int second = max(nums[0], nums[1]);

        for (int i = 2; i < size; i++) {
            int temp = second;
            second = max(second, first + nums[i]);
            first = max(first, temp);
        }

        return second;
    }
};