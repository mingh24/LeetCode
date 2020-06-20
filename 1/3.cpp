class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer(2);
        unordered_map<int, int> num_index_map;

        for (int i = 0; i < nums.size(); i++) {
            if (num_index_map.find(target - nums[i]) != num_index_map.end()) {
                answer[0] = num_index_map[target - nums[i]];
                answer[1] = i;
                break;
            }
            num_index_map[nums[i]] = i;
        }

        return answer;
    }
};