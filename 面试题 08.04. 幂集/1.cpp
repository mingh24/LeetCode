class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> answer{};
        vector<int> subset;
        backtrack(nums, 0, subset, answer);

        return answer;
    }

private:
    void backtrack(vector<int> nums, int begin, vector<int> &subset, vector<vector<int>> &answer) {
        answer.emplace_back(subset);

        for (int i = begin; i < nums.size(); i++) {
            subset.emplace_back(nums[i]);
            backtrack(nums, i + 1, subset, answer);
            subset.pop_back();
        }
    }
};