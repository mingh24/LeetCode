class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer;
        unordered_set<int> num_set;

        for (int num : nums) {
            if (num_set.find(target - num) != num_set.end()) {
                answer.emplace_back(target - num);
                answer.emplace_back(num);
                return answer;
            }

            num_set.emplace(num);
        }

        return answer;
    }
};