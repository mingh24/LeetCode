class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> result;
        vector<int> container;
        backtrace(result, container, nums);

        return result;
    }

    void backtrace(vector<vector<int>> &result, vector<int> container, vector<int> nums) {
        if (container.size() == nums.size()) {
            result.emplace_back(container);
            return;
        }

        for (int num : nums) {
            if (count(container.begin(), container.end(), num) < 1) {
                container.emplace_back(num);
                backtrace(result, container, nums);
                container.erase(container.end() - 1);
            }
        }
    }
};