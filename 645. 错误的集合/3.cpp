class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        int duplicate = -1, missing = -1;
        int original_sum = 0, current_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i]) - 1] < 0) {
                duplicate = abs(nums[i]);
            } else {
                nums[abs(nums[i]) - 1] *= -1;
            }

            current_sum += abs(nums[i]);
        }

        original_sum = nums.size() * (nums.size() + 1) / 2;
        missing = original_sum - current_sum + duplicate;

        return vector<int>{duplicate, missing};
    }
};