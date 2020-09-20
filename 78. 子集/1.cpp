class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> answer;
        int size = nums.size();

        if (size == 0) {
            return answer;
        }

        answer.emplace_back();

        for (int i = 0; i < size; i++) {
            vector<vector<int>> temp = answer;

            for (vector<int> &subset : temp) {
                subset.emplace_back(nums[i]);
            }

            answer.insert(answer.end(), temp.begin(), temp.end());
        }

        return answer;
    }
};