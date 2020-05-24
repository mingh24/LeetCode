class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        int duplicate = -1;
        int missing = -1;

        for (int num : nums) {
            if (nums[abs(num) - 1] < 0)
                duplicate = abs(num);
            else
                nums[abs(num) - 1] *= -1;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return vector<int>{duplicate, missing};
    }
};