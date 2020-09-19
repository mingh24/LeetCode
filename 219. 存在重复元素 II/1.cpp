class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        int size = nums.size();
        unordered_map<int, int> num_map;

        for (int i = 0; i < size; i++) {
            if (num_map.find(nums[i]) != num_map.end()) {
                if (i - num_map[nums[i]] <= k) {
                    return true;
                } else {
                    num_map[nums[i]] = i;
                }
            } else {
                num_map[nums[i]] = i;
            }
        }

        return false;
    }
};