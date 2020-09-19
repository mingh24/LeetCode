class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        int size = nums.size();
        unordered_map<int, int> num_map;

        for (int i = 0; i < size; i++) {
            if (num_map.find(nums[i]) != num_map.end()) {
                return true;
            }

            num_map[nums[i]] = i;

            if (num_map.size() > k) {
                num_map.erase(nums[i - k]);
            }
        }

        return false;
    }
};