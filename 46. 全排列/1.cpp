class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> answer;
        vector<bool> visited(nums.size(), false);
        vector<int> permutation;
        backtrack(nums, visited, permutation, answer);

        return answer;
    }

private:
    void backtrack(vector<int> &nums, vector<bool> &visited, vector<int> &permutation, vector<vector<int>> &answer) {
        if (permutation.size() == nums.size()) {
            answer.emplace_back(permutation);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!visited[i]) {
                permutation.emplace_back(nums[i]);
                visited[i] = true;
                backtrack(nums, visited, permutation, answer);
                permutation.pop_back();
                visited[i] = false;
            }
        }
    }
};