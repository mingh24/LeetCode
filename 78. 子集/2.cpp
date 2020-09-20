class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        dfs(0, nums);

        return answer;
    }

private:
    vector<vector<int>> answer;
    vector<int> container;

    void dfs(int begin, vector<int> &nums) {
        if (begin == nums.size()) {
            answer.emplace_back(container);
            return;
        }

        container.emplace_back(nums[begin]);
        dfs(begin + 1, nums);
        container.pop_back();
        dfs(begin + 1, nums);
    }
};