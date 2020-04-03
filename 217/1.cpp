class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_map<int, int> nums_count;

        for (int num : nums)
            ++nums_count[num];

        for (int i = 0, j = nums.size() - 1; i < j; ++i, --j) {
            if (nums_count[nums[i]] > 1)
                return true;
            if (nums_count[nums[j]] > 1)
                return true;
        }

        return false;
    }
};