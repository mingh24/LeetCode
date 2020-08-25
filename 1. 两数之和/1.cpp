class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer;

        if (nums.empty()) {
            return answer;
        }

        unordered_map<int, int> num_map;

        for (int i = 0; i < nums.size(); i++) {
            if (num_map.find(target - nums[i]) != num_map.end()) {
                answer.emplace_back(num_map[target - nums[i]]);
                answer.emplace_back(i);
                
                return answer;
            } else {
                num_map.emplace(nums[i], i);
            }
        }

        return answer;
    }
};