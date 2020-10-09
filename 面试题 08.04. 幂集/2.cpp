class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> answer{{}};
        helper(nums, answer);

        return answer;
    }

private:
    void helper(vector<int> &nums, vector<vector<int>> &answer) {
        for (int &num : nums) {
            vector<vector<int>> temp(answer.begin(), answer.end());

            for (vector<int> &subset : temp) {
                subset.emplace_back(num);
            }

            answer.insert(answer.end(), temp.begin(), temp.end());
        }
    }
};