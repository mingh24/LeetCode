class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    answer.emplace_back(i);
                    answer.emplace_back(j);

                    return answer;
                }
            }
        }

        return answer;
    }
};